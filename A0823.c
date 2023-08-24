#include <stdio.h>
float L,N,P, aux, aux2;
char car;
int main()
{
    printf("Digite a quantidade de litros de combustível: \n");
    scanf("%f", &L);

    if(L>=0){
        printf("Digite: A para Álcool e G para Gasolina:\n");
        scanf(" %c", &car);
        fflush(stdin);
        }

         if (car=='A'|| car=='a') {
            aux=L*3.8;
            if(L<=25){
                P=aux*0.03;
                P=aux-P;
                printf("O total a pagar pelo álcool é : %.2f \n", P);
            }

            else {
                P=aux*0.05;
                P=aux-P;
                printf("Total a pagar pela álcool: %.2f\n", P);
            }
            }

        if (car=='G' || car=='g') {
            aux2=L*4.9;
            if(L<=25){
                P=aux2*0.02;
                P=aux2-P;
                printf("O total a pagar pelo gasolina é : %.2f \n", P);
            }
            else {
                P=aux2*0.04;
                P=aux2-P;
                printf("Total a pagar pela gasolina: %.2f\n", P);
            }

            }

        else {
            printf("Você digitou um valor inválido.");
        }
  return 0;
}
