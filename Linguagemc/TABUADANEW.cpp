#include<stdio.h> //Biblioteca de emtrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaração de Variáveis
	int auxnum;
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a):\n\n\n");
	// Início da lógica de programação
	printf("**** Tabuada ****\n\n");
	printf("Digite um numero: ");
	scanf("%d", &auxnum);
	// escrevendo Mensagens na Tela
	printf("\n\n\t%d x 1 = %d\n",auxnum,auxnum*1);
	printf("\t%d x 2 = %d\n",auxnum,auxnum*2);
	printf("\t%d x 3 = %d\n",auxnum,auxnum*3);
	printf("\t%d x 4 = %d\n",auxnum,auxnum*4);
	printf("\t%d x 5 = %d\n",auxnum,auxnum*5);
	printf("\t%d x 6 = %d\n",auxnum,auxnum*6);
	getch(); //Função que aguarda o recebimento de um caractere via teclado
}
