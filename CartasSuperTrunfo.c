#include <stdio.h> // Biblioteca padrão para usar printf, scanf, etc.

// Estrutura que representa uma carta do jogo Super Trunfo
// Ela reúne vários dados sobre uma cidade.
struct Carta {
    int Populacao, Pontos_Turisticos;                      // Valores inteiros
    float km2, PIB, Densidade_Populacional, PIB_Per_Capita; // Valores decimais (float)
    char Estado[50], Codigo_da_carta[50], Cidade[50];     // Strings (vetores de char)
};

int main() {
    struct Carta c1; // Declara a carta 1
    struct Carta c2; // Declara a carta 2

    // MENSAGEM DE BOAS-VINDAS INICIAL
    printf("=============================================\n");
    printf("     Bem vindo ao jogo Super Trunfo Cidades\n");
    printf("=============================================\n\n");
    printf("Voce vai cadastrar duas cartas com informacoes de cidades.\n");
    printf("Siga as instrucoes cuidadosamente para cada carta.\n\n");

    // =============================
    //      CADASTRO DA CARTA 1
    // =============================
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado da Carta 1: ");
    scanf("%s", c1.Estado);  // Lê o estado (string)

    printf("Digite o Codigo da carta (Ex: A01, B02): ");
    scanf("%s", c1.Codigo_da_carta); // Lê o código da carta

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c1.Cidade); // Lê o nome da cidade

    printf("Digite a Populacao: ");
    scanf("%d", &c1.Populacao); // Lê população (inteiro)

    printf("Digite a Area em km2: ");
    scanf("%f", &c1.km2); // Lê área (float)

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c1.PIB); // Lê PIB (float)

    printf("Digite a Quantidade de Pontos Turisticos: ");
    scanf("%d", &c1.Pontos_Turisticos); // Lê pontos turísticos

    // Cálculo automático da densidade populacional
    // Fórmula: população / área
    c1.Densidade_Populacional = (c1.Populacao / c1.km2);

    // Cálculo do PIB per capita
    // Fórmula: PIB / população
    c1.PIB_Per_Capita = (c1.PIB / c1.Populacao);

    // =============================
    //      CADASTRO DA CARTA 2
    // =============================
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

    // Calcula densidade populacional da carta 2
    c2.Densidade_Populacional = (c2.Populacao / c2.km2);

    // Calcula PIB per capita da carta 2
    c2.PIB_Per_Capita = (c2.PIB / c2.Populacao);

    // =============================
    //        IMPRESSÃO CARTA 1
    // =============================
    printf("\n=============================================\n");
    printf("                    CARTA 1\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c1.Estado);
    printf("Codigo da carta: %s\n", c1.Codigo_da_carta);
    printf("Cidade: %s\n", c1.Cidade);
    printf("Populacao: %d\n", c1.Populacao);
    printf("Area em km2: %.2f\n", c1.km2);
    printf("PIB: %.2f %s\n", c1.PIB, "de reais");
    printf("Pontos turisticos: %d\n", c1.Pontos_Turisticos);
    printf("Densidade Populacional: %.2f %s\n", c1.Densidade_Populacional, "hab/km²");
    printf("PIB Per Capita: %.2f %s\n", c1.PIB_Per_Capita, "reais");

    // =============================
    //        IMPRESSÃO CARTA 2
    // =============================
    printf("\n=============================================\n");
    printf("                    CARTA 2\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c2.Estado);
    printf("Codigo da carta: %s\n", c2.Codigo_da_carta);
    printf("Cidade: %s\n", c2.Cidade);
    printf("Populacao: %d\n", c2.Populacao);
    printf("Area em km2: %.2f\n", c2.km2);
    printf("PIB: %.2f %s\n", c2.PIB, "de reais");
    printf("Pontos turisticos: %d\n", c2.Pontos_Turisticos);
    printf("Densidade Populacional: %.2f %s\n", c2.Densidade_Populacional, "hab/km²");
    printf("PIB Per Capita: %.2f %s\n", c2.PIB_Per_Capita, "reais");

    // Mensagem final
    printf("\nObrigado por jogar o Super Trunfo Cidades!\n");

    return 0; 
}
