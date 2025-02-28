#include <stdio.h>


int main() {

   
char estado1[20], estado2[20];
int populacao1, populacao2, pturis1, pturis2;
float area1, area2;
float pib1, pib2;

//Coleta de dados da primeira cidade.

printf ("Digite o nome do estado:\n");
scanf ("%s", &estado1);

printf ("Digite a população:\n");
scanf ("%d", &populacao1);

printf ("Digite a area:\n");
scanf ("%f", &area1);

printf ("Digite o PIB:\n");
scanf ("%f", &pib1);

printf ("Digite o número de pontos turísticos: \n");
scanf ("%d", &pturis1);

//Declarando as características do primeiro estado na saida.

printf ("O estado é: %s \n", estado1);
printf ("A populção é: %d \n", populacao1);
printf ("A área é de: %.3f KM² \n", area1);
printf ("O PIB é: %.3f \n" , pib1);
printf ("O estado tem: %d pontos turísticos \n", pturis1);



//Coleta de dados do segundo estado.


printf ("Digite o nome do segundo estado:\n");
scanf ("%s", &estado2);

printf ("Digite a população:\n");
scanf ("%d", &populacao2);

printf ("Digite a area:\n");
scanf ("%f", &area2);

printf ("Digite o PIB:\n");
scanf ("%f", &pib2);

printf ("Digite o número de pontos turísticos: \n");
scanf ("%d", &pturis2);


//Declarando as características do segundo estado na saida.


printf ("O estado é: %s \n", estado2);
printf ("A populção é: %d \n", populacao2);
printf ("A área é de: %.3f KM² \n", area2);
printf ("O PIB é: %.3f \n" , pib2);
printf ("O estado tem: %d pontos turísticos \n", pturis2);

    return 0;

}
