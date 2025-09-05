#include <stdio.h> // Inclusão de biblioteca;

int main(){ // Declaração de início;

char estado1[3], codigodacarta1[3], nomedacidade1[20], estado2[3], codigodacarta2[3], nomedacidade2[20]; // Declaração variáveis "char";
int pontosturisticos1, pontosturisticos2, populacao1, populacao2; // Declaração variáveis "int";
float area1, densidadepopulacional1, area2, densidadepopulacional2, pib1, percapita1, pib2, percapita2; // Declaração variáveis "float";

printf("Para a CARTA 1: \n \n"); // Exibe na tela o texto;

printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf("%s", &estado1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta1); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%i", &populacao1); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area1); // Lê e armazena os dados de entrada do usuário;
densidadepopulacional1=populacao1/area1; // "Densidade Populacional"; i.e., População / Área;

printf("Digite o PIB (em reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib1); // Lê e armazena os dados de entrada do usuário;
percapita1=pib1/populacao1; // "PIB per Capita"; i.e., PIB / População;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%i", &pontosturisticos1); // Lê e armazena os dados de entrada do usuário;

printf("\nPara a CARTA 2:\n\n"); // Exibe na tela o texto;
                                                                                        
printf("Digite o Estado (uma letra de 'A' a 'H' - representando um dos oito estados): \n"); // Exibe na tela o texto;
scanf("%s", &estado2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o código da carta (a letra do estado seguida de um número de 01 a 04 - ex: A01, B03): \n"); // Exibe na tela o texto;
scanf("%s", &codigodacarta2); // Lê e armazena os dados de entrada do usuário;

printf("Digite o nome da Cidade: \n"); // Exibe na tela o texto;
scanf("%s", &nomedacidade2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a população: \n"); // Exibe na tela o texto;
scanf("%i", &populacao2); // Lê e armazena os dados de entrada do usuário;

printf("Digite a área (em km²): \n"); // Exibe na tela o texto;
scanf("%f", &area2); // Lê e armazena os dados de entrada do usuário;
densidadepopulacional2=populacao2/area2; // "Densidade Populacional"; i.e., População / Área;

printf("Digite o PIB (em reais): \n"); // Exibe na tela o texto;
scanf("%f", &pib2); // Lê e armazena os dados de entrada do usuário;
percapita2=pib2/populacao2; // "PIB per Capita"; i.e., PIB / População;

printf("Digite o número de pontos turísticos: \n"); // Exibe na tela o texto;
scanf("%i", &pontosturisticos2); // Lê e armazena os dados de entrada do usuário;

printf("\nComparação de cartas (Atributo: Área): \n \n"); // Exibe na tela o texto;

printf("Carta 1 - %s (%s): %.0f \n", nomedacidade1, estado1, area1); //Exibe na tela o texto juntamente com o resultado das variáveis;
printf("Carta 2 - %s (%s): %.0f \n", nomedacidade2, estado2, area2); //Exibe na tela o texto juntamente com o resultado das variáveis;
    if(area1 > area2){ // Se área 1 for maior que área 2, imprime próxima linha;
    printf("Resultado: Carta 1 (%s) venceu! \n", nomedacidade1); //Exibe na tela o texto juntamente com o resultado da variável em caso positivo;
    }else{ // Se a área 1 for menor que a área 2, imprime próxima linha;
    printf("Resultado: Carta 2 (%s) venceu! \n", nomedacidade2); //Exibe na tela o texto juntamente com o resultado da variável em caso negativo;
    }

return 0; // Declaração de fim com sucesso e sem erros.

}
