#include <iostream>
using namespace std;

// forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    // this the fuction declaration
    int sumcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;

    // individually decatring function friend
    friend int calculator ::sumcomplex(complex o1, complex o2);
    friend int calculator ::sumcompcomplex(complex o1, complex o2);

    // entire class as friend
    // friend class calculator; // this the declaration of entire class friend function

public:
    void setnumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 8);


    calculator calc;
    int res = calc.sumcomplex(o1, o2);
    cout << "the result of sum is " << res << endl;


    int resc = calc.sumcompcomplex(o1, o2);
    cout << "the result of sum is " << resc << endl;

    return 0;
}