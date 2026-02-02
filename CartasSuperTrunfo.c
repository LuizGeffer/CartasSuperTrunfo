#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{

    char Estado;
    char Codico_Da_Carta[20];
    char Nome_Da_Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Numero_Pontos_Turistico;
    float Densidade;
    float PIB_PER_CAPITAL;
    float Super;
    // Carta02
    char Estado2;
    char Codico_Da_Carta2[20];
    char Nome_Da_Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Numero_Pontos_Turistico2;
    float Densidade2;
    float PIB_PER_CAPITAL2;
    float Super2;

    printf("Digite os dados da carta 01 \n");
    printf("\nQual é o Estado:");
    scanf("%s", &Estado);

    printf("Qual é o código da carta:");
    scanf("%s", Codico_Da_Carta);

    getchar();
    printf("Qual é o nome da Cidade:");
    fgets(Nome_Da_Cidade, sizeof(Nome_Da_Cidade), stdin);

    printf("Qual é a quantidade da População:");
    scanf("%d", &Populacao);

    printf("Qual é a Área:");
    scanf("%f", &Area);

    printf("Qual é o PIB:");
    scanf("%f", &PIB);

    printf("Qual é o número de pontos turisticos:");
    scanf("%d", &Numero_Pontos_Turistico);

    // Carta02

    printf("\nDigite os dados da carta 02 \n");
    printf("Qual é o Estado:");
    scanf("%s", &Estado2);

    printf("Qual é o código da carta:");
    scanf("%s", Codico_Da_Carta2);

    getchar();
    printf("Qual é o nome da Cidade:");
    fgets(Nome_Da_Cidade2, sizeof(Nome_Da_Cidade2), stdin);

    printf("Qual é a quantidade da População:");
    scanf("%d", &Populacao2);

    printf("Qual é a Área:");
    scanf("%f", &Area2);

    printf("Qual é o PIB:");
    scanf("%f", &PIB2);

    printf("Qual é o número de pontos turisticos:");
    scanf("%d", &Numero_Pontos_Turistico2);

    system("clean");
    // Dados das cartas;
    printf("\nDados da Carta 01");

    printf("\n\nEstado: %c", Estado);
    printf("\nCódigo: %s", Codico_Da_Carta);
    printf("\nNome da Cidade: %s ", Nome_Da_Cidade);
    printf("\nPopulação: %d", Populacao);
    printf("\nÁrea: %f km²", Area);
    printf("\nPIB: %f bilhões de reais", PIB);
    printf("\nNúmero de Pontos Turisticos: %d", Numero_Pontos_Turistico);
    Densidade = Populacao / Area;
    printf("\nDensidade Populacional: %f hab/km²", Densidade);
    PIB_PER_CAPITAL = (float)PIB * 1000000000 / Populacao;
    printf("\nPIB per Capita:  %f reais", PIB_PER_CAPITAL);

    // Dados das cartas 02;
    printf("\n\nDados da Carta 02");

    printf("\n\nEstado: %c", Estado2);
    printf("\nCódigo: %s", Codico_Da_Carta2);
    printf("\nNome da Cidade: %s ", Nome_Da_Cidade2);
    printf("\nPopulação: %d", Populacao2);
    printf("\nÁrea: %f km²", Area2);
    printf("\nPIB: %f bilhões de reais", PIB2);
    printf("\nNúmero de Pontos Turisticos: %d", Numero_Pontos_Turistico2);
    Densidade2 = Populacao2 / Area2;
    printf("\nDensidade Populacional: %f hab/km²", Densidade2);
    PIB_PER_CAPITAL2 = (float)PIB2 * 1000000000 / Populacao2;
    printf("\nPIB per Capita:  %f reais", PIB_PER_CAPITAL2);

    int comparacao;
    int first;
    int segund;

    printf("\n\nSelecione 2 atributos para comparar?");
    printf("\nOpção - 1 - População");
    printf("\nOpção - 2 - Área");
    printf("\nOpção - 3 - PIB");
    printf("\nOpção - 4 - Densidade");
    printf("\nOpção - 5 - PIB PER CAPITAL");
    scanf("\n %d", &first);
    printf("\n\nSelecione 1 atributo para comparar?");
    printf("\nOpção - 1 - População");
    printf("\nOpção - 2 - Área");
    printf("\nOpção - 3 - PIB");
    printf("\nOpção - 4 - Densidade");
    printf("\nOpção - 5 - PIB PER CAPITAL");
    scanf("\n %d", &segund);

    if (segund == first)
    {
        printf("\n\nVocê já escolheu este atributo, selecione um novo:");
        scanf("\n %d", &segund);
        printf("\nOpção - 1 - População");
        printf("\nOpção - 2 - Área");
        printf("\nOpção - 3 - PIB");
        printf("\nOpção - 4 - Densidade");
        printf("\nOpção - 5 - PIB PER CAPITAL");
    }

    switch (first && segund)
    {

    

        default:

        ;
    
}





