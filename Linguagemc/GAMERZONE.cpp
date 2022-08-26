#include<stdio.h> //biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h>//Biblioteca padrão para uso de fuções do sistema
int main (){//Programa principal
	//Declaração de Variáveis:
	int iddIgor, iddDanyllo, iddPaloma;
	//Cabeçalho
	printf("Senac Itaquera");
	printf("Projeto Integrador");
	printf("Gamerzone:\n\n\n");
	//Início da lógica de programação
	printf("Digite a idade do Igor");
	scanf("%d",iddIgor);
	printf("Digite a idade do Danyllo");
	scanf("%d",iddDanyllo);
	printf("Digite a idade da Paloma");
	scanf("%d",iddPaloma);
	//Estrutura condicional para avaliação de quem é mais velho dentre os três
	if ((iddIgor>iddDanyllo)&&(iddIgor>iddPaloma))
		printf("\n\nIgor e o mais velho dentre os três\n\n");
	else{
			if(iddDanyllo>iddPaloma)
				printf("\n\nDanyllo e o mais velho dentre os três\n\n");
			//este "else" pertence ao segundo "if"
			else
				printf("\n\nPaloma e a mais velha dentre os três\n\n");
		
	}
	getch();
}
