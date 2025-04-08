#include <cmath>
#include "prototipos.h"

float coordenadas_polares(float a, float b)
{
    float pi = 3.14159265;
    float angulo = atan2 (b,a) * 180 / pi;
    return angulo;
}

float modulo_vetor(float x, float y)
{
    float vetor = sqrt(pow(x, 2) + pow(y, 2));
    return vetor;
}