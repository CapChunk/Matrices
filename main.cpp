 #include <iostream>
#include <iomanip>
#include "det.h"
using namespace std;

int main()
{
    Det al;
 size_t op;
 int x;
    cout<<"1) Inversos y Neutros multip en Z n"<<endl;
    cout<<"2) Matrices en Zn (Magia y hechiceria , sin divisiones)"<<endl;
  cin>>op;

  switch (op) {
  case 1:
  {
  cout<<"En que campo trabajaremos??"<<endl;
  cin>>x;

           // TOMAMOS ESTE NUMERO YA QUE Zn
                     //REPRESENTA LOS NUMEROS DEL 0 HASTA n-1
                                   // PARA ENCONTRAR EL INVERSO DE UN NUMERO EN  Z
                                  //HAREMOS LA TABLA Y BUSCAREMOS LOS ELEMENTOS

  //////////////////// SE REALIZAN LAS TABLAS DE Z PARA SUMA Y PRODUCTO RESPECTIVAMENTE , Aplicando el modular indicado por n
  ///
  ///
  size_t u=0;
  while(u==0)
  {
      cout<<"1)Inverso de un numero en Z "<<x<<endl;
      cout<<"2)Neutro de un numero en Z"<<x<<endl;
      cout<<"3)Salir"<<endl;
      cin>>u;

      switch (u) {
      case 1:
      {
      cout<<"Ingrese el numero del que desea saber el inverso en Z "<<x<<endl;
      cin>>u;
      for (int j = 0; j < x-1; ++j) {
          if(u*j < x)
            {  if(u*j ==1)
          {       cout<<"El inverso de "<< u  << "es: "<<j<<endl;         }}else {
   if((u*j)%x == 1)
   {
        cout<<"El inverso de "<< u  << "es: "<<j<<endl;
   }}
     }
      u=0;
      }
          break;
      case 2:
      {
          cout<<"Ingrese el numero del que desea saber neutro en Z "<<x<<endl;
          cin>>u;

              for (int j = 0; j < x-1; ++j) {
                  if(u*j < x)
                    {  if(u*j ==0)
                  {       cout<<"El neutro de "<< u  << "es: "<<j<<endl;         }}else {
           if((u*j)%x == 0)
           {
                cout<<"El neutro de "<< u  << "es: "<<j<<endl;
           }}
             }
          u=0;
      }
          break;
      case 3:
      {
      u=1;
      }
          break;
      default:
      {cout<<"wtf bro read the options"<<endl;
          u=0;}
          break;
      }
  }

  }
      break;
  case 2:
  {
      int r;
      int mor=0;
      while (mor==0) {
      cout<<"1)Determinante (Matrices simetricas) en Zn"<<endl;
      cout<<"2)Multiplicacion de matrices en Zn "<<endl;
      cout<<"3) Sistemas de ecuaciones en Zn"<<endl;
      cout<<"4)Salir"<<endl;
      cin>>r;

      switch (r) {
      case 1:
      {
          int q;
         cout<<"Sober que campo trabajaremos?? Zn: "<<endl;
         cin>>q;

         int n;
        int mat[100][100];
        cout<<"Ingrese el orden de la matriz:";cin>>n;


        for(int j=0;j<n;j++)
         for(int i=0;i<n;i++)
            {
             cout<<"Ingrese el elemento ("<<j<<","<<i<<") :";
             cin>> mat[i][j];
     }
        cout<<"La matriz  es:"<<endl;
        for(int j=0;j<n;j++)
         {   cout<<endl;
            for(int i=0;i<n;i++)
              cout<<"|"<<mat[j][i]<<"| ";
           }
        cout<<"Su determinante es: "<<al.Determinante(mat,n,q)<<endl;
        mor=0;
     }
          break;
      case 2:
      {
          int q;
          cout<<"Ingrese el campo sobre el que trabajamos"<<endl;
          cin>>q;
        al.Multi(q);
        mor=0;
      }

      break;

      default:
          break;
      }

  }
}
  }}

