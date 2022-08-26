#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main (){ //Programa Principal
    //Declação de Variáveis:
    float Tc;
    //Cabeçalho
    printf("Senac\n");
    printf("Disciplina: 1 - ICC\n");
    printf("Aluno(a):\n\n\n");
    //Início do programa
    //laço apenas com variável pois os valores limites já foram definidos
    for (Tc=-100; Tc<=100; Tc++)
        printf("    %.0f %cC = %.1f %cF \n", Tc, 248, (((Tc*9.0)/5.0)+32.0), 248);
    getch(); //Função que aguarda o recebimento de um caractere via teclado
}
