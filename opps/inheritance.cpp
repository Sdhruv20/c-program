

// basic about inheritance 

#include <iostream>
using namespace std;

//  base class

class employee
{
    int id;
    float salary;
    public :
        employee(int inpID){
            id = inpID;
            salary= 35;
        }
};

// derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class methods/member/etc...
}
*/

/*
    ---note --
    1). default visibility mode is private
    2). private visibility mode : public members of the base class becomes private members of the derived class.
    3). public visibility mode  : public members of the base class becomes public members of the derived class. 
    4). private member are never inherited
*/

// creating a progtammer class derived from employee base class
class programmer : employee{
    public :
         int languagecode =9;
};


int main()
{

    return 0;
}