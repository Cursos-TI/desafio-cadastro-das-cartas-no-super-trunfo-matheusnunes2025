#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int carta;
    char estado;
    char codigo_da_carta[3];
    char nome_da_cidade[38];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Número da Carta: ");
    scanf("%d\n", &carta);

    printf("Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    printf("Estado: ");
    scanf("%d\n", &estado);

    print("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)");
    printf("Código da carta: ");
    scanf("%d\n", &estado);

    print("Nome da cidade: ");
    scanf("%s\n", &nome_da_cidade);

    printf("O número de habitantes da cidade.");
    print("População: ");
    scanf("%d\n", &populacao);

    print("Área em km²: ");
    scanf("%d\n", &area);

    print("PIB: ");
    scanf("%f\n", &pib);

    printf("A quantidade de pontos turísticos na cidade.");
    printf("Número de Pontos Turísticos: ");
    scanf("%d\n", &numero_de_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
