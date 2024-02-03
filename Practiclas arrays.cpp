#include <iostream>
using namespace std;

const int ROWS = 3; // number of rows in the matrix
const int COLS = 3; // number of columns in the matrix

// function to add two matrices
void addMatrices(int A[][COLS], int B[][COLS], int result[][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int A[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int B[ROWS][COLS] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    int result[ROWS][COLS];

    addMatrices(A, B, result);

    cout << "The sum of the matrices A and B is: " << endl;

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

