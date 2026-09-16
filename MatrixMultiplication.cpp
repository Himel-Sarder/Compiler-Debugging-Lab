#include<bits/stdc++.h>

using namespace std;

int main(){

    int r1, c1, r2, c2;

    cout << "Enter number of rows and cols in Matrix A: ";
    cin >> r1 >> c1;

    int MatrixA[10][10];

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin >> MatrixA[i][j];
        }
    }

    cout << "Enter number of rows and cols in Matrix B: ";
    cin >> r2 >> c2;

    int MatrixB[10][10];

    for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
            cin >> MatrixB[i][j]; 
        }
    }

    if(c1 != r2){
        cout << "Matrix Multiplication can't implement" << endl;
        return 0;
    }

    int Result[10][10];

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){

            Result[i][j] = 0;

            for(int k = 0; k < c1; k++){
                Result[i][j] += MatrixA[i][k] * MatrixB[k][j];
            }
        }
    }

    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c2; j++){
            cout << Result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
