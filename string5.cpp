#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s ="2345678909876543";
     // sort function transfer into highest number
     
    sort(s.begin(), s.end(), greater<int>());

    cout<<s<< endl;


    return 0;
}