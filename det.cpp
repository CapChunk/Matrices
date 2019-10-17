#include "det.h"
#include <iomanip>
#include <iostream>

Det::Det()
{

}
int Det::Determinante(int a[][100], int orden, int seta)
{
    int det=0;
     int aux1[100][100];
    int aux2[100][100];


     if(orden==1)
     return a[0][0];

    for(int i=0;i<orden;i++)
      {
       if(i%2==0)
        {for(int y=0;y<orden;y++)
          for(int x=0;x<orden;x++)
             if(x<i)
                 aux1[x][y]=a[x][y+1];
             else
                aux1[x][y]=a[x+1][y+1];

          det=det+a[i][0]*Determinante(aux1,orden-1,seta);
        }
       else
        {for(int y=0;y<orden;y++)
          for(int x=0;x<orden;x++)
             if(x<i)
                 aux2[x][y]=a[x][y+1];
             else
                aux2[x][y]=a[x+1][y+1];

         det=det-a[i][0]*Determinante(aux2,orden-1,seta);
        }

       }
    return (det%seta);
}

void Det::Multi(int &seta)
{

    int m, n, p, q, c, d, k, sum = 0;
      int first[10][10], second[10][10], multiply[10][10];

      printf("Ingrese el numero de filas y columnas de la primera matriz \n");
      scanf("%d%d", &m, &n);
      printf("Enter elements of first matrix\n");

      for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
          scanf("%d", &first[c][d]);

      printf("Enter number of rows and columns of second matrix\n");
      scanf("%d%d", &p, &q);

      if (n != p)
        printf("The matrices can't be multiplied with each other.\n");
      else
      {
        printf("Enter elements of second matrix\n");

        for (c = 0; c < p; c++)
          for (d = 0; d < q; d++)
            scanf("%d", &second[c][d]);

        for (c = 0; c < m; c++) {
          for (d = 0; d < q; d++) {
            for (k = 0; k < p; k++) {
                if(first[c][k]*second[k][d]>seta)
              {sum = ((sum + first[c][k]*second[k][d])%seta);}
                else {
                    sum = sum + first[c][k]*second[k][d];
                }
            }
            multiply[c][d] = sum;
            sum = 0;
          }
        }

        printf("Product of the matrices:\n");

        for (c = 0; c < m; c++) {
          for (d = 0; d < q; d++)
            printf("%d\t", multiply[c][d]);

          printf("\n");
        }
      }

}

void Det::invers(int &seta)
{

}
