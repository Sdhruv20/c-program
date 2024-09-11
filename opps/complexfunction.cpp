#include<iostream>
using namespace std;
class c2;

class c1{
    int val;
    friend void sawp(c1 &,c2 &);
    public:
        void intdata(int a){
                val=a;
        }

        void display(void){
            cout<<val<<endl;
        }
};

class c2{
    int val2;
      friend void sawp(c1 &,c2 &);
    public:
        void intdata(int b){
                val2=b;
        }

        void display(void){
            cout<<val2<<endl;
        }
};

void sawp(c1 & x, c2 & y){
    int tmp =x.val;
    x.val= y.val2;
    y.val2=tmp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.intdata(34);
    oc2.intdata(55);
    sawp(oc1,oc2);

    cout<<"the value of c1 after exchanging become : ";
    oc1.display();
     cout<<"the value of c2 after exchanging become : ";
    oc2.display();

    return 0;
}