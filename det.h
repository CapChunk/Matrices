#ifndef DET_H
#define DET_H
#include <iomanip>
#include <iostream>

class Det
{
public:
    Det();
    int Determinante(int a[][100],int orden,int seta);
   void Multi(int &seta);
              void invers(int&seta);
};

#endif // DET_H
