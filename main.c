#include <stdio.h>
#include <stdlib.h>

float bmic(float c, float k){
  c = c/100;
  return k / (c*c);
}

float bmim (float m, float k){
  return k / (m*m);
}

int main(){
  int select;
  float x, y, bmc, bmm;
  do {
  printf("\n-------BMI Calcolatrice-------\n");
  printf("1. in centrimentri e chilogrammi\n");
  printf("2. in metri e chilogrammi\n");
  printf("5. Per Uscire Dalla Programma\n");
  printf("Scegli un opzione");
  scanf("%d", &select);
  switch (select) {
    case 1:
      printf("\nInserisci Altezza in centrimentri\n");
      scanf("%f", &x);
      printf("\nInserisci Peso In KG\n");
      scanf("%f", &y);
      bmc = bmic(x, y);
      if (bmc < 18.5) {
        printf("Sottopeso e \n");
        printf("Il tuo BMI e : %.2f", bmc);
      }
      else if (bmc >= 18.5 && bmc <= 24.9) {
        printf("Normopeso e \n");
        printf("Il tuo BMI e : %.2f", bmc);
      }
      else if (bmc >= 25 && bmc < 30){
        printf("Sovrappeso e \n");
        printf("Il tuo BMI e : %.2f", bmc);
      }
      else if (bmc>=30){
      printf("Obeso e \n");
      printf("Il tuo BMI e : %.2f", bmc);
}
      break;
    case 2:
      printf("\nInserisci Altezza in Metri\n");
      scanf("%f", &x);
      printf("\nInserisci Peso In KG\n");
      scanf("%f", &y);
      bmm = bmim(x, y);
      if (bmm < 18.5) {
        printf("Sottopeso e \n");
        printf("Il tuo BMI e : %.2f", bmm);
      }
      else if (bmm >= 18.5 && bmm <= 24.9) {
        printf("Normopeso e \n");
        printf("Il tuo BMI e : %.2f", bmm);
      }
      else if (bmm >= 25 && bmm < 30){
        printf(" Sovrappeso e \n");
        printf("Il tuo BMI e : %.2f", bmm);
      }
      else if (bmm>=30){
      printf("Obeso e \n");
      printf("Il tuo BMI e : %.2f", bmm);
}
      break;
    default:
      printf("Scegli 1 o 2");
      break;
  }
if (select != 5) {
      printf("\nPremi INVIO per continuare...");
      getchar();
      getchar();
      system("clear"); 
    }
  } while (select != 5);
}
