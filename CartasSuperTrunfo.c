#include <stdio.h>
 
int main() {
    char Estado = 'A';
    char Código[20] = "A01";
    char Cidade[50] = "RioDeJaneiro";
    int População;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Sua cidade e: %s\n", Cidade);

    printf("Digite a populacao da sua cidade: \n");
    scanf("%d", &População);
    printf("Digite a Area de sua cidade: \n");
    scanf("%f", &Area);
    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", %PIB);
    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", %PontosTuristicos);

    printf("sua cidade é: %s\n", Cidade);
    printf("ela possui a populacao de: %d\n", &População);
    printf("a Area de sua cidade e: %f\n", &Area);
    printf("o PIB da sua cidade e: %f\n", &PIB);
    printf("e a quantidade de pontos turisticos da sua cidade e: %d", %PontosTuristicos);

    return 0;
}