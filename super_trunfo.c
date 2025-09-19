#include <stdio.h>

    int main() {
     
        int pontos_tur1, pontos_tur2, populacao1, populacao2; // variáveis de pontos turísticos e populações
        char estado1, estado2; // variáveis do estado
        float area1, area2, PIB1, PIB2; // variáveis de áreas e de PIBs
        float densidade_pop1, densidade_pop2, PIB_per_capita1, PIB_per_capita2; // variáveis de densidade populacional e PIB per capita
        char nome1[20], nome2[20], codigo1[3], codigo2[3]; // variáveis do nome das cidades e do código das cartas

        printf("Dados da Carta 1: \n"); //identificando a Carta 1

            printf("Digite uma letra de A a H para representar um dos oito estados: \n"); // entrada da letra que representa o estado
            scanf("%c", &estado1);

            printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n"); // entrada do código da carta
            scanf("%s", codigo1);

            printf("Digite o nome da Cidade: \n"); // entrada do nome da cidade
            scanf("%s", nome1);

            printf("Digite o número de habitante: \n"); // entrada da população
            scanf("%i", &populacao1);

            printf("Digite a área (em km²): \n"); // entrada da área da cidade
            scanf("%f", &area1);

            printf("Digite o PIB da cidade: \n"); // entrada do PIB da cidade
            scanf("%f", &PIB1);

            printf("Digite o número de pontos turísticos: \n"); // entrada do número de pontos turísticos da cidade
            scanf("%i", &pontos_tur1);

            densidade_pop1 = (float) populacao1 / area1; // cálculo da densidade populacional
            PIB_per_capita1 = (float) PIB1 / populacao1; // cálculo do PIB per capita

        printf(" \n"); // espaçamento

            printf("Carta 1: \n"); // identificando a saída da Carta 1
            printf("Estado: %c \n", estado1); // saída do estado da Carta 1
            printf("Código: %s \n", codigo1); // saída do código da Carta 1
            printf("Nome da cidade: %s \n", nome1); // saída do nome da cidade da Carta 1
            printf("População: %i \n", populacao1); // saída da papulação da Carta 1
            printf("Área: %.2fkm² \n", area1); //saída da área da Carta 1
            printf("PIB: R$ %.2f \n", PIB1); // saída do PIB da Carta 1
            printf("Números de pontos turísticos: %i \n", pontos_tur1); //saída do número de pontos turísticos da Carta 1
            printf("Densidade populacional: %.2f habitantes/km² \n", densidade_pop1); // saída da densidade populacional da Carta 1
            printf("PIB per capita: R$ %.2f \n\n", PIB_per_capita1); // saída do PIB per capita da Carta 1


        printf("Dados da Carta 2: \n"); // identificando a Carta 2

            printf("Digite uma letra de A a H para representar um dos oito estados: \n"); // entrada da letra que representa o estado
            scanf(" %c", &estado2);

            printf("Digite o código da carta (A letra do estado seguida de um número de 01 a 04 ex: A01, B03): \n"); // entrada do código da carta
            scanf("%s", codigo2);

            printf("Digite o nome da Cidade: \n"); // entrada do nome da cidade
            scanf("%s", nome2);

            printf("Digite o número de habitante: \n"); // entrada da população
            scanf("%i", &populacao2);

            printf("Digite a área (em km²): \n"); // entrada da área da cidade
            scanf("%f", &area2);

            printf("Digite o PIB da cidade: \n"); // entrada do PIB da cidade
            scanf("%f", &PIB2);

            printf("Digite o número de pontos turísticos: \n"); // entrada do número de pontos turísticos da cidade
            scanf(" %i", &pontos_tur2);

            densidade_pop2 = (float) populacao2 / area2; // cálculo da densidade populacional
            PIB_per_capita2 = (float) PIB2 / populacao2; // cálculo do PIB per capita

        printf(" \n"); // espaçamento

            printf("Carta 2: \n"); // identificando a saída da Carta 2
            printf("Estado: %c \n", estado2); // saída do estado da Carta 2
            printf("Código: %s \n", codigo2); // saída do código da Carta 2
            printf("Nome da cidade: %s \n", nome2); // saída do nome da cidade da Carta 2
            printf("População: %i \n", populacao2); // saída da papulação da Carta 2
            printf("Área: %.2fkm² \n", area2); //saída da área da Carta 2
            printf("PIB: R$ %.2f \n", PIB2); // saída do PIB da Carta 2
            printf("Números de pontos turísticos: %i \n", pontos_tur2); //saída do número de pontos turísticos da Carta 2
            printf("Densidade populacional: %.2f habitantes/km² \n", densidade_pop2); // saída da densidade populacional da Carta 2
            printf("PIB per capita: R$ %.2f \n\n", PIB_per_capita2); // saída do PIB per capita da Carta 2

        return 0;
    }