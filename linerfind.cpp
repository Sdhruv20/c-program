

// when i want to get value from user at that time declare the 'n'

#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    for (int i = 0; i <=n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return 75;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <=n; i++)
    {
        cin>>arr[i];

    }
        int key;
        cin>>key;
 cout<<search(arr,n,key)<<endl;


    return 0;
}



// if i have value and find the location

int search(int arr[], int key){
    for (int i = 0; i <=5; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return 75;
}

int main(){

   // int n;
    //cin>>n;
    int arr[5]={5,4,50,60,3};
    
        int key;
        cin>>key;
 cout<<search(arr,key)<<endl;


   return 0;
}