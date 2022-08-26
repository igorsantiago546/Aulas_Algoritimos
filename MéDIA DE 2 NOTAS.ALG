Algoritmo "Média de 2 Notas"
//

Var
// Seção de Declarações das variáveis 
n1, n2, media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite a primeir nota")
leia(n1)

escreval ("Digite a segunda nota")
leia(n2)

media <- (n1+n2) /2
escreval("a media foi", media)

se media >= 6 entao
escreval("APROVADO!")
senao
escreval("Infelizmente voce esra REPROVADO")
fimse

Fimalgoritmo