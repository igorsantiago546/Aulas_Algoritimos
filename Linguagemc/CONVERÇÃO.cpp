#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){ //Programa Principal
    //Decla��o de Vari�veis:
    float Tc;
    //Cabe�alho
    printf("Senac\n");
    printf("Disciplina: 1 - ICC\n");
    printf("Aluno(a):\n\n\n");
    //In�cio do programa
    //la�o apenas com vari�vel pois os valores limites j� foram definidos
    for (Tc=-100; Tc<=100; Tc++)
        printf("    %.0f %cC = %.1f %cF \n", Tc, 248, (((Tc*9.0)/5.0)+32.0), 248);
    getch(); //Fun��o que aguarda o recebimento de um caractere via teclado
}
