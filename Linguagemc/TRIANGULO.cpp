#include<stdio.h> //Biblioteca de emtrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main () {//Programa principal
	// Declara��o de Vari�veis
	int base,altura, area, perimetro;
	//Cabe�alho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// In�cio da l�gica de programa��o
	printf("Digite a base do retangulo em cm: ");
	scanf("%d", &base);
	printf("Difite a altura do retangulo em cm: ");
	scanf("%d", &altura);
	//C�lculos
	area=base*altura;
	perimetro=(base*2)+(altura*2);
	printf("\nA area do quadrado e: %d", area);
	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch(); //Fun��o que aguarda o recebimento de um caractere via teclado.
}
