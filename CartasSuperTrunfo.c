#include <stdio.h>

struct Carta { 
    unsigned long int Populacao;
    int Pontos_Turisticos;
    float km2, PIB, Densidade_Populacional, PIB_Per_Capita, Super_Poder;
    char Estado[50], Codigo_da_carta[50], Cidade[50];
};

int main() {
    struct Carta c1;
    struct Carta c2;

    printf("=============================================\n");
    printf("     Bem vindo ao jogo Super Trunfo Cidades\n");
    printf("=============================================\n\n");
    printf("Voce vai cadastrar duas cartas com informacoes de cidades.\n");
    printf("Siga as instrucoes cuidadosamente para cada carta.\n\n");

    // CARTA 1
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado da Carta 1: ");
    scanf("%s", c1.Estado);

    printf("Digite o Codigo da carta (Ex: A01, B02): ");
    scanf("%s", c1.Codigo_da_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c1.Cidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &c1.Populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &c1.km2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c1.PIB);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &c1.Pontos_Turisticos);

    // Cálculos carta 1
    c1.Densidade_Populacional = (float)c1.Populacao / c1.km2;
    c1.PIB_Per_Capita = c1.PIB / c1.Populacao;

    c1.Super_Poder =
        (float)c1.Populacao +
        c1.km2 +
        c1.PIB +
        (float)c1.Pontos_Turisticos +
        c1.PIB_Per_Capita +
        (1.0f / c1.Densidade_Populacional);

    // CARTA 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o Estado da Carta 2: ");
    scanf("%s", c2.Estado);

    printf("Digite o Codigo da carta (Ex: A01, B02): ");
    scanf("%s", c2.Codigo_da_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c2.Cidade);

    printf("Digite a Populacao: ");
    scanf("%lu", &c2.Populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &c2.km2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c2.PIB);

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &c2.Pontos_Turisticos);

    // Cálculos carta 2
    c2.Densidade_Populacional = (float)c2.Populacao / c2.km2;
    c2.PIB_Per_Capita = c2.PIB / c2.Populacao;

    c2.Super_Poder =
        (float)c2.Populacao +
        c2.km2 +
        c2.PIB +
        (float)c2.Pontos_Turisticos +
        c2.PIB_Per_Capita +
        (1.0f / c2.Densidade_Populacional);

    // IMPRESSÃO DAS CARTAS
    printf("\n=============================================\n");
    printf("                    CARTA 1\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c1.Estado);
    printf("Codigo da carta: %s\n", c1.Codigo_da_carta);
    printf("Cidade: %s\n", c1.Cidade);
    printf("Populacao: %lu\n", c1.Populacao);
    printf("Area em km2: %.2f\n", c1.km2);
    printf("PIB: %.2f %s\n", c1.PIB, "de reais");
    printf("Pontos turisticos: %d\n", c1.Pontos_Turisticos);
    printf("Densidade Populacional: %.2f %s\n", c1.Densidade_Populacional, "hab/km²");
    printf("PIB Per Capita: %.2f %s\n", c1.PIB_Per_Capita, "reais");
    printf("Super Poder: %.2f\n", c1.Super_Poder);

    printf("\n=============================================\n");
    printf("                    CARTA 2\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c2.Estado);
    printf("Codigo da carta: %s\n", c2.Codigo_da_carta);
    printf("Cidade: %s\n", c2.Cidade);
    printf("Populacao: %lu\n", c2.Populacao);
    printf("Area em km2: %.2f\n", c2.km2);
    printf("PIB: %.2f %s\n", c2.PIB,"de reais");
    printf("Pontos turisticos: %d\n", c2.Pontos_Turisticos);
    printf("Densidade Populacional: %.2f %s\n", c2.Densidade_Populacional,"hab/km²");
    printf("PIB Per Capita: %.2f %s\n", c2.PIB_Per_Capita,"reais");
    printf("Super Poder: %.2f\n", c2.Super_Poder);

    // COMPARAÇÕES
    printf("\n====== RESULTADO DAS COMPARACOES ======\n");
    
    printf("Populacao: Carta 1 venceu (%d)\n", c1.Populacao > c2.Populacao);
    printf("Area em km2: Carta 1 venceu (%d)\n", c1.km2 >  c2.km2);
    printf("PIB: Carta 1 venceu (%d)\n", c1.PIB > c2.PIB);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.Pontos_Turisticos > c2.Pontos_Turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.Densidade_Populacional < c2.Densidade_Populacional);
    printf("PIB Per Capita: Carta 1 venceu (%d)\n", c1.PIB_Per_Capita > c2.PIB_Per_Capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.Super_Poder > c2.Super_Poder);

    printf("\nObrigado por jogar o Super Trunfo Cidades!\n");

    return 0;
}
