#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
#include <stdio.h>

int main(){

int populacao1, populacao2, area1, area2, turisticos1, turisticos2; 
char cidade1[50], cidade2[50], estado1, estado2, codigo1[4], codigo2[4];
double PIB1, PIB2;

printf("Atribua uma letra para o estado 1 (A a H):\n"); //atribuir uma letra ao estado de "A a H" (exemplo: São Paulo = A).
scanf(" %c", &estado1);

printf("Atribua um codigo para a carta 1(exemplo: A01):\n"); // atribuir um codigo com a letra + numero (ex: A01).
scanf("%3s", codigo1); // limita a entrada a 3 caracteres

printf("Digite o nome da cidade 1:\n");
scanf(" %[^\n]", cidade1); // Captura espaços no nome da cidade1

printf("Qual a população da Cidade 1?\n");
scanf(" %d", &populacao1); // Captura a quantidade populacional da cidade

printf("Qual a area total da cidade 1 (em km2)\n");
scanf(" %d", &area1); //captura a area total da cidade

printf("Qual o PIB da Cidade 1?\n");
scanf("%lf", &PIB1); //captura o PIB total da cidade

printf("Quantos pontos turisticos tem a Cidade 1?\n");
scanf(" %i", &turisticos1); //captura a quantidade de pontos turisticos

printf("Atribua uma letra para o estado 2 (A a H):\n");
scanf(" %c", &estado2);

printf("Atribua um codigo para a carta 2(exemplo: A01):\n");
scanf("%3s", codigo2); 

printf("Digite o nome da cidade 2:\n");
scanf(" %[^\n]", cidade2);

printf("Qual a população da Cidade 2?\n");
scanf(" %d", &populacao2);

printf("Qual a area total da cidade 2 (em km2)\n");
scanf(" %d", &area2);

printf("Qual o PIB da Cidade 2?\n");
scanf("%lf", &PIB2);

printf("Quantos pontos turisticos tem a Cidade 2?\n");
scanf(" %i", &turisticos2);

printf("\n--- Dados Registrados ---\n");
printf("\n--- CARTA 01 ---\n");
printf("Letra do Estado: %c\n", estado1);
printf("codigo da Carta: %s\n", codigo1);
printf("Nome da cidade: %s\n", cidade1);
printf("População Total: %d\n", populacao1);
printf("Area Total (em km2): %d\n", area1);
printf("PIB total: %.2f\n", PIB1);
printf("Total de Pontos Turisticos: %d\n", turisticos1);

printf("\n--- Dados Registrados ---\n");
printf("\n--- CARTA 02 ---\n");
printf("Letra do Estado: %c\n", estado2);
printf("codigo da Carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", cidade2);
printf("População Total: %d\n", populacao2);
printf("Area Total (em km2): %d\n", area2);
printf("PIB total: %.2f\n", PIB2);
printf("Total de Pontos Turisticos: %d\n", turisticos2);

return 0;

} 
