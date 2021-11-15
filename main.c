#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   float imc,x,y;
    int i,j,n;
    printf("tapez le nombre des personnes :");
    scanf("%d",&n);
    float T[n][2];
     for(i=0;i<n;i++)
     {

        for(j=0;j<2;j++)
        {


             printf("T[%d][%d]  :",i+1,j+1);
        scanf("%f",&T[i][j]);



        }

     }
     printf("----------------------------\n");


     for(i=0;i<n;i++)
     {


         for(j=0;j<2;j++)
         {



         printf("T[%d][%d] = %.2f\t ",i+1,j+1,T[i][j]);


         }
        x =(T[i][1]*T[i][1]);
        y = T[i][0];
        imc = y/x;


        printf("IMC = %.2f ",imc);

        printf("\n");

     }
     system("pause");










    return 0;
}
