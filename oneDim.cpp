#include <bits/stdc++.h>
#define LEN 100
using namespace std;

void Input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int Insert(int A[], int &n, int insertNum, int pos)
{
    if (pos < 0 || pos > n || n == LEN)
    {
        return -1;
    }
    n++;
    for (int i = n; i > pos; i--)
    {
        A[i] = A[i - 1];
    }
    A[pos] = insertNum;
    return 0;
}

int Erase(int A[], int &n, int pos)
{
    if (pos < 0 || pos > n - 1)
    {
        return -1;
    }
    for (int i = pos; i < n - 1; i++)
    {
        A[i] = A[i + 1];
    }
    n--;
    return 0;
}

int FindNum(int A[], int n, int findNum)
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == findNum)
        {
            return i;
        }
    }
    return -1;
}

int Sort(int A[], int n)
{
    bool isSorted = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] > A[i + 1])
        {
            int temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
            isSorted = false;
        }
    }
    if (!isSorted)
    {
        Sort(A, n);
    }
    else
        return 0;
}

int Sum(int A[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
    }
    return sum;
}

int main()
{
    int A[LEN];
    int n;
    printf("Length of array: ");
    cin >> n;
    if (n > LEN || n <= 0)
    {
        printf("Length of array is invalid!\n");
        return -1;
    }
    printf("Input array: ");
    Input(A, n);
    for (;;)
    {
        printf("\n1. Insert\n2. Erase\n3. Find\n4. Sort\n5. Output\n6. Sum\n7. Len\n8. Exit\n");
        printf("Your choice: ");
        int choice;
        cin >> choice;
        int pos;
        switch (choice)
        {
        case 1:
            printf("Insert number: ");
            int insertNum;
            cin >> insertNum;
            printf("Insert position: ");
            cin >> pos;
            Insert(A, n, insertNum, pos);
            break;
        case 2:
            printf("Erase position: ");
            cin >> pos;
            Erase(A, n, pos);
            break;
        case 3:
            printf("Find number: ");
            int findNum;
            cin >> findNum;
            pos = FindNum(A, n, findNum);
            if (pos == -1)
            {
                printf("Not found\n");
            }
            else
            {
                printf("Found at position %d\n", pos);
            }
            break;
        case 4:
            Sort(A, n);
            break;
        case 5:
            Output(A, n);
            break;
        case 6:
            printf("Sum: %d\n", Sum(A, n));
            break;
        case 7:
            printf("Len: %d\n", n);
            break;
        case 8:
            printf("Output array: ");
            Output(A, n);
            exit(0);
        default:
            printf("Wrong choice\n");
        }
    }
}