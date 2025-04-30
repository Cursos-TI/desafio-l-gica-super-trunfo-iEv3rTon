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
    // char estado1;
    char codigoDaCidade1[4]; // 3 caracteres + '\0'
    char nomeDaCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapital1;
    // float superPoder1; // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos...

    // Declaração das variáveis para a Carta 2
    // char estado2;
    char codigoDaCidade2[4];
    char nomeDaCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapital2;
    // float superPoder2; // somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos...

    /*
     * Entrada de dados da Carta 1
     */
    printf("\n### Bem-vindo ao Super Trunfo. ###\n");
    printf("-Voce ira registrar duas cartas, e depois escolher dois atributos para comparalas.\n");

    printf("-----\nComeçou!\n------\n")
    printf("Cadastro da Carta 1\n");

    printf("Informe o Nome do Pais: ");
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

    printf("Informe o Nome do Pais: ");
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
        Nome da Cidade: São Paulo
        População: 12325000
        Área: 1521.11 km²
        PIB: 699.28 bilhões de reais
        Número de Pontos Turísticos: 50
        Densidade Populacional: 8102.47 hab/km²
        PIB per capita: 56724.32 reais
    */
    printf("\n---------\nCARTAS REGISTRADAS\n---------\n");
    // Exibição dos dados da Carta 1
    printf("\n## Carta 1:\n");
    printf("-Nome da Cidade: %s\n", nomeDaCidade1);
    printf("-População: %d\n", populacao1);
    printf("-Área: %.2f km²\n", area1);
    printf("-PIB: %.2f bilhões de reais\n", pib1);
    printf("-Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Calcular densidade
    densidadePopulacional1 = populacao1 / area1;
    printf("-Densidade Populacional %.2f hab/km²\n", densidadePopulacional1); // ex: 8102.47 hab/km²

    // calcular pib per capita
    pibPerCapital1 = pib1 / populacao1;
    printf("-PIB per capita: %.2f reais\n", pibPerCapital1); // 56724.32 reais


    // // Exibição dos dados da Carta 2
    printf("\n## Carta 2:\n");
    printf("-Nome da Cidade: %s\n", nomeDaCidade2);
    printf("-População: %d\n", populacao2);
    printf("-Área: %.2f km²\n", area2);
    printf("-PIB: %.2f bilhões de reais\n", pib2);
    printf("-Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    // Calcular dencidade
    densidadePopulacional2 = (float)populacao2 / (float)area2;
    printf("Densidade Populacional %.2f hab/km²\n", densidadePopulacional2); // ex: 8102.47 hab/km²
    // calcular pib per capita
    pibPerCapital2 = (float)pib2 / (float)populacao2;
    printf("PIB per capita: %.2f reais\n", pibPerCapital2); //56724.32 reais

    /*
        Comparação de Cartas:
    */
    printf("------------------------");
    printf("\n-COMPARAÇAO DE CARTAS:\n");
    printf("------------------------\n");

    // numero para comparar os requisitos
    int numeroDeComparacao1;
    int numeroDeComparacao2;
    char atributoNome1[20];
    char atributoNome2[20];
    float somaCarta1 = 0;
    float somaCarta2 = 0;

    printf("# Escolha o primeiro Atributo para comparação:\n");
    printf("1: Populacao. \n2: Area. \n3: PIB. \n4: Pontos turisticos. \n5: Densidade populacional.\n");
    printf("# Digite o numero da sua escolha: ");
    scanf("%d", &numeroDeComparacao1);

    printf("\n\n=-=-=- PRIMEIRA COMPARAÇAO -=-=-=\n");
    printf("- Paises: %s VS %s \n", nomeDaCidade1, nomeDaCidade2);

    switch (numeroDeComparacao1)
    {
    case 1:
        printf("Atributo usado na comparaçao: Populaçao\n");
        printf("(%d) VS (%d)\n", populacao1, populacao2);

        if (populacao1 > populacao2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        }
        else if (populacao1 == populacao2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        }

        atributoNome1 = "População";
        somaCarta1 += (float) populacao1;
        somaCarta2 += (float) populacao2;

        break;

    // Area
    case 2:
        printf("Atributo usado na comparaçao: Area\n");
        printf("(%.2f) VS (%.2f)\n", area1, area2);
        
        if (area1 > area2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        } 
        else if (area1 == area2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome1 = "Area";
        somaCarta1 += (float) area1;
        somaCarta2 += (float) area2;

        break;

    // PIB
    case 3:
        printf("Atributo usado na comparaçao: PIB\n");
        printf("(%.2f) VS (%.2f)\n", pib1, pib2);
        
        if (pib1 > pib2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        }
        else if (pib1 == pib2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome1 = "PIB";
        somaCarta1 += (float) pib1;
        somaCarta2 += (float) pib2;
        
        break;

    case 4:
        // Densidade
        printf("Atributo usado na comparaçao: Densidade\n");
        printf("(%.2f) VS (%.2f)\n", densidadePopulacional1, densidadePopulacional2);
        
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        } 
        else if (densidadePopulacional1 == densidadePopulacional2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome1 = "Densidade";
        somaCarta1 += (float) densidadePopulacional1;
        somaCarta2 += (float) densidadePopulacional2;

        break;

    case 5:
        // pontos turisticos
        printf("Atributo usado na comparaçao: Pontos turisticos\n");
        printf("(%d) VS (%d)\n", pontosTuristicos1, pontosTuristicos2);
        
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("### O pais %s venceu. ###\n", nomeDaCidade1);
        } 
        else if (pontosTuristicos1 == pontosTuristicos2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        }

        atributoNome1 = "Pontos Turisticos";
        somaCarta1 += (float) pontosTuristicos1;
        somaCarta2 += (float) pontosTuristicos2;

        break;

    default:
        printf("Numero invalido escolhido.");
        return 0;

        break;
    }

    /*
        Segundo atributo
    */
    printf("\n# Escolha o segundo Atributo para comparação:\n");
    // excluir opçao ja selecionada
    if (numeroDeComparacao1 != 1) printf("1: Populacao. \n");
    if (numeroDeComparacao1 != 2) printf("2: Area. \n");
    if (numeroDeComparacao1 != 3) printf("3: PIB. \n");
    if (numeroDeComparacao1 != 4) printf("4: Pontos turisticos. \n");
    if (numeroDeComparacao1 != 5) printf("5: Densidade populacional.\n");

    printf("\n# Digite o numero da sua escolha: ");
    scanf("%d", &numeroDeComparacao2);

    // verificar se foi escolhida a mesma opçao
    if (numeroDeComparacao1 == numeroDeComparacao2) {
        printf("Numero invalido escolhido.");
        return 0;
    }

    printf("\n\n=-=-=- SEGUNDA COMPARAÇAO -=-=-=\n");
    // printf("- Paises: %s VS %s \n", nomeDaCidade1, nomeDaCidade2);

    switch (numeroDeComparacao2)
    {
    case 1:
        printf("Atributo usado na comparaçao: Populaçao\n");
        printf("(%d) VS (%d)\n", populacao1, populacao2);

        if (populacao1 > populacao2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        }
        else if (populacao1 == populacao2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        }

        atributoNome2 = "População";
        somaCarta1 += (float) populacao1;
        somaCarta2 += (float) populacao2;

        break;

    // Area
    case 2:
        printf("Atributo usado na comparaçao: Area\n");
        printf("(%.2f) VS (%.2f)\n", area1, area2);
        
        if (area1 > area2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        } 
        else if (area1 == area2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome2 = "Area";
        somaCarta1 += (float) area1;
        somaCarta2 += (float) area2;

        break;

    // PIB
    case 3:
        printf("Atributo usado na comparaçao: PIB\n");
        printf("(%.2f) VS (%.2f)\n", pib1, pib2);
        
        if (pib1 > pib2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        }
        else if (pib1 == pib2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome2 = "PIB";
        somaCarta1 += (float) pib1;
        somaCarta2 += (float) pib2;
        
        break;

    case 4:
        // Densidade
        printf("Atributo usado na comparaçao: Densidade\n");
        printf("(%.2f) VS (%.2f)\n", densidadePopulacional1, densidadePopulacional2);
        
        if (densidadePopulacional1 < densidadePopulacional2) {
            printf("### O pais %s venceu. ###", nomeDaCidade1);
        } 
        else if (densidadePopulacional1 == densidadePopulacional2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        } 

        atributoNome2 = "Densidade";
        somaCarta1 += (float) densidadePopulacional1;
        somaCarta2 += (float) densidadePopulacional2;

        break;

    case 5:
        // pontos turisticos
        printf("Atributo usado na comparaçao: Pontos turisticos\n");
        printf("(%d) VS (%d)\n", pontosTuristicos1, pontosTuristicos2);
        
        if (pontosTuristicos1 > pontosTuristicos2) {
            printf("### O pais %s venceu. ###\n", nomeDaCidade1);
        } 
        else if (pontosTuristicos1 == pontosTuristicos2) { // empate
            printf("### Os paises empataram neste atributo. ###");
        }
        else {
            printf("### O pais %s venceu. ###\n", nomeDaCidade2);
        }

        atributoNome2 = "Pontos Turisticos";
        somaCarta1 += (float) pontosTuristicos1;
        somaCarta2 += (float) pontosTuristicos2;

        break;

    default:
        printf("Numero invalido escolhido.");
        return 0;

        break;
    }


    int cartaVencedora = somaCarta1 > somaCarta2 ? 1 : 2;

    printf("\n#######################\n")
    printf("### Resultado Final ###")
    printf("\n#######################\n")
    // O nome dos dois países.
    printf("- Paises: %s VS %s \n", nomeDaCidade1, nomeDaCidade2);
    // Os dois atributos usados na comparação.
    printf("- Atributos: 1° %s, 2° %s", atributoNome1, atributoNome2);
    // Os valores de cada atributo para cada carta.
    
    // A soma dos atributos para cada carta.
    
    // Qual carta venceu (ou se houve empate).








    return 0;
}

