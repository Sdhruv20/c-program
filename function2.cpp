

// function = uses of function into work multitime (means= "make once and uses multipal time")

#include <iostream>
using namespace std;

// here i make function. the name of function is "(sum)" and give value "int a" and "int ".
// (int a, int b) is a parameters
int sum(int a, int b)
{
    int c = a + b;
    return c; // here return 0 means to what i wnat to print
}

int main()
{

    // the (num1) and (num2) value gives in "(int a)" and "(int b)"
    int num1, num2;
    cout << "enter first the number" << endl;
    cin >> num1;

    cout << "enter second the number" << endl;
    cin >> num2;

    //  sum(num1, num2) that means the value gives (int a , int b)

    cout << "the sum is :" << sum(num1, num2) << endl;
    return 0;
}