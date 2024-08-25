// seraching the element in matrix.

#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;


//Declares two integer variables n and m. These will be used to store the number of rows (n) and columns
// (m) of a 2D array. cin >> n >> m; reads these values from the user.

    int target;
    cin >> target;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }


// use the bool flage to find value

    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (a[r][c] == target)
        {
            found = true;
        }

        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "element found";
    }
    else
    {
        cout << "element does not found";
    }

    return 0;
}