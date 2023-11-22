#include <iostream>
using namespace std;

void fun1()
{
    cout<<"*******"<<endl;
}

void fun2()
{
    cout<<"  ***"<<endl;
}

int main()
{
    fun1();
    fun1();
    fun2();
    fun2();
    fun2();
    fun2();
    fun1();
    fun1();
    return 0;
}
