#ifndef MODIFICARE_H_INCLUDED
#define MODIFICARE_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//recapitulare 2:

void nule(int a[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            for(int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[n - 1] = 0;
            n--;
            i--;
        }
    }
}


void v020_3()
{
    int a[100] = {12, 0, 0, -3, -8, 0};
    int n = 6;
    nule(a, n);
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}

#endif
