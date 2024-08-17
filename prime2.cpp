#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int i, j;

    for ( i = a; i <=b; i++)
    {
        for (j = 2; i <=i; j++)
        {
            if (i%j==0)
            {
                break;
            }
            
        }
        if (i==j)
        {
           cout<<i<<endl;
        }
        
        
    }
    

    return 0;
}