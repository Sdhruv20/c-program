#include<iostream>
#include<string>
using namespace std;


// declar the class  
class binary{

    string s;
    public: // defination of the class

        void read(void);// declar to function
        void chk_bin(void);// declar to function
        void once(void);
};

void binary ::read(void){
    cout<< "enter the binary number"<<endl;
    cin>>s;
};
void binary ::once(void){

}

void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"incorrect binary number"<<endl;
            exit(0);
        }
        
    }
    
}

int main(){

    // object
     
    binary R;

    // this are key to what you want print output

    R.read();
    R.chk_bin();
    return 0;
}