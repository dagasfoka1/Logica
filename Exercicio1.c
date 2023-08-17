 #include <stdio.h>
 char nome[20];
 int i, vogal,consoante;
 int main () {
    printf("\n Digite uma palavra de até 20 letras:");
    scanf("%s",&nome);
    for(i=0;i<20;i++) {
    if(nome[i]!='\0') {
        if (nome[i] =='a' || nome[i]=='e' || nome[i]=='i' || nome[i]=='o' || nome[i]=='u' ||nome[i] =='A'|| nome[i]=='E' || nome[i]=='I' || nome[i]=='O' || nome[i]=='U') {
            vogal++;
        }
        else {
            if(nome[i] =='b' || nome[i] =='c'|| nome[i] =='d' || nome[i] =='f'||nome[i] =='g' || nome[i] =='h'|| nome[i] =='j' || nome[i] =='k'|| nome[i] =='m' || nome[i] =='n'|| nome[i] =='p' || nome[i] =='q'|| nome[i] =='r' || nome[i] =='s'|| nome[i] =='t' || nome[i] =='v'|| nome[i] =='w' || nome[i] =='x'|| nome[i] =='y' || nome[i] =='z'|| nome[i] =='B' || nome[i] =='C'|| nome[i] =='D' || nome[i] =='F'|| nome[i] =='G' || nome[i] =='H'|| nome[i] =='J' || nome[i] =='K'||nome[i] =='M' || nome[i] =='N' || nome[i] =='P'|| nome[i] =='Q' || nome[i] =='R'|| nome[i] =='S' || nome[i] =='T'|| nome[i] =='V' || nome[i] =='W'|| nome[i] =='X' || nome[i] =='Y'||nome[i] =='Z' || nome[i] =='L'|| nome[i] =='l')
            consoante++;
        }
    }
    }
    printf("O número de vogais é %d e o número de consoantes é %d",vogal,consoante);
    return 0;
}
