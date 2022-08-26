Algoritmo "Parede"
Var

Largura, Altura, Area, Lata, Cobrir, Re: real

Inicio

Escreval("Altura da Parede:")
leia(Altura)

Escreval("Largura da Parede")
leia(Largura)

Lata <- 15

Area <- Largura * Altura

Cobrir <- Area / Lata

Re <- Cobrir *2

Escreval("-----------Descrição-------------")
Escreval("Area total da parede:", Area, "M²")
Escreval("Lata de tinta", Lata, "L")
Escreval("Para cobrir a parede inteira vai ser utilizado", Cobrir, "L")
Escreval("Se precisar passar 2 Demãos de tinta vai precisar de", Re, "L")


Fimalgoritmo