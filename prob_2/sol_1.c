#include<stdio.h>
int main()
{
    printf("---Numero abundante, perfecto o deficiente--");
    int num,i,sum=0;
    
    do
    {
        printf("\nIngrese numero positivo menor que 580:");
        scanf("%d",&num);
        if(num > 580){
            printf("\nNumero fallido!");
        }
        else
            printf("\nNumero valido");
        
    }
    while(num > 580);
        //suma de divisores
        for (i=1; i<num; i++){
            if(num%i==0){
                sum = sum + i;
        }
                
            }
        //comparar 
        if(sum > num)
        printf("\nEs abundante");
        else if(sum == num)
        printf("\nEs Perfecto");
        else
        printf("\nEs deficiente");
    
    return 0;
    
  
}