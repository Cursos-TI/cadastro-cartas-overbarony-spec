#include <stdio.h>


struct Carta { //CRIA UM NOVO TIPO DE DADO
    int Populacao, Pontos_Turisticos;
    float km2, PIB; 
    char Estado[50], Codigo_da_carta[50], Cidade[50];
};


int main() { // int main() indica para o sistema que o programa vai retornar um código de status (0 = OK)

    struct Carta c1;
    struct Carta c2;

    //INFORMAÇÕES CARTA 1

    printf("Digite o Estado da Carta 1:\n"); // printf exibe mensagens ou valores na tela (saída do programa)
    scanf("%s", c1.Estado); // scanf lê dados digitados pelo usuário e guarda nas variáveis.

    printf("Digite o Codigo da carta:\n A letra do estado seguida de um numero de 01 a 04 ex: A01, B02\n");
    scanf("%s", c1.Codigo_da_carta);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", c1.Cidade);

    printf("Digite a Populacao:\n");
    scanf("%d", &c1.Populacao);

    printf("Digite a Area em km2:\n");
    scanf("%f", &c1.km2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &c1.PIB);

    printf("Digite a Quantidade de Pontos Turisticos:\n");
    scanf("%d", &c1.Pontos_Turisticos);

    //INFORMAÇÕES CARTA 2

    printf("\nDigite o Estado da Carta 2:\n");
    scanf("%s", c2.Estado);

    printf("Digite o Codigo da carta:\n A letra do estado seguida de um numero de 01 a 04 ex: A01, B02\n");
    scanf("%s", c2.Codigo_da_carta);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", c2.Cidade);

    printf("Digite a Populacao:\n");
    scanf("%d", &c2.Populacao);

    printf("Digite a Area em km2:\n");
    scanf("%f", &c2.km2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &c2.PIB);

    printf("Digite a Quantidade de Pontos Turisticos:\n");
    scanf("%d", &c2.Pontos_Turisticos);

    // IMPRESSAO

    printf("\nCARTA 1\n");
    printf("Estado: %s\n", c1.Estado);
    printf("Codigo da carta: %s\n", c1.Codigo_da_carta);
    printf("Cidade: %s\n", c1.Cidade);
    printf("Populacao: %d\n", c1.Populacao);
    printf("Area em km2: %f\n", c1.km2);
    printf("PIB: %f\n", c1.PIB);
    printf("Pontos turisticos: %d\n", c1.Pontos_Turisticos);

    printf("\nCARTA 2\n");
    printf("Estado: %s\n", c2.Estado);
    printf("Codigo da carta: %s\n", c2.Codigo_da_carta);
    printf("Cidade: %s\n", c2.Cidade);
    printf("Populacao: %d\n", c2.Populacao);
    printf("Area em km2: %f\n", c2.km2);
    printf("PIB: %f\n", c2.PIB);
    printf("Pontos turisticos: %d\n", c2.Pontos_Turisticos);

    return 0;
}
