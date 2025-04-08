/*

O ponto flutuante possui uma representação binária que se divide em mantissa,
sinal da mantissa e expoente. Os bits podem ser transformados em um valor
através da fórmula v = s * 2(e-127) * (1 + m). Descubra o valor ponto flutuante
correspondente a seguinte codificação binária de 32 bits:

1 1 0 0 1 0 0 0 0 0 1 1 0 0 0 1 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0
| 	expoente  | s |					mantissa				  |

11001000001100010100000000000000

e = 2 ^ 3 + 2 ^ 6 + 2 ^ 7
e = 200

s = 1

m = 2 ^ 14 + 2 ^ 16 + 2 ^ 20 + 2 ^ 21
m = 3227648

R: v = s * 2(e - 127) * (1 + m)
   v = 1 * 2(200 - 127) * (1 + 3227648)
   v = 1 * 2(73) * 3227649
   v = 471236754
   v = 4.712368e+08

*/