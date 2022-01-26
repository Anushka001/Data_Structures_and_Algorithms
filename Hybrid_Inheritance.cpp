#include <iostream>
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "Inside class A" << endl;
    }
};

class D
{
public:
    void funcD()
    {
        cout << "Inside class D" << endl;
    }
};

class B : public A
{
public:
    void funcB()
    {
        cout << "Inside class B" << endl;
    }
};

class C : public A, public D
{
public:
    void funcC()
    {
        cout << "Inside class C" << endl;
    }
};
int main()
{
    A a;
    B b;
    C c;
    D d;

    a.funcA();

    b.funcA();
    b.funcB();

    c.funcA();
    c.funcC();
    c.funcD();

    d.funcD();

    return 0;
}