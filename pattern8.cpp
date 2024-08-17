

// rhombus pattern

//       ********
//      ********
 //    ********
//    ********
//   ********
//  ********
// ********
//********

#include <iostream>
using namespace std;
int main()
{

    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++) // first loop for rows
    {
        for (j = 1; j <= n - i; j++) // second loop for speac
        {
            cout << " ";
        }


        for (j = 1; j <= n; j++) // third loop for *
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}