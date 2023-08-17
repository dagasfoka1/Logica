#include <stdio.h>
int i, maior, menor, x;
int num[10];
int main() {
    for (i=0;i<10;i++){
        printf("\nDigite de um número:\n");
        scanf("%d",&num[i]);
        if(i==0){
            maior=num[i];
            menor=num[i];
        }
        else{
            if (num[i]>maior) {
            maior=num[i];
            }
            if(num[i]<menor) {
            menor=num[i];
            }
        }
    }
    printf("%d foi o maior e %d foi o menor digitado",maior, menor);
    return 0;
 }

