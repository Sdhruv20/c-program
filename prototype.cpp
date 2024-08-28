
// function prototype

#include <iostream>
using namespace std;

// syntex of function protptypoe
// means if i write function in after "int main" the code will not run
// but if i give function prototype in frist the prototype give commant to find and run the perogram.

int sum(int a, int b);

int main()
{
    // the (num1) and (num2) value gives in "(int a)" and "(int b)"
    int num1, num2;
    cout << "enter first the number" << endl;
    cin >> num1;

    cout << "enter second the number" << endl;
    cin >> num2;

    //  sum(num1, num2) that means the value give (int a , int b)

    cout << "the sum is :" << sum(num1, num2) << endl;

    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c; // here return 0 means to what i wnat to print
}