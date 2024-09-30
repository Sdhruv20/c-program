

// Ambiguity resoluation in inheritance : in this program we call derived class

#include <iostream>
using namespace std;

// Ambiguity 1

class base1
{

public:
    void greet()
    {
        cout << "how are you ?" << endl;
    }
};

class base2
{

public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class derived : public base1, public base2
{
public:
    void for_derived_class()
    {
        base1 ::greet();
        base2 ::greet();
    }
};

// Ambiguity 2

class B
{
public:
    void ask()
    {
        cout << "hello my friend" << endl;
    }
};

// // if i write this type of syntex[ class D : public B] it means it automatically takes upone class.
// // and in class D already have massage it takes automatically 
class D : public B
{
public:
    void ask()
    {
        cout << "kem cho bappu" << endl;
    }
};

int main()
{
     // Ambiguity 1

    // base1 obj1;
    // base2 obj2;
    // obj1.greet();
    // obj2.greet();
    // derived d;
    // d.for_derived_class();

    // Ambiguity 2

    B ll;
    ll.ask();
    D aa;
    aa.ask();

    return 0;
}