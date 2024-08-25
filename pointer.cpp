#include<iostream>
using namespace std;
int main(){

    int a=10;
    int *aptr = &a;


cout<<aptr<<endl;

a++;
cout<<*aptr<<endl;


cout<<"\n";

int ch = 'a';
int *cprt = &ch;
cout<<cprt<<endl;

ch++;
cout<<*cprt<<endl;

    return 0;
}