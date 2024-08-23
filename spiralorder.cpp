#include <iostream>

using namespace std;

signed main()
{

    // get a input from user
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

    // spiral order code

    int row_start = 0;      // Starting row index
    int row_end = n - 1;    // Ending row index
    int column_start = 0;   // Starting column index
    int column_end = m - 1; // Ending column index

    while (row_start <= row_end && column_start <= column_end)
    {
        // fill the top row

      // -------------> left to right

        for (int col = column_start; col <= column_end; col++)
        {
            cout << a[row_start][col] << " ";
        }
        row_start++;

        // for column end

        //  top to bottom

        for (int row = row_start; row <= row_end; row++)
        {
            cout << a[row][column_end] << " ";
        }
        column_end--;

        // row end

        //<-------------- (right to left(wrong diraction) )

        for (int col = column_end; col >= column_start; col--) // remmber col-- because it decrasing
        {
            cout << a[row_end][col] << " ";
        }
        row_end--;

        // column start
        //  bottom to top

        for (int row = row_end; row >= row_start; row--) // remmber row-- 
        {
            cout << a[row][column_start] << " ";
        }
        column_start++;
    }

    return 0;
}



