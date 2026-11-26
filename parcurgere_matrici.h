#ifndef PARCURGERE_MATRICI_H_INCLUDED
#define PARCURGERE_MATRICI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//7:

void produsColoana(int a[100][100], int n)
{
    bool ok = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int p = 1;
            for(int k = 0; k < n; k++)
            {
                if(k != i)
                {
                    p = p * a[k][j];
                }
            }
            if(p == a[i][j])
            {
                cout << a[i][j] << ' ';
                ok = true;
            }
        }
    }
    if(ok == false)
    {
        cout << "NU EXISTA";
    }
}
void v026_II5()
{
    int a[100][100] = {
        {1, 1, 2, 9},
        {9, 2, 3, 3},
        {8, 4, 1, 1},
        {0, 2, 9, 3}
    };
    int n = 4;
    produsColoana(a, n);
}

#endif
