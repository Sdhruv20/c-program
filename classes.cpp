#include <iostream>
using namespace std;

class office
{

private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1); // function declaration to call value(that's means to say e tumhe
    // aje miljaye ga so, compiler will find)
    
    void getdata()
    {
        cout << "the value of a is" << a << endl;
        cout << "the value of b is" << b << endl;
        cout << "the value of c is" << c << endl;
        cout << "the value of d is" << d << endl;
        cout << "the value of e is" << e << endl;
    };
};

void office ::setdata(int a1, int b1, int c1)// another way to declar function as it is upon for private class
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    office dhruv; // object
// this for public class
    dhruv.d=5;
    dhruv.e=6;
    // dhruv.a =7; i can not declare like this because a is in private class

    // this metode use to print private class
    dhruv.setdata(1,2,3);
    dhruv.getdata();


    return 0;
}