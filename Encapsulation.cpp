#include <iostream>
using namespace std;

class student
{
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};
int main()
{
    student s1;
    cout << "Working...." << endl;

    return 0;
}