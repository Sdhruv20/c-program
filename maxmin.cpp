#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;

    int array[n];
    for (int i = 0; i <=n; i++)
    {
        cin>>array[i];
    }

    int maxNo=INT_MIN;
    int minNO=INT_MAX;

    for (int i = 0; i < n; i++)
    {
       maxNo=max(maxNo,array[i]);
       
        minNO=min(minNO,array[i]);
    }
    
    cout<<maxNo<<" "<<minNO<<endl;
    
    return 0;
}

