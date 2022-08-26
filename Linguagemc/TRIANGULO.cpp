#include<stdio.h> //Biblioteca de emtrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaração de Variáveis
	int base,altura, area, perimetro;
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Início da lógica de programação
	printf("Digite a base do retangulo em cm: ");
	scanf("%d", &base);
	printf("Difite a altura do retangulo em cm: ");
	scanf("%d", &altura);
	//Cálculos
	area=base*altura;
	perimetro=(base*2)+(altura*2);
	printf("\nA area do quadrado e: %d", area);
	printf("\nO perimetro do quadrado e: %d", perimetro);
	getch(); //Função que aguarda o recebimento de um caractere via teclado.
}
