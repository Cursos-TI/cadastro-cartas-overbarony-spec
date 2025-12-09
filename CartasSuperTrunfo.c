#include <stdio.h> // Biblioteca padrão de entrada e saída, necessária para printf e scanf

// Definição de uma estrutura para representar uma carta do jogo
struct Carta { 
    int Populacao;           // Armazena a população da cidade
    int Pontos_Turisticos;   // Armazena a quantidade de pontos turísticos
    float km2;               // Área da cidade em km²
    float PIB;               // Produto Interno Bruto da cidade
    char Estado[50];         // Nome do estado
    char Codigo_da_carta[50]; // Código único da carta (ex: A01)
    char Cidade[50];         // Nome da cidade
};

int main() {
    // Criação de duas variáveis do tipo struct Carta para armazenar informações das cartas
    struct Carta c1;
    struct Carta c2;

    // MENSAGEM DE BOAS-VINDAS
    printf("=============================================\n");
    printf("     Bem-vindo ao jogo Super Trunfo Paises!\n");
    printf("=============================================\n\n");
    printf("Você vai cadastrar duas cartas com informações de cidades.\n");
    printf("Siga as instruções cuidadosamente para cada carta.\n\n");

    // CADASTRO DA CARTA 1
    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o Estado da Carta 1: ");
    scanf("%s", c1.Estado); // Lê o estado da cidade e armazena em c1.Estado

    printf("Digite o Código da carta (Ex: A01, B02): ");
    scanf("%s", c1.Codigo_da_carta); // Lê o código da carta e armazena em c1.Codigo_da_carta

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c1.Cidade); // Lê o nome da cidade e armazena em c1.Cidade

    printf("Digite a População: ");
    scanf("%d", &c1.Populacao); // Lê a população (inteiro) e armazena em c1.Populacao

    printf("Digite a Área em km2: ");
    scanf("%f", &c1.km2); // Lê a área (float) e armazena em c1.km2

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c1.PIB); // Lê o PIB (float) e armazena em c1.PIB

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &c1.Pontos_Turisticos); // Lê a quantidade de pontos turísticos e armazena em c1.Pontos_Turisticos

    // CADASTRO DA CARTA 2
    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o Estado da Carta 2: ");
    scanf("%s", c2.Estado);

    printf("Digite o Código da carta (Ex: A01, B02): ");
    scanf("%s", c2.Codigo_da_carta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", c2.Cidade);

    printf("Digite a População: ");
    scanf("%d", &c2.Populacao);

    printf("Digite a Área em km2: ");
    scanf("%f", &c2.km2);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &c2.PIB);

    printf("Digite a Quantidade de Pontos Turísticos: ");
    scanf("%d", &c2.Pontos_Turisticos);

    // IMPRESSÃO DAS CARTAS
    printf("\n=============================================\n");
    printf("                    CARTA 1\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c1.Estado);
    printf("Código da carta: %s\n", c1.Codigo_da_carta);
    printf("Cidade: %s\n", c1.Cidade);
    printf("População: %d\n", c1.Populacao);
    printf("Área em km2: %.2f\n", c1.km2);
    printf("PIB: %.2f\n", c1.PIB);
    printf("Pontos turísticos: %d\n", c1.Pontos_Turisticos);

    printf("\n=============================================\n");
    printf("                    CARTA 2\n");
    printf("=============================================\n");
    printf("Estado: %s\n", c2.Estado);
    printf("Código da carta: %s\n", c2.Codigo_da_carta);
    printf("Cidade: %s\n", c2.Cidade);
    printf("População: %d\n", c2.Populacao);
    printf("Área em km2: %.2f\n", c2.km2);
    printf("PIB: %.2f\n", c2.PIB);
    printf("Pontos turísticos: %d\n", c2.Pontos_Turisticos);

    // Mensagem de encerramento do programa
    printf("\nObrigado por jogar o Super Trunfo Paises!\n");

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}
