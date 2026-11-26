#ifndef SORTARE_H_INCLUDED
#define SORTARE_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//4:
//raspuns a) void ordonare(float x[100], int n)

void ordonare(double x[100], int n)
{
    bool sortat;
    do
    {
        sortat = true;
        for(int i = 0; i < n - 1; i++)
        {
            if(x[i] > x[i + 1])
            {
                double aux = x[i];
                x[i] = x[i + 1];
                x[i + 1] = aux;
                sortat = false;
            }
        }
    }
    while(sortat == false);
}



void primeleMElem(double v[100], int n, int m)
{
    ordonare(v, n);
    for(int i = n - m; i < n; i++)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    for(int i = m - 1; i >= 0; i--)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

void v092_3()
{
    int n = 9, m = 3;
    double v[100] = {14.2, 60, -7.5, -22, 33.8, 80, 4, 10, 3};
    primeleMElem(v, n, m);
}

#endif
