#include <bits/stdc++.h>
#define M 10
#define N 10
using namespace std;

void InMat(int A[M][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> A[i][j];
        }
    }
}

void OutMat(int A[M][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void SumMat(int A[M][N], int B[M][N], int C[M][N], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

bool MultiplyMat(int A[M][N], int B[M][N], int C[M][N], int r, int c)
{
    if (r != c)
    {
        printf("Can't multiply");
        return false;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return true;
}

int main()
{
    int A[M][N];
    int B[M][N];
    int m, n;
    printf("How many row and column:");
    cin >> m >> n;
    printf("Enter the first matrix:\n");
    InMat(A, m, n);
    printf("Enter the second matrix:\n");
    InMat(B, m, n);
    int Sum[M][N];
    SumMat(A, B, Sum, m, n);
    printf("Sum of the matrixes:\n");
    OutMat(Sum, m, n);
    int Multiply[M][N];
    if (MultiplyMat(A, B, Multiply, m, n))
    {
        printf("Multiply of the matrixes:\n");
        OutMat(Multiply, m, n);
    }
}