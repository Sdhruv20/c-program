#include<iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;

    char op; // oprater means +,-,%,/ to give oder
    cout<<"input the op"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    default:
    cout<<"enter the another operater"<<endl;
        break;
    }

    return 0;
}