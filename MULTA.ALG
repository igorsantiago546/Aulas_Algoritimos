Algoritmo "multa"
Var

 Veloc, Multa, MultaKm: Real

Inicio

escreval ("---------------")
escreval ("RADAR DEVDRIVER")
escreval ("---------------")
escreva
escreval ("Via permitida até 80km/h")
escreval
escreva ("Digite a velocidade do carro Km: ")
leia(Veloc)
escreval

Multa <- Veloc - 80
MultaKm <- Multa * 5


se (Veloc > 80) entao
escreva ("Você foi multado. Velocidade acima do permitido!")
escreva (" Multa no valor de R$", MultaKm:5:2)
Fimse

Fimalgoritmo