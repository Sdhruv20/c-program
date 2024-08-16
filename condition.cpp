#include <iostream>
using namespace std;

int main()
{

    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "rodetrip with neha\n";
        }
        else
        {
            cout << "shopping with neha\n";
        }
    }
    else if (savings > 2500)
    {
        cout << "rohan\n";
    }
    else
    {
        cout << "frends\n";
    }

    return 0;
}