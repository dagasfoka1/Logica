#include <stdio.h>
int i;
float maior, maior2, aux;
float vet[5];
int main() {
   for(i=0;i<5;i++){
    printf("Digite um número real\n");
    scanf("%f",& vet[i]);
}
maior=vet[0];
    for(i=0;i<5;i++){
     if(vet[i]>maior){
         maior=vet[i];
     }
}
maior2=vet[0];
    for(i=0;i<5;i++){
     if(vet[i]>maior2 && vet[i]!=maior){
         maior2=vet[i];
     }
    }
printf("O segundo maior digitado foi: %.2f", maior2);
    return 0;
}
