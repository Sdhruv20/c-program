

// multi level inheritance

#include <iostream>
using namespace std;

// grand father

class student
{
protected:
    int roll_number;
    string name;

public:
    void set_roll_number(int);
    void get_roll_number(void);
    void set_name(const string &); // Method to set the name
    void get_name(void);           // Method to get the name
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

void student::set_name(const string &n)
{
    name = n;
}

void student::get_name()
{
    cout << "The Student name is " << name << endl;
}

// father

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "the marks of maths are : " << maths << endl;
    cout << "the marks of physicis are : " << physics << endl;
}

// child

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_name(); // Display the name
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    };
};

int main()
{
    result dhruv, tarang;
    dhruv.set_name("Dhruv");
    dhruv.set_roll_number(21);
    dhruv.set_marks(20, 36);
    dhruv.display();

    tarang.set_name("Tarang");
    tarang.set_roll_number(35);
    tarang.set_marks(35, 59);
    tarang.display();
    return 0;
}