#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    // If the matrix is not square, transposition is not possible
    if (n != m)
    {
        cout << "Matrix is not square. Transposition is not possible." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < m; j++)
        {

            // swap

            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}