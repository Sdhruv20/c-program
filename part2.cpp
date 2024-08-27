
// pointer --> data type which holds the address of otherdata type

#include<iostream>
using namespace std;

int main(){
    
    int a =3;
    int *b = &a;

    // & --> address of opraters
    cout<<"the address of a is :"<<&a<<endl;
    cout<<"the address of a is :"<<b<<endl;


    // * --> (value at ) dereference operater       
    cout<<"the address of a is :"<<*b<<endl;

    return 0;
}