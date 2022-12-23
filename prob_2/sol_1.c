#include<stdio.h>
int main()
{
    int num,i,suma;
    printf("Numero abundante, perfecto o deficiente");
    do 
    {
        printf("\nIngrese numero:");
        scanf("%d",&num);
    }
    while(num < 2);
    suma=0;
    
    for(i = 1;i < num;i++)
    {
        if(num%i==0)
        {
            suma += i;
        }
    }
    if(suma > num)
        printf("abundante");
    else if(suma == num)
        printf("perfecto");
    else
        printf("deficiente");
    return 0;        
}