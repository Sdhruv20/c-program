/* 
    1(a)(o1) 4(b)(o1)
    5(a)(o2) 8(b)(o2)
    -----------------
    6        12
*/



#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend complex sumcomplex(complex o1, complex o2);
    void printnumber()
    {

        cout << "your number is " << a <<" + "<< b << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{

    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    complex q1, q2, sum;
    q1.setnumber(1, 4);
    q1.printnumber();

    q2.setnumber(5, 8);
    q2.printnumber();

    sum = sumcomplex(q1, q2);
    sum.printnumber();

    return 0;
}