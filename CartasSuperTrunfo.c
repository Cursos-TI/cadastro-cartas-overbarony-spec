#include <stdio.h>

struct Carta { //CRIA UM NOVO TIPO DE DADO
    int Populacao, Pontos_Turisticos;
    float km2, PIB; 
    char Estado[50], Codigo_da_carta[50], Cidade[50];
};

int main() {
    struct Carta c1;
    struct Carta c2;

    // MENSAGEM DE BOAS-VINDAS
    printf("=============================================\n");
    printf("     Bem vindo ao jogo Super Trunfo Paises\n");
    printf("=============================================\n\n");
    printf("Voce vai cadastrar duas cartas com informacoes de cidades.\n");
    printf("Siga as instrucoes cuidadosamente para cada carta.\n\n");

    //INFORMAÇÕES CARTA 1
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado da Carta 1: ");
    scanf("%s", c1.Estado);

    printf("Digite o Codigo da carta (Ex: A01, B02): ");
    scanf("%s", c1.Codigo_da_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c1.Cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &c1.Populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &c1.km2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c1.PIB);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &c1.Pontos_Turisticos);

    //INFORMAÇÕES CARTA 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o Estado da Carta 2: ");
    scanf("%s", c2.Estado);

    printf("Digite o Codigo da carta (Ex: A01, B02): ");
    scanf("%s", c2.Codigo_da_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c2.Cidade);

    printf("Digite a Populacao: ");
    scanf("%d", &c2.Populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &c2.km2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c2.PIB);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &c2.Pontos_Turisticos);

    // IMPRESSÃO DAS CARTAS
    printf("\n=============================================\n");
    printf("                    CARTA 1\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c1.Estado);
    printf("Codigo da carta: %s\n", c1.Codigo_da_carta);
    printf("Cidade: %s\n", c1.Cidade);
    printf("Populacao: %d\n", c1.Populacao);
    printf("Area em km2: %.2f\n", c1.km2);
    printf("PIB: %.2f\n", c1.PIB);
    printf("Pontos turisticos: %d\n", c1.Pontos_Turisticos);

    printf("\n=============================================\n");
    printf("                    CARTA 2\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c2.Estado);
    printf("Codigo da carta: %s\n", c2.Codigo_da_carta);
    printf("Cidade: %s\n", c2.Cidade);
    printf("Populacao: %d\n", c2.Populacao);
    printf("Area em km2: %.2f\n", c2.km2);
    printf("PIB: %.2f\n", c2.PIB);
    printf("Pontos turisticos: %d\n", c2.Pontos_Turisticos);

    printf("\nObrigado por jogar o Super Trunfo Paises!\n");

    return 0;
}
