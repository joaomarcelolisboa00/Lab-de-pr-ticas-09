int main()
{
  int h, m, s;

    printf("Entre com o horario desejado e iremos converte-lo em segundos: \n");
    scanf("%d%d%d", &h, &m, &s);

    printf("\n\n");
    printf("\t***CONVERTENDO EM SEGUNDOS***\n");
    printf("O horario informado coresponde a %d segundos\n", converte_segundos(h,m,s));

}


int converte_segundos(int hora, int minutos, int segundos){

    int somatorio;

    somatorio = ((hora * 3600) + (minutos * 60) + segundos);

    return somatorio;
}
