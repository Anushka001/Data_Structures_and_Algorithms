#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Speaking animal" << endl;
    }
};

class Dog
{
public:
    void bark()
    {
        cout << "Barking animal" << endl;
    }
};

class Lion : public Animal, public Dog
{
};
int main()
{
    Lion l1;
    l1.bark();
    l1.speak();
    return 0;
}