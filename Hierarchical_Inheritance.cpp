#include <iostream>
using namespace std;

class A
{
public:
    void func1()
    {
        cout << "Inside func1" << endl;
    }
};

class B : public A
{
public:
    void func2()
    {
        cout << "Inside func2" << endl;
    }
};

class C : public A
{
public:
    void func3()
    {
        cout << "Inside func3" << endl;
    }
};

int main()
{
    A obja;
    obja.func1();

    B objb;
    objb.func1();
    objb.func2();

    C objc;
    objc.func1();
    objc.func3();
    
    return 0;
}