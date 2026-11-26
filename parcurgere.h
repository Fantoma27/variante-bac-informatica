#ifndef PARCURGERE_H_INCLUDED
#define PARCURGERE_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//3:

bool intersectareaIntervalelor(int n1, int n2, int m1, int m2)
{
    for(int i = n1; i <= n2; i++)
    {
        for(int j = m1; j <= m2; j++)
        {
            if(j == i)
            {
                return false;
            }
        }
    }
    return true;
}

ifstream fin("bac.txt");

void v023_4()
{
    int a[100];
    int b[100];
    int n;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i] >> b[i];
    }
    for(int i = 0; i < n; i++)
    {
        bool ok = true;
        for(int j = 0; j < n; j++)
        {
            if(i != j && intersectareaIntervalelor(a[i], b[i], a[j], b[j]) == false)
            {
                ok = false;
            }
        }
        if(ok)
        {
            cout << a[i] << ' ' << b[i] << endl;
        }
        
    }
}

//5:

void perechiCuAceeasiParitate(int v[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v[i] % 2 == v[j] % 2)
            {
                cout << v[i] << ' ' << v[j] << endl;
            }
        }
    }
}

void v051_4()
{
    int n = 5;
    int v[100] = {16, 22, 3, 6, 1};
    perechiCuAceeasiParitate(v, n);
}

#endif
