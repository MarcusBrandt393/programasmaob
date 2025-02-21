//MARCUS BRANDT - Meu primeiro programa em C inicio 17/02/2025
#include <stdio.h>
#include <locale.h>

int main(){
 
    // Declara campo caracteres 
    char carta_a[04];
    char carta_b[04];//= {"1,2,3,4"};
    char estado1[03];//= {"A,B,C,D,E,F,G,H"};
    char estado2[03];//= {"A,B,C,D,E,F,G,H"};
    char codCartaA[04];//= {"A,01,02,03,04,05,06,07,08,09,X"};
    char codCartaB[04];//= {"B,01,02,03,04,05,06,07,08,09,X"};
    char nomecidade1[100];
    char nomecidade2[100]; 
    // Declara campo tipo inteiro 
    int populacaoA,populacaoB,pontosturisticos1,pontosturisticos2; 
    // Declara campo tipo float 
    float area1,area2,pib1,pib2; 
     
    setlocale(LC_ALL,"");

printf("*****Digite as informações da carta 1*****\n");

printf("Digite o numero da carta:"); 
scanf("%s", carta_a); //sem o & na variavel
printf("Digite a letra do Estado:");
scanf("%s", estado1);
printf("Digite o codigo cidade:");
scanf("%s", codCartaA);
printf("Digite o nome da cidade:");
scanf("%s", nomecidade1, setlocale(LC_ALL, "")); //uma forma diferente
printf("Digite a população cidade:");
scanf("%d", &populacaoA);
printf("Digite a area cidade:");
scanf("%f", &area1); // campos numerico
printf("Digite o PIB cidade:");
scanf("%f", &pib1);
printf("Digite o numero de pontos turisticos cidade:");
scanf("%d", &pontosturisticos1);

printf("\n");
printf("*****Digite as informações da carta 2*****\n");

printf("Digite o numero da carta:");
scanf("%s", carta_b);
printf("Digite a letra do Estado:");
scanf("%s", estado2);
printf("Digite o codigo cidade:");
scanf("%s", codCartaB);
printf("Digite o nome da cidade:");
scanf("%s", nomecidade2);
printf("Digite a população cidade:");
scanf("%d", &populacaoB);
printf("Digite a area cidade: ");
scanf("%f", &area2);
printf("Digite o PIB cidade:");
scanf("%f", &pib2);
printf("Digite o numero de pontos turisticos cidade:");
scanf("%d", &pontosturisticos2);

printf("************************************\n");
printf("RESULTADO DAS INFORMÇÕES DIGITADAS\n");
printf("************************************\n");
printf("**INFORMAÇÕES DA CARTA 1**\n");

//printf("\n");

printf("Carta : %s \n",carta_a);
printf("Estado: %s \n",estado1);
printf("Codigo: %s \n",codCartaA);
printf("Cidade: %s \n",nomecidade1);
printf("População: %d \n",populacaoA);
printf("Area: %.2f km² \n",area1);
printf("PIB: %.2f bilhões de reais \n",pib1);
printf("Número de Pontos Turísticos: %d \n",pontosturisticos1);
printf("\n");
printf("**INFORMAÇÕES DA CARTA 2**\n");
printf("\n");
printf("Carta : %s \n",carta_b );
printf("Estado: %s \n",estado2);
printf("Codigo: %s \n",codCartaB);
printf("Cidade: %s \n",nomecidade2);
printf("População : %d \n",populacaoB);
printf("Area:%.2f km² \n",area2);
printf("PIB: %.2f bilhões de reais \n",pib2);
printf("Número de Pontos Turísticos: %d \n",pontosturisticos2);
printf("\n");
printf("\n");

return 0;

}










