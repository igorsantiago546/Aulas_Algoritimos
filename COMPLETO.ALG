Algoritmo "Exercicio 1"

Var
// Seção de Declarações das variáveis 
   nome, snome, ncompleto:  caractere
   ano_at, ano_nc, idade: inteiro
   n1, n2, media: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreval("Digite seu nome")
leia(nome)

escreval("Digite seu sobrenome")
leia(snome)

ncompleto <-nome+" "+snome

escreval(ncompleto)

   
   escreval("Digite o ano de seu nascimento")
   leia(ano_nc)
   
   escreval ("Digite o ano atual")
   leia(ano_at)
   
   idade <- ano_at - ano_nc
   
   escreval("Seu nome e ", ncompleto)
   
   escreval ("Sua idade e ", idade)
   
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