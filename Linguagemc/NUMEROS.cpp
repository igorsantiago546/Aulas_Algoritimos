#include<stdio.h> //Biblioteca de emtrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declara��o de Vari�veis
	int num1, num2;
	//Cabe�alho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// In�cio da l�gica de programa��o
	printf("Voce devera digitar dois numeros diferentes de zero\n\n");
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("\nA soma %d + %d = %d", num1, num2, num1+num2);
	printf("\nA subtra��o %d - %d = %d", num1, num2, num1/num2);
	printf("\nO produto %d X %d = %d", num1, num2, num1*num2);
	printf("\nA divisao %d : %d = %d", num1, num2, num1/num2);
	printf("\nA media entre %d e %d = %.2f", num1, num2, (float) (num1+num2)/2);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
