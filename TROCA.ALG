Algoritmo "Troca"
//

Var
// Seção de Declarações das variáveis 
a, b, intermediario: inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
Escreval("Olá, digire em valor para A:")
leia(a)

Escreval("Olá de noto, digite agora outro valor para B:")
leia(b)


Escreval("Muito bem! Você digitou os valores para A:", a, " e B:", b)


intermediario <- a
a <- b
b <- intermediario

Escreval("Se invertermos os valores de A e B teremos A:", a, " e B:", b)

Fimalgoritmo