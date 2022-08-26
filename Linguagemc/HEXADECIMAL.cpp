#include<stdio.h> //Biblioteca de emtrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaração de Variáveis
	int lado, area, perimetro;
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Início da lógica de programação
	printf("Digite o lado do quadrado em cm: ");
	scanf("%d", &lado);
	//Cálculos
	area=lado*lado;
	perimetro=lado*4;
	printf("\nA area do quadrado e: %d", area);
	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch(); //Função que aguarda o recebimento de um caractere via teclado.
}
