#include<stdio.h> //Biblioteca de emtrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaração de Variáveis
	int num; //variável que irá receber o número na base decimal
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	//Escrevendo o comando na tela
	printf("Escreva um numero na base decimal: ");
	//recebendo do teclado o número decimal
	scanf("%d", &num);
	
	//Imprimindo o número lido nas bases: octal e hexadecimal
	printf("\nO numero %d na base octal e: %o\n", num, num);
	printf("O numero %d na base hexadecimal e: %x", num, num);
	getch(); //Função que aguarda o recebimento de um caractere via teclado.
}
