
// 0-1 pattern (where is 1 located to sum i and j divid by 2 (i+j)%2==0 )

// 1 0 1 0 1 0
//0 1 0 1 0
// 1 0 1 0
// 0 1 0
// 1 0
// 0 


#include<iostream>
using namespace std;
int main(){

    int i,j,n;
    cin>>n;

    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=n+1-i; j++)
        {
            if ((i+j)%2==0)
            {
                cout<<" 1";
            }
            else{
                cout<<" 0";
            }
            
    
        }
        cout<<endl;
    }
    

    return 0;
}