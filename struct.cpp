
// struct uses into store large amout of value example= company empolyees detalies

#include <iostream>
using namespace std;

// struct is as like a date type

// the use of "typedef" is to use esay way to declar
typedef struct employee
{
    int id;
    char name;
    float salary;

    // ep is cpmlasary to wirte
} ep;

int main()
{
    // use of "enum" is  to print output in integer
    enum homwork
    {
        mayur,
        rohan,
        dhruv
    };
    cout << mayur << endl;
    cout << rohan << endl;
    cout << dhruv << endl;



    //  (example of use to typedef)
    // ep rahul;


    // struct employee rahul;
    // {
    //     rahul.id = 1;
    //     rahul.name = 'c';
    //     rahul.salary = 134876543;

    //     cout << "the value of :" << rahul.id << endl;
    //     cout << "the value of :" << rahul.name << endl;
    //     cout << "the value of :" << rahul.salary << endl;
    // };

    return 0;
}