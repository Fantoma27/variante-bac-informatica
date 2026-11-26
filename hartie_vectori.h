#ifndef HARTIE_VECTORI_H_INCLUDED
#define HARTIE_VECTORI_H_INCLUDED

#include <iostream>
#include <fstream>
using namespace std;

// 1  2  3  4  5
// 2 13  1  5  -4

// i  j  v[i] < v[j]  aux = v[i]  v[i] = v[j]  v[j] = aux
// 1  5      nu     
// 1  4      da       aux = 2     v[1] = 5     v[4] = 2
// 5 13 1 2 -4
// 1  3      nu
// 1  2      da       aux = 5     v[1] = 13    v[2] = 5
// 13 5 1 2 -4
// 2  5      nu
// 2  4      nu
// 2  3      nu
// 3  5      nu
// 3  4      da       aux = 1     v[3] = 2     v[4] = 1
// 13 5 2 1 -4
// 4 5       nu

//Nr de interschimbari: 3

//Ex de 5 valori pt care sa nu se efectueze nicio interschimbare: 17, 13, 5, 2, -4

/*
for(i=1;i<5;i++)
    for(j=5;j>i;j--)
        if(v[i]<v[j])
        {
            aux=v[i];
            v[i]=v[j];
            v[j]=aux;
        }
*/




#endif
