#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main (){ //Programa Principal
    //Decla��o de Vari�veis:
      int cont=1; //Contador
      float salario, soma=0, maior=0, menor=100;
    //Cabe�alho
    printf("Senac\n");
    printf("Disciplina: 1 - ICC\n");
    printf("Aluno(a):\n\n\n");
    //In�cio do programa
    printf("Digite os salarios dos funcionarios: \n");
    do
    {
        printf("Digite o %d.a salario: ", cont);
        scanf("%f", &salario);
        while (salario<0 || salario>1000) //Valida�ao
        {
            printf("");
        }
        soma=soma+salario;
        if (salario>maior)
            maior=salario;
        if (salario<menor)
            menor=salario;
        cont++;
    }while (cont<=10);
    //Apresenta�ao de Resultados
    printf("\n\nA media dos salario fornecidos e: %.2f", (soma/10));
    printf("\nO maior salario e: %.2f", maior);
    printf("\nO menor salario e: %.2f", menor);
    getch();//Fun�ao que aguarda o recebimento de um caractere via teclado

    }
