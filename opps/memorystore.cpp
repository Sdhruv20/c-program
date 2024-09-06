
// memory allocation using through arrays in classes

// if i want to store name using string not [char]

/*The issue in your program is that custname is defined as a single char array with a fixed size of 100.
This means it can only hold a single string of up to 99 characters
 (the 100th character would be reserved for the null terminator \0).*/

#include <iostream>
#include <string>
using namespace std;

class shop
{

    int itemid[100];
    int itemprice[100];
    string custname[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "enter ID number" << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter PRICE of your item" << endl;
    cin >> itemprice[counter];
    cout << "enter the COUSTMER name" << endl;
    cin >> custname[counter];
    counter++;
}

void shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " the ITEM ID is : " << itemid[i]
             << " and name of COUSTMER is : " << custname[i]
             << " and price is : " << itemprice[i] << endl;
    }
}
int main()
{
    shop d;
    d.initcounter();

    // if i want to add more data just using (d.setprice();)
    d.setprice();
    d.setprice();
    d.setprice();
    d.displayprice();

    shop r;
    r.initcounter();
    r.setprice();
    r.displayprice();

    return 0;
}