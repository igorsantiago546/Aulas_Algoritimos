#include<stdio.h> //Biblioteca de emtrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declara��o de Vari�veis
	int lado, area, perimetro;
	//Cabe�alho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// In�cio da l�gica de programa��o
	printf("Digite o lado do quadrado em cm: ");
	scanf("%d", &lado);
	//C�lculos
	area=lado*lado;
	perimetro=lado*4;
	printf("\nA area do quadrado e: %d", area);
	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
