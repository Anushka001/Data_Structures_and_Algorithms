#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking animal" << endl;
    }
};

class Dog : public Animal
{
};

class pup : public Dog
{
};
int main()
{
    Dog d;
    d.speak();
    cout << d.age << endl;

    pup p;
    p.speak();
    return 0;
}