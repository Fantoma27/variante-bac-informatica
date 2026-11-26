#ifndef UMPLERE_MATRICI_H_INCLUDED
#define UMPLERE_MATRICI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//8:
void creareMatrice(int n, int m)
{
    int a[100][100];
    int k = 1;
    for(int j = 0; j < m; j++)
    {
        for(int i = 0; i < n; i++)
        {
            a[i][j] = k;
            k++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void v063_II5()
{
    int n = 4, m = 5;
    creareMatrice(n, m);
}

#endif
