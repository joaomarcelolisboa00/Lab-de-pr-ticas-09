#include <stdio.h>
#include <stdlib.h>


void simplifica(int num, int den){

            int mult = 0;
            int resultado, menor;
            int i;

            if(num<den)
            {
              menor =num;
            }
            else
            {
              menor = den;
            }
        for(i=1; i<=menor; i++)
        {
            if(num%i==0 && den%i==0)
            {
                mult = i;
            }
        }

        num=num/mult;
        den=den/mult;
        printf("A simplificacao da fracao e: %d/%d",num,den);

    }



    int main()

    {

        int n1; int n2;



            printf("\nDigite o numerador: ");
            scanf("%d",&n1);
            printf("\nDigite o denominador: ");
            scanf("%d",&n2);

            printf("Os numeros informados forma a fracao: %d/%d",n1,n2);

            printf("\t***SIMPLIFICANDO***\n");

           simplifica(n1,n2);

        return 0;
    }
