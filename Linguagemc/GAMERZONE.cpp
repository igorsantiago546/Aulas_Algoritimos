#include<stdio.h> //biblioteca de entrada/sa�da por perif�ricos padr�o
#include<conio.h> //Biblioteca para manipula��o de caracteres
#include<stdlib.h>//Biblioteca padr�o para uso de fu��es do sistema
int main (){//Programa principal
	//Declara��o de Vari�veis:
	int iddIgor, iddDanyllo, iddPaloma;
	//Cabe�alho
	printf("Senac Itaquera");
	printf("Projeto Integrador");
	printf("Gamerzone:\n\n\n");
	//In�cio da l�gica de programa��o
	printf("Digite a idade do Igor");
	scanf("%d",iddIgor);
	printf("Digite a idade do Danyllo");
	scanf("%d",iddDanyllo);
	printf("Digite a idade da Paloma");
	scanf("%d",iddPaloma);
	//Estrutura condicional para avalia��o de quem � mais velho dentre os tr�s
	if ((iddIgor>iddDanyllo)&&(iddIgor>iddPaloma))
		printf("\n\nIgor e o mais velho dentre os tr�s\n\n");
	else{
			if(iddDanyllo>iddPaloma)
				printf("\n\nDanyllo e o mais velho dentre os tr�s\n\n");
			//este "else" pertence ao segundo "if"
			else
				printf("\n\nPaloma e a mais velha dentre os tr�s\n\n");
		
	}
	getch();
}
