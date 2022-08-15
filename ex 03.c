float calcula_media(float n1, float n2, float n3, char tipo) {

    if (tipo == 'A'|| tipo == 'a') {
        return (n1 + n2 + n3) / 3;
    } else if (tipo == 'P'|| tipo == 'p') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

int main()
{
    float nota1, nota2, nota3;
    char tipodemedia;
    float resultado;


    printf("Qual tipo de media iremos realizar? \n");
    printf("Informe (A) para media aritimetica ou (P) para media ponderada\n");
    tipodemedia = getchar();

    printf("Qual foi a primeira nota do aluno? \n");
    scanf("%f", &nota1);
    printf("Qual foi a segunda nota do aluno? \n");
    scanf("%f", &nota2);
    printf("Qual foi a terceira nota do aluno? \n");
    scanf("%f", &nota3);

    printf("\n");

    printf("\t***CALCULANDO MEDIA***\n");

    resultado = calcula_media(nota1, nota2, nota3, tipodemedia);

    printf("A media final do aluno e: %.2f\n", resultado);

    return 0;
}
