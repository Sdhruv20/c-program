

// recursion (the function calls own fuction until the base condition can not find)

#include<iostream>
using namespace std;

//  if i write "a" insted of "n" it will rune because the function understand the call value 

int fib(int a){
    if (a<=2)
    {
        return 1;
    }
    
 return fib(a-2) + fib(a-1);
}
int main(){
    
    int a;
    cout<<"the value of number is"<<endl;
    cin>>a;

    cout<<"the fibonacci position "<<a<< " is"<<fib(a)<<endl;
    
    return 0;
}