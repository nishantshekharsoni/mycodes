#include <iostream>
using namespace std;
class que
{
    int *st;
    int index;
    int maxsize;
    public:

        que(int size){
            st = new int[size];
            index = 0;
            maxsize = size;
        }
        void enQueue(int val){
            if(index > maxsize-1){
                st[index] = val;
                ++index;
            }
        }
};

int main()
{
}