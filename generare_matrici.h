#ifndef GENERARE_MATRICI_H_INCLUDED
#define GENERARE_MATRICI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//9: aici trebuie toate cazurile verificare? dreapta sus nu o sa fie niciodata mai mare decat sus sau stanga sus

void ijImpare(int n)
{
    int a[100][100];
    for(int j = 1; j <= n; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 1)
            {
                a[i][j] = i + j;
            }
            else
            {
                if(j == 1)
                {
                    a[i][j] = a[i - 1][j];
                }
                else
                {
                    a[i][j] = a[i - 1][j - 1];
                }
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

void v019_II5()
{
    int n = 5;
    ijImpare(n);
}
#endif
