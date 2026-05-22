#include <stdio.h>
#define PI 3.1415
int main()
{
    // valor do volume de uma lata de óleo, utilizando a fórmula: volume = PI * raio² * altura

    float raio2, altura, volume, raio;
    raio2 = (raio * raio);
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);
    volume = PI * raio2 * altura;
    printf("O valor do volume é: %.2f", volume);

    return 0;
}