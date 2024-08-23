

// 2D array

#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;

    // Declaring the array with dimensions n x m
    int arr[n][m];

    // Input values for the array
    for (int i = 0; i < n; i++) // Use i < n
    {
        for (int j = 0; j < m; j++) // Use j < m
        {
            cin >> arr[i][j];
        }
    }

    // Output the matrix

    cout << "matrix is : \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " "; // Use arr[i][j] because of elements
        }
        cout << "\n";
    }

    return 0;
}