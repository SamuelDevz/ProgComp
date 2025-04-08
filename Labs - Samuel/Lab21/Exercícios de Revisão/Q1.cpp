/*

Construa expressões lógicas para representar as seguintes condições:

a. peso é maior ou igual a 115 mas é inferior a 125
b. ch é q ou Q
c. x é par mas não é 26
d. x é par mas não é um múltiplo de 26
e. donativo está na faixa [10-20] ou [90-100]
f. ch é uma letra maiúscula ou minúscula

a) 115 <= peso < 125

b) ch = 'q' || ch = 'Q'

c) x % 2 == 0 && x != 26

d) x % 2 == 0 && x % 26 != 0 

e) (donativo >= 10  && donativo <= 20) || (donativo >= 90 && donativo <= 100)

f) (ch >= 'a' && ch <= 'z') && (ch >= 'A' && ch <= 'Z')

*/