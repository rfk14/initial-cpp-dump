#include <iostream>
using namespace std;

int main() {
    int n1, m1, n2, m2;

    // get input for first matrix
    cout << "Enter number of rows for matrix 1: ";
    cin >> n1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> m1;
    int matrix1[n1][m1];
    cout << "Enter values for matrix 1:" << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // get input for second matrix
    cout << "Enter number of rows for matrix 2: ";
    cin >> n2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> m2;
    int matrix2[n2][m2];
    cout << "Enter values for matrix 2:" << endl;
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // check if matrices can be multiplied
    if (m1 != n2) {
        cout << "Matrices cannot be multiplied!" << endl;
        return 0;
    }

    // initialize result matrix with zeroes
    int result[n1][m2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
        }
    }

    // multiply matrices
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            for (int k = 0; k < n2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // print result matrix
    cout << "Result matrix is:" << endl;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

