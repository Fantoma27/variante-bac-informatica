#ifndef HARTIE_MATRICI_H_INCLUDED
#define HARTIE_MATRICI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

//6:

/*s = 0;
for(j = 0; j < n/2; j++)
{
    if(a[k][j] > 0)
    {
        s += a[k][j];
    }
    if(a[k][n - 1 - j] > 0)
    {
        s += a[k][n - 1 - j];
    }
    if(j == n/2 - 1)
    {
        s = s % 10;
    }
}
cout<<s;*/

bool penultimaLinieSubDiagSecundara(int i, int j)
{
    return(i == 9 && i + j > 11);
}

void v059_II4()
{
    int i = 9; int j = 3;
    cout << penultimaLinieSubDiagSecundara(i, j);
}

#endif
