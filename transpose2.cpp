#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Declaring the matrix with dimensions n x m
    int a[n][m];

    // Input the matrix elements
    for (int i = 0; i < n; i++) { // Change <= to <
        for (int j = 0; j < m; j++) { // Change <= to <
            cin >> a[i][j];
        }
    }

    // If the matrix is not square, transposition is not possible
    if (n != m) {
        cout << "Matrix is not square. Transposition is not possible." << endl;
        return 1;
    }

    // Transpose the matrix (only valid for square matrices)
    for (int i = 0; i < n; i++) { // Change <= to <
        for (int j = i + 1; j < m; j++) { // Change i <= m to j < m
            // Swap elements a[i][j] and a[j][i]
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    // Output the transposed matrix
    for (int i = 0; i < n; i++) { // Change <= to <
        for (int j = 0; j < m; j++) { // Change <= to <
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}