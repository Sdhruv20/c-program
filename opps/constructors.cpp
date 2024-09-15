
// constructors = a special member fuction with same name as of the class.
// use to initializ the objects of its class
// it is automatically invoked(call by something) whenever an objects is created

#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex(void); // constructor declaration
    void display(void)
    {
        cout << "your number is " << a << " + " << b << endl;
    }
};

// the scope resolation operator in C++ is [ "::" ]

complex ::complex(void) // this is a default constructor as it takes no parameters
{
    a = 10;
    b = 5;
}; 
int main()
{

    complex c;
    c.display();

    return 0;
}