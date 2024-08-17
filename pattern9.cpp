
// number pattern (there is 3 loop take 1 for the rows/ second for the speace/
// thrid loop for number which is "j" )

//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5




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


        for (j = 1; j <= i; j++) // third loop for *
        {
            cout <<j<<" ";
        }

        cout << endl;
    }

    return 0;
}