 

#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main()
{
    clsMyStack<int> MyStack;
    
    MyStack.Push(10);
    MyStack.Push(20);
    MyStack.Push(30);
    MyStack.Push(40);
    MyStack.Push(50);

    MyStack.Print();
    MyStack.Pop();
    MyStack.Print();
    system("pause>0");
    return 0;
}
 