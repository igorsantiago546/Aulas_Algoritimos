Algoritmo "Dia nascimento"
//

Var
diaNascimento, mesNascimento, anoNascimento: inteiro
calculaAno, calculaMes, calculaDias: inteiro

Inicio
// Se??o de Comandos, procedimento, fun??es, operadores, etc... 
Escreval("************** SUPER IDADE CALCULATOR *************** ")
Escreval()
Escreval()

Escreval("Digite o dia em que nasceu: ")
leia(diaNascimento)

Escreval("Digite o mes em que nasceu (digite o m?s em n?meros, de 1 ? 12): ")
leia(mesNascimento)

Escreval("Digite o ano em que nasce: ")
leia(anoNascimento)

Escreval("************************************* ")

calculaAno <- (2022 - anoNascimento) * 365
calculaMes <- (mesNascimento * 30) - (30 - diaNascimento)
calculaDias <- CalculaAno + CalculaMes

Escreval("Voc? possui", calculaDias, " dias de vida")
Escreval()
Escreval()

Fimalgoritmo