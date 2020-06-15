#include <iostream>
using namespace std;

class queue
{
private:
    int front, rear, *qu, maxsize;

public:
    queue(int size)
    {
        front = -1;
        rear = -1;
        maxsize = size;
        qu = new int[size];
    }
    
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
            return true;
        return false;
    }
   
    bool isFull()
    {
        if (rear == maxsize - 1)
            return true;
        return false;
    }

    
    void enQueue(int val)
    {
        if (isFull())
            return;

        else if (isEmpty())
        {
            ++front;
            ++rear;
        }
        else
        {
            ++rear;
        }

        qu[rear] = val;
    }
};

int main()
{
}