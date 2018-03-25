#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <utility>
#include "heapnode.h"

using namespace std;

enum HEAPERRORS{HEAP_FULL, HEAP_EMPTY};

template<typename T>
class heap
{
    public:
        heap();
        ~heap();
        heap(const heap<T>&);
        heap operator=(const heap<T>&);

        void insert(T* d);
        T *pop();
        T root();
        void clear();
        bool empty();
        int size() const;
        void find(T data);
        string print(vector<pair<int , string> > &);

        template<typename U>
        friend
        ostream& operator<<(ostream& out, heap<U> &h);

        template<typename U>
        friend
        istream& operator>>(istream& in, heap<U> &h);

    private:
        vector<T*> heapTree;

        void nukem();
        void copy(const heap&);
        void swap(T *&x, T *&y);
        void reheapifyUp();
        void reheapifyDown();
};


template<typename T>
heap<T>::heap()
{
    heapTree.resize(0);
}

template<typename T>
heap<T>::~heap()
{
    nukem();
}

template<typename T>
heap<T>::heap(const heap<T>& other)
{
    copy(other);
}

template<typename T>
heap<T> heap<T>::operator=(const heap& other)
{
    if(this != &other)
    {
        nukem();
        copy(other);
    }
    return *this;
}

template<typename T>
T heap<T>::root()
{
    return *heapTree[0];
}

template<typename T>
void heap<T>::clear()
{
    nukem();
}

template<typename T>
void heap<T>::nukem()
{
    heapTree.clear();
}

template<typename T>
void heap<T>::copy(const heap<T>& other)
{
    heapTree = other.heapTree;
}

template<typename T>
bool heap<T>::empty()
{
    return !heapTree.size();
}

template<typename T>
int heap<T>::size() const
{
    return heapTree.size();
}

template<typename T>
void heap<T>::swap(T*& x, T*& y)
{
    T* temp = x;
    x = y;
    y = temp;
}

template<typename T>
void heap<T>::find(T data)
{
    int currentPosition = 0;

    while(currentPosition <= heapTree.size())
    {
        if(data == *heapTree[currentPosition])
            return true;
        else if(data < *heapTree[currentPosition])
            currentPosition*2+1;
        else
            currentPosition*2+2;
    }
    return false;
}

template<typename T>
void heap<T>::insert(T* d)
{
    heapTree.push_back(d);
    reheapifyUp();
}

template<typename T>
T* heap<T>::pop()
{
    if(empty())
        throw HEAP_EMPTY;

    T* temp = heapTree[0];
    heapTree[0] = heapTree[heapTree.size()-1];
    heapTree.pop_back();
    reheapifyDown();

    return temp;
}

template<typename T>
void heap<T>::reheapifyUp()
{
    int currentPosition = heapTree.size()-1, parentPosition;

    while (*heapTree[currentPosition] < *heapTree[parentPosition = (currentPosition-1)/2])
    {
        swap(heapTree[currentPosition],heapTree[parentPosition]);
        currentPosition = parentPosition;
    }
}

template<typename T>
void heap<T>::reheapifyDown()
{
    int currentPosition = 0, leftChild, rightChild;
    int heapSize = heapTree.size();
    bool nextPosition = heapSize - 1;

    while(nextPosition)
    {
        leftChild = 2*currentPosition+1;
        rightChild = 2*currentPosition+2;

        if(leftChild >= heapSize)
            nextPosition = false;
        else if (rightChild >= heapSize)
        {
            if (*heapTree[currentPosition] > *heapTree[leftChild])
            {
                swap(heapTree[currentPosition],heapTree[leftChild]);
                currentPosition = leftChild;
            }
            nextPosition = false;
        }
        else
        {
            if((*heapTree[currentPosition] > *heapTree[leftChild] && *heapTree[leftChild] <= *heapTree[rightChild]))
            {
                swap(heapTree[currentPosition], heapTree[leftChild]);
                currentPosition = leftChild;
            }
            else if(*heapTree[currentPosition] > *heapTree[rightChild])
            {
                swap(heapTree[currentPosition], heapTree[rightChild]);
                currentPosition = rightChild;
            }
            else
                nextPosition = false;
        }
    }
}

template<typename T>
string heap<T>::print(vector<pair<int, string> > & popular)
{
    heapNode* temp;
    ostringstream output;
    int count = 1;

    try
    {
        temp = pop();
        output<<*temp;
        if(popular.size() < 10)
            popular.push_back(make_pair(count,temp->getWord()));
        while(!heapTree.empty())
        {
            if(*temp < *heapTree[0])
            {
                if(popular.size() < 10 || count > popular[popular.size()-1].first)
                {
                    popular.push_back(make_pair(count,temp->getWord()));
                    for(int i = popular.size()-1; i > 0; i--)
                        if(popular[i].first > popular[i-1].first)
                            std::swap(popular[i],popular[i-1]);
                }

                if(popular.size() > 10)
                    popular.pop_back();

                output<<endl<<"Repetition: "<<count<<endl<<endl;
                temp = pop();
                output<<*temp;
                count = 1;
            }
            else
            {
                temp = pop();
                count++;
                output<<", "<<temp->getParagraph()<<"||"<<temp->getLine();
            }
        }
    }
    catch(HEAPERRORS)
    {
        output<<T();
    }
    return output.str();
}

template<typename U>
ostream& operator<<(ostream& out, heap<U> &h)
{
    while(!h.empty())
        out<<h.pop();

    return out;
}

template<typename U>
istream& operator>>(istream& in, heap<U> &h)
{
    U    data;
    in>>data;
    h.insert(data);

    return in;
}


#endif // HEAP_H
