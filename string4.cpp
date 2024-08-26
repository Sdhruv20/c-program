
// transform string

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s ="owieuhfndmkehrf";

//  transform is a function
// (s.begin() to s.end indicats where it starts and end )
// ( agin s.begin indicats where do you want to start convert)
// (and [::to] indicates to convert into...)


    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s<<endl;

    return 0;
}