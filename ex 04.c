#include <stdio.h>
#include <stdlib.h>

int valida_triangulo(unsigned a, unsigned b, unsigned c){

    if(a + b > c && a + c > b && b + c > a){
        printf("Os valores informados formam um triangulo\n");

        if(a == b && a == c)
            printf("O triangulo informado e do tipo Equilatero\n");
        else if(a == b || a == c || b == c)
            printf("O triangulo informado e do tipo Isosceles\n");
        else
            printf("O triangulo informado e do tipo Escaleno\n");
        return 0;

    }else{
        printf("Os valores informados nao formam um triangulo\n");
        return 1;
    }
}


int main()
{
    unsigned lado_a, lado_b, lado_c;

    printf("Informe 3 valores: \n");
    scanf("%d%d%d", &lado_a, &lado_b, &lado_c);

    valida_triangulo(lado_a, lado_b, lado_c);


    return 0;
}
