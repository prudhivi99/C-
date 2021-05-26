#include<iostream>
using namespace std;

void* operator new(size_t size)
{
    cout<<"new object heap size : "<<size<<endl;
    //void *p = new(size);   This will cause infiniteLoop
    void *p = malloc(size);
}

void operator delete(void *p)
{
    cout<<"Overload delete operator"<<endl;
    //delete p;  This will cause infiniteLoop

}

int main()
{
    int *p = new int;

    delete p;
}
