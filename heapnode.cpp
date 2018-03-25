#include "heapnode.h"

heapNode::heapNode()
{
    nukem();
}

heapNode::heapNode(const string& text,const int& numberLine, const int& numberParagraph)
{
    line = text;
    lineNumber = numberLine;
    paragraphNumber = numberParagraph;
}

heapNode::~heapNode()
{
    nukem();
}

heapNode::heapNode(const heapNode& other)
{
    copy(other);
}

heapNode heapNode::operator=(const heapNode& other)
{
    if(this != &other)
    {
        nukem();
        copy(other);
    }
    return *this;
}

void heapNode::nukem()
{
    line = "";
    lineNumber = 0;
    paragraphNumber = 0;
}

void heapNode::copy(const heapNode& other)
{
    line = other.line;
    lineNumber = other.lineNumber;
    paragraphNumber = other.paragraphNumber;
}

void heapNode::setInfo(const string& word, const int& linePos, const int& paragraphPos)
{
    line = word;
    lineNumber = linePos;
    paragraphNumber = paragraphPos;
}

int heapNode::getLine()
{
    return lineNumber;
}

int heapNode::getParagraph()
{
    return paragraphNumber;
}

string heapNode::getWord()
{
    return line;
}

ostream& operator<<(ostream& out, const heapNode& item)
{
    out<<item.line<<" Paragraph number||LineNumber, "<<item.paragraphNumber<<"||"<<item.lineNumber;

    return out;
}

istream& operator>>(istream& in, heapNode& item)
{
    cout<<"Input the string please"<<endl;
    in>>item.line;

    return in;
}

bool operator>=(const heapNode& one, const heapNode& two)
{
    return one.line >= two.line;
}

bool operator<=(const heapNode& one, const heapNode& two)
{
    return one.line <= two.line;
}

bool operator<(const heapNode& one, const heapNode& two)
{
    return one.line < two.line;
}

bool operator>(const heapNode& one, const heapNode& two)
{
    return one.line > two.line;
}
