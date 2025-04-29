#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
       
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    /*
        Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
        Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
        Nome da Cidade: O nome da cidade. Tipo: char[] (string)
        População: O número de habitantes da cidade. Tipo: int
        Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
        PIB: O Produto Interno Bruto da cidade. Tipo: float
        Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int    
    */
    
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigoDaCidade1[4]; // 3 caracteres + '\0'
    char nomeDaCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapital1;
    float superPoder1; // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos...

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigoDaCidade2[4];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapital2;
    float superPoder2; // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos...

    /*
     * Entrada de dados da Carta 1
     */

    printf("Cadastro da Carta 1\n");

    printf("Informe o Estado (Uma letra de 'A' a 'H' (representando um dos oito estados)): ");
    scanf(" %c", &estado1);
    printf("Informe o Código da Carta (letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", codigoDaCidade1);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade1); //  %[^\n] permite ler nomes com espaços
    printf("Informe a População (número de habitantes da cidade): ");
    scanf("%u", &populacao1);
    printf("Informe a Área (a área da cidade em quilômetros quadrados (em km²)): ");
    scanf("%f", &area1);
    printf("Informe o PIB (Produto Interno Bruto da cidade): ");
    scanf("%f", &pib1);
    printf("Informe o Número de Pontos Turísticos (quantidade de pontos turísticos na cidade): ");
    scanf("%d", &pontosTuristicos1);

    // /*
    //  * Entrada de dados da Carta 2
    //  */
    printf("\nCadastro da Carta 2\n");

    printf("Informe o Estado (Uma letra de 'A' a 'H' (representando um dos oito estados)): ");
    scanf(" %c", &estado2);
    printf("Informe o Código da Carta (letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", codigoDaCidade2);
    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeDaCidade2);
    printf("Informe a População (número de habitantes da cidade): ");
    scanf("%u", &populacao2);
    printf("Informe a Área (a área da cidade em quilômetros quadrados (em km²)): ");
    scanf("%f", &area2);
    printf("Informe o PIB (Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);
    printf("Informe o Número de Pontos Turísticos (quantidade de pontos turísticos na cidade): ");
    scanf("%d", &pontosTuristicos2);

    /*
        Carta 1:
        Estado: A
        Código: A01
        Nome da Cidade: São Paulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50
        Densidade Populacional: 8102.47 hab/km²
        PIB per capita: 56724.32 reais
    */
    printf("\n-CARTAS REGISTRADAS\n");
    // Exibição dos dados da Carta 1
    printf("\n-Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCidade1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Calcular densidade
    densidadePopulacional1 = populacao1 / area1;
    printf("Densidade Populacional %.2f hab/km²\n", densidadePopulacional1); // ex: 8102.47 hab/km²

    // calcular pib per capita
    pibPerCapital1 = pib1 / populacao1;
    printf("PIB per capita: %.2f reais\n", pibPerCapital1); // 56724.32 reais

    // calcular super poder
    superPoder1 = (float) (populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapital1) + (1.0f / densidadePopulacional1);
    printf("Super Poder: %.2f \n", superPoder1);
    

    // // Exibição dos dados da Carta 2
    printf("\n-Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCidade2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Calcular dencidade
    densidadePopulacional2 = (float)populacao2 / (float)area2;
    printf("Densidade Populacional %.2f hab/km²\n", densidadePopulacional2); // ex: 8102.47 hab/km²
    // calcular pib per capita
    pibPerCapital2 = (float)pib2 / (float)populacao2;
    printf("PIB per capita: %.2f reais\n", pibPerCapital2); //56724.32 reais

    // calcular super poder
    superPoder2 = (float) (populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapital2) + (1.0f / densidadePopulacional2);
    printf("Super Poder: %.2f \n", superPoder2);


    /*
        Comparação de Cartas:
    */
    printf("------------------------");
    printf("\n-COMPARAÇAO DE CARTAS:\n");
    printf("------------------------");
    
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    char vencedorPopulacao[55]; 
    char vencedorArea[55];
    char vencedorPIB[55];
    char vencedorDensidade[55];
    char vencedorPontosTuristicos[55];

    // total
    unsigned int carta1 = 0;
    unsigned int carta2 = 0;

    if (populacao1 > populacao2) {
        sprintf(vencedorPopulacao, "1 %s", nomeDaCidade1);
        carta1 += 1;
    } else {
        sprintf(vencedorPopulacao, "2 %s", nomeDaCidade2);
        carta2 += 1;
    }
    // Area
    if (area1 > area2) {
        carta1 += 1;
        sprintf(vencedorArea, "1 %s", nomeDaCidade1);
    } else {
        carta2 += 1;
        sprintf(vencedorArea, "2 %s", nomeDaCidade2);
    }
    // PIB
    if (pib1 > pib2) {
        carta1 += 1;
        sprintf(vencedorPIB, "1 %s", nomeDaCidade1);
    } else {
        carta2 += 1;
        sprintf(vencedorPIB, "2 %s", nomeDaCidade2);
    }
    // Densidade
    if (densidadePopulacional1 < densidadePopulacional2) {
        carta1 += 1;
        sprintf(vencedorDensidade, "1 %s", nomeDaCidade1);
    } else {
        carta2 += 1;
        sprintf(vencedorDensidade, "2 %s", nomeDaCidade2);
    }
    // pontos turisticos
    if (pontosTuristicos1 > pontosTuristicos2) {
        carta1 += 1;
        sprintf(vencedorPontosTuristicos, "1 %s", nomeDaCidade1);
    } else {
        carta2 += 1;
        sprintf(vencedorPontosTuristicos, "2 %s", nomeDaCidade2);
    }

    // comparar um atributo
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d \n", nomeDaCidade1, populacao1);  // São Paulo (SP): 12.300.000
    printf("Carta 2 - %s: %d \n", nomeDaCidade2, populacao2); //Rio de Janeiro (RJ): 6.000.000
    printf("Resultado: Carta (%s) venceu!\n", vencedorPopulacao); //Carta 1 (São Paulo) venceu!

    printf("\nComparação de cartas (Atributo: Area):\n");
    printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, area1);
    printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, area2);
    printf("Resultado: Carta (%s) venceu!\n", vencedorArea);

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, pib1);
    printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, pib2);
    printf("Resultado: Carta (%s) venceu!\n", vencedorPIB);

    printf("\nComparação de cartas (Atributo: Densidade populacional):\n");
    printf("Carta 1 - %s: %.2f \n", nomeDaCidade1, densidadePopulacional1);
    printf("Carta 2 - %s: %.2f \n", nomeDaCidade2, densidadePopulacional2);
    printf("Resultado: Carta (%s) venceu!\n", vencedorDensidade);

    printf("\nComparação de cartas (Atributo: Pontos turisticos):\n");
    printf("Carta 1 - %s: %d \n", nomeDaCidade1, pontosTuristicos1);
    printf("Carta 2 - %s: %d \n", nomeDaCidade2, pontosTuristicos2);
    printf("Resultado: Carta (%s) venceu!\n", vencedorPontosTuristicos);

    if (carta1 > carta2) {
        printf("\nCarta: 1, venceu o maior numero de quisitos.\n");
    } else {
        printf("\nCarta: 2, venceu o maior numero de quisitos.\n");
    } //else if (carta1 == carta2) {
        // empate
    // }


    return 0;
}

