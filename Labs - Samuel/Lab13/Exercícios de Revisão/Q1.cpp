enum direcao { N, NE, E, SE, S, SW, W, NW };

union identificador
{
    char codigo[5];
    int numero;
};

struct bola
{
    identificador id; // identificação da bola
    char marca[30];   // marca da bola
    int posX;         // posição no eixo X
    int posY;         // posição no eixo Y
    direcao dir;      // orientação no plano
    float vel;        // velocidade
    float acel;       // aceleração
};

bola proVolley[10]; // declaração de variável

/*

a) proVolley                // tipo vetor de 10 bolas 
b) proVolley[4]             // tipo bola
c) proVolley[1].marca       // tipo vetor de 30 caracteres
d) proVolley[1].marca[2]    // tipo char
e) proVolley[0].dir         // tipo direcao  
f) proVolley[4].id          // tipo identificador
g) proVolley[3].id.numero   // tipo int
h) proVolley[9].acel        // tipo float

*/