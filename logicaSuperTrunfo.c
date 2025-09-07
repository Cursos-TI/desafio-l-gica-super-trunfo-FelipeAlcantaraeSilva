#include <stdio.h> // Inclusão de biblioteca;
#include <stdlib.h> // Inclusão de biblioteca;
#include <time.h> // Inclusão de biblioteca;

int main(){ // Declaração de início;

char estado1[3], codigodacarta1[3], nomedacidade1[20], estado2[3], codigodacarta2[3], nomedacidade2[20]; // Declaração variáveis "char";
int pontosturisticos1, pontosturisticos2, populacao1, populacao2, comparacao; // Declaração variáveis "int";
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

printf("\n*** Escolha um atributo para comparação: ***\n \n"); // Exibe na tela o texto;
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &comparacao);

switch (comparacao)
{
case 1: // Caso o Jogador escolha a opção 1, o código segue.
    if(populacao1 > populacao2){ // Se a população 1 for maior que a população 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: População \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %i e %i \n", populacao1, populacao2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 1 \n"); // Exibe a carta vencedora.
    
    }else if (populacao1 < populacao2){ // Se a população 1 for menor que a população 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: População \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %i e %i \n", populacao1, populacao2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 2 \n"); // Exibe a carta vencedora.
    
    }else{ // Se a população for igual nas duas cartas, o código segue.
    printf("Empate!\n"); // Exibe o empate.
    }break; // Finaliza a sequência.

case 2: // Caso o Jogador escolha a opção 2, o código segue.
    if(area1 > area2){ // Se a área 1 for maior que a área 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Área \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", area1, area2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 1 \n"); // Exibe a carta vencedora.
    
    }else if (area1 < area2){ // Se a área 1 for menor que a área 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Área \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", area1, area2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 2 \n"); // Exibe a carta vencedora.
    
    }else{ // Se a área for igual nas duas cartas, o código segue.
    printf("Empate!\n"); // Exibe o empate.
    }break; // Finaliza a sequência.

case 3: // Caso o Jogador escolha a opção 3, o código segue.
    if(pib1 > pib2){ // Se o PIB 1 for maior que o PIB 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: PIB \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", pib1, pib2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 1 \n"); // Exibe a carta vencedora.
    
    }else if (pib1 < pib2){ // Se o PIB 1 for menor que o PIB 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: PIB \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", pib1, pib2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 2 \n"); // Exibe a carta vencedora.
    
    }else{ // Se o PIB for igual nas duas cartas, o código segue.
    printf("Empate!\n"); // Exibe o empate.
    }break; // Finaliza a sequência.

case 4: // Caso o Jogador escolha a opção 4, o código segue.
    if(pontosturisticos1 > pontosturisticos2){ // Se o número de pontos turísticos 1 for maior que o número de pontos turísticos 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Número de pontos turísticos \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %i e %i \n", pontosturisticos1, pontosturisticos2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 1 \n"); // Exibe a carta vencedora.
    
    }else if (pontosturisticos1 < pontosturisticos2){ // Se o número de pontos turísticos 1 for menor que o número de pontos turísticos 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Número de pontos turísticos \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %i e %i \n", pontosturisticos1, pontosturisticos2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 2 \n"); // Exibe a carta vencedora.
    
    }else{ // Se o número de pontos turísticos for igual nas duas cartas, o código segue.
    printf("Empate!\n"); // Exibe o empate.
    }break; // Finaliza a sequência.

case 5: // Caso o Jogador escolha a opção 5, o código segue.
    if(densidadepopulacional1 < densidadepopulacional2){ // Se a densidade demográfica 1 for menor que a densidade demográfica 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Densidade demográfica \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", densidadepopulacional1, densidadepopulacional2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 1 \n"); // Exibe a carta vencedora.
    
    }else if (densidadepopulacional1 > densidadepopulacional2){ // Se a densidade demográfica 1 for maior que a densidade demográfica 2, o código segue.
    printf("Cidades comparadas: %s e %s \n", nomedacidade1, nomedacidade2); // Exibe os nomes das cidades comparadas.
    printf("Atributo de comparação: Densidade demográfica \n"); // Exibe o atributo de comparação.
    printf("Valores comparados: %.0f e %.0f \n", densidadepopulacional1, densidadepopulacional2); // Exibe os valores dos atributos comparados.
    printf("Carta vencedora: Carta 2 \n"); // Exibe a carta vencedora.
    
    }else{ // Se a densidade demográfica for igual nas duas cartas, o código segue.
    printf("Empate!\n"); // Exibe o empate.
    }break; // Finaliza a sequência.

default: // Caso as expressões acima forem negativas, segue o código.
    printf("Opção incorreta. Tente novamente.\n"); // Exibe a mensagem na tela.
    break; // Finaliza a sequência.
}

return 0; // Declaração de fim com sucesso e sem erros.

}
