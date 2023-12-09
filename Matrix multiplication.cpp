#include <iostream>

#define MAX 100

using namespace std;

int na, ma, nb, mb;

int **a, **b, **c;

void Read(int **&matr, int n, int m)
{
    matr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        matr[i] = new int[m];
        for (int j = 0; j < m; j++)
            cin >> matr[i][j];
    }
}

void Mult(int **a, int **b, int **&c, int m, int n, int q)
{
    c = new int *[m];
    for (int i = 0; i < m; i++)
    {
        c[i] = new int[q];
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

void Print(int **a, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main(void)
{
    cin >> na >> ma;
    Read(a, na, ma);
    cin >> nb >> mb;
    Read(b, nb, mb);
    if (ma != nb)
    {
        cout << "-1" << endl;
        return 0;
    }
    Mult(a, b, c, na, ma, mb);
    cout << na << " " << mb << endl;
    Print(c, na, mb);
    return 0;
}
