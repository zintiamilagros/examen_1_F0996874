#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("---Numero abundante, perfecto o deficiente--");
    {
        printf("\nIngrese numero positivo menor que 580:");
        scanf("%d",&num);
        
        if(num < 580)
        printf("Numero valido!");
        else 
        printf("Numero erroneo, vuelva a ingresar numero");

        for (i=1; i<num; i++){
            if(num%i==0){
                sum = sum + i;
                
            }
        }
        
        if(sum > num)
            printf("\nEs abundante");
        else if(sum == num)
            printf("\nEs Perfecto");
        else
            printf("\nEs deficiente");
        return 0;           
    }    
    
  
}