Algoritmo "Troca"
//

Var
// Se??o de Declara??es das vari?veis 
a, b, intermediario: inteiro
Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
Escreval("Ol?, digire em valor para A:")
leia(a)

Escreval("Ol? de noto, digite agora outro valor para B:")
leia(b)


Escreval("Muito bem! Voc? digitou os valores para A:", a, " e B:", b)


intermediario <- a
a <- b
b <- intermediario

Escreval("Se invertermos os valores de A e B teremos A:", a, " e B:", b)

Fimalgoritmo