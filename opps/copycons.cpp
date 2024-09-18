
// copy constructors

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    } // defualt constructor

    number(int num)
    {
        a = num;
    } // constructor


    // when no copy constructor is found , compiler supplies its own constructor
    // it is not a necessary to write
    // copy constructor declaration

    number(number &obj)
    {
        cout << "copy constructor called " << endl;
        a = obj.a;
    }

    void display()
    {
        cout << " the number for the objects is " << a << endl;
    }
};

int main()
{
    number x, y, z(34);
    z.display();
    x.display();
    y.display();

    // initialization of copy constructor
    number d(z); // copy constructor invoked
    d.display();

    number z3 = z;


    return 0;
}