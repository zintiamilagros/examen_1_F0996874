#include<stdio.h>
#include<stdbool.h>
int main()
{
  printf("---Numero abundante, perfecto o deficiente--");
  int num, i, sum = 0;
  bool aux = true;
  while (aux) {
    do
    {
      printf("\nIngrese numero positivo menor que 580: ");
      scanf("%d", &num);
      
      if (num > 580) {
        printf("Numero fallido!\n");
      }
      else if (num == 0) {
        aux = false;
        break;
      } 
      else {
        printf("Numero valido!");
      }
    }
    while (num > 580);
    if (!aux) break;
    else {
    
    //suma de divisores
    sum=0;
      for (i = 1; i < num; i++) {
        if (num % i == 0) {
          sum = sum + i;
        }
      }
    
    //comparar
      if (sum > num)
        printf("\nEs abundante\n");
      else if (sum == num)
        printf("\nEs Perfecto\n");
      else
        printf("\nEs deficiente\n");
    }

  }
  printf("\nEso es todo amigos");
  return 0;
}