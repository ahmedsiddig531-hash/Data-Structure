 

#include <iostream>
#include "clsMyDynamicArray.h"
using namespace std;

int main()
{ 
    clsDynamicArray<int> MyArray(5);

    MyArray.SetItem(0, 1);
    MyArray.SetItem(1, 10);
    MyArray.SetItem(2, 50);
    MyArray.SetItem(3, 100);
    MyArray.SetItem(4, 150);

    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    MyArray.InsertAt(2, 5);
    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    MyArray.InsertAtBegining(3);
    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    MyArray.InsertBefore(1, 2);
    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    MyArray.InsertAfter(3, 60);
    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    MyArray.InsertAtEnd(1000);
    cout << "\nSize = " << MyArray.Size() << endl;
    MyArray.PrintList();
    system("pause>0");
    return 0;
}
 