#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int udfDibjaMenu(void);
int udfMaximoValor (int []);
int udfMinimoValorPos (int []);

int main()
{
    int vector[TAM];
    int i,opcion,maximo,minimoPos;

    for(i=1;i<=TAM;i++)
    {
     printf ("Ingrese el numero (%i):",i);
     scanf ("%i",&vector[i]);
    }

        opcion = udfDibjaMenu();
        maximo = udfMaximoValor(vector);
        minimoPos = udfMinimoValorPos(vector);

        switch (opcion)
        {
            case 1:
                printf("El maximo valor cargado es %i\n" ,maximo);
                system("pause");
                break;
            case 2:
                printf("La posicion del minimo valor cargado es %i\n" ,minimoPos);
                system("pause");
                break;
            default:
                printf("Error");
                break;
        }

    return 0;
}

int udfDibjaMenu(void)
{
    int opc;
    system("cls");
    printf ("1-Mostrar el maximo de los valores cargados en un vector\n");
    printf ("2-Mostrar la posicion del  minimo valor cargado ese vector\n");
    scanf("%i",&opc);
    return opc;
}

int udfMinimoValorPos (int pvec[])
{
 int i,min,pos;
 for (i=1;i<=TAM;i++)
    {
   if (i==1)
       {
       min=pvec[i];
       pos=i;
       }
   else
       {
       if (pvec[i]<min)
        {
        min=pvec[i];
        pos=i;
        }
       }
    }
 return pos;
}

int udfMaximoValor (int pvec[])
{
 int i,max;
 for (i=1;i<=TAM;i++)
 {
   if (i==1)
   {
       max=pvec[i];
   }

   else
   {
       if (pvec[i]>max)
        max=pvec[i];
   }
 }
 return max;
}
