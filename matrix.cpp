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

// function to produce the addition between 2 matrixes
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

// function to multiply 2 matrixes
void MultiplyMat(int A[M][N], int B[M][N], int C[M][N], int r, int c)
{
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
}

int main()
{
    int A[M][N];
    int B[M][N];
    int m, n;
    cin >> m >> n;
    InMat(A, m, n);
    InMat(B, m, n);
    int Sum[M][N];
    SumMat(A, B, Sum, m, n);
    OutMat(Sum, m, n);
}