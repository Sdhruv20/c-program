

// dynamic initilization constuctor

#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue; // Corrected the typo here

public:
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};

// Constructor with float interest rate
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestrate);
    }
}

// Constructor with integer interest rate
bankdeposit::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue *= (1 + interestrate);
    }
}

void bankdeposit::show()
{
    cout << endl
         << "Principal amount was " << principal
         << ". Return value after " << years << " years is "
         << returnvalue << endl;
}

int main()
{
    int p, y;
    float r;

    cout << "Enter the amount of p, y and r (where r is a floating point number): " << endl;
    cin >> p >> y >> r;
    
    bankdeposit bd1(p, y, r); // Use the constructor with float interest rate
    bd1.show();

    return 0;
}
