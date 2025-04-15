#include <stdio.h>
 
int main() {
    char Estado = 'A';
    char Codigo[20] = "A01";
    char Cidade[50] = "RioDeJaneiro";
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Sua cidade é: %s\n", Cidade);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &Populacao);
    printf("Digite a Área de sua cidade: \n");
    scanf("%f", &Area);
    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("sua cidade é: %s\n", Cidade);
    printf("ela possui a população de: %d\n", Populacao);
    printf("a Área de sua cidade é: %.2f\n", Area);
    printf("o PIB da sua cidade é: %.2f\n", PIB);
    printf("e a quantidade de pontos turisticos da sua cidade é: %d\n", PontosTuristicos);

    return 0;
}