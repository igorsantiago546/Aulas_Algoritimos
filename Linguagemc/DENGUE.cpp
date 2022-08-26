#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main () {//Programa principal
	// Declaração de Variáveis
	int total, susp, mort, conf;
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Disciplina: 113913 - ICC \n");
	printf("Aluno(a): \n\n\n");
	// Início da lógica de programação
	printf("Preencha com as seguintes informacoes sobre a Dengue em Brasilia:\n\n");
	printf("\tCasos Suspeitos: ");
	scanf("%d", &susp);
	printf("\tCasos Confirmados: ");
	scanf("%d", &conf);
	printf("\tQuantidade de Mortes: ");
	scanf("%d", &mort);
	// Apresentação dos resultados
	printf("\nInformacoes sobre a dengue em Brasilia:\n");
	printf("\tCasos Suspeitos: %d\n", susp);
	printf("\tCasos Confirmados: %d\n", conf);
	printf("\tQuantidade de Mortes: %d\n", mort);
	total=susp+conf+mort;
	printf("\n\tTotal de dados: %d\n\n", total);
	
	getch(); //Função que aguarda o recebimento de um caractere via teclado
}
