#include<bits/stdc++.h>
using namespace std;

int** add_matrices(int a[3][3], int b[3][3], int **destination){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            destination [i][j] = a[i][j] + b[i][j];
        }
    }
    return destination;
}

int** sub_matrices(int a[3][3], int b[3][3], int **destination){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            destination [i][j] = a[i][j] - b[i][j];
        }
    }
    return destination;
}

int main()
{
    int matrix1[3][3]= {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    int matrix2[3][3]= {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

// Allocate memory for the result matrix
    int **addResult = new int*[3];
    for (int i = 0; i < 3; i++) {
        addResult[i] = new int[3];
    }

    add_matrices(matrix1,matrix2,addResult);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<addResult[i][j]<<" ";
        }
        cout << endl;
    }
    cout<<endl<<endl;

    int **subResult = new int*[3];
    for (int i = 0; i < 3; i++) {
        subResult[i] = new int[3];
    }

    sub_matrices(matrix1,matrix2,subResult);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<subResult[i][j]<<" ";
        }
        cout << endl;
    }
    
    cout<<endl<<endl;

    
    // Deallocate memory
    for (int i = 0; i < 3; i++) {
        delete[] addResult[i];
        delete[] subResult[i];
    }
    delete[] addResult;
    delete[] subResult;

    return 0;
}