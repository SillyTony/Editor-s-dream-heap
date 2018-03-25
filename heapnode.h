#ifndef HEAPNODE
#define HEAPNODE

#include <iostream>
#include <string>

using namespace std;

class heapNode
{
    public:
        heapNode();
        heapNode(const string&, const int&, const int&);
        ~heapNode();
        heapNode(const heapNode&);
        heapNode operator=(const heapNode&);

        void setInfo(const string&, const int&, const int&);
        int getLine();
        int getParagraph();
        string getWord();

        friend
        ostream& operator<<(ostream&, const heapNode&);

        friend
        istream& operator>>(istream&, heapNode&);

        friend
        bool operator>=(const heapNode&, const heapNode&);

        friend
        bool operator<=(const heapNode&, const heapNode&);

        friend
        bool operator<(const heapNode&, const heapNode&);

        friend
        bool operator>(const heapNode&, const heapNode&);

    private:
        string line;
        int lineNumber, paragraphNumber;

        void nukem();
        void copy(const heapNode&);
};

#endif // HEAPNODE
