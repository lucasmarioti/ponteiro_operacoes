#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;
    
    p1 = &a;
    p2 = &b;
    
    printf("digite um numeros inteiro\n");
    scanf("%d",&a);
    printf("digite um numeros inteiro\n");
    scanf("%d",&b);
    
    
    printf("\n soma de valores: %d+ %d = %d ",*p1,*p2,(*p1 + *p2));
    printf("\n subtração de valores: %d - %d = %d",*p1,*p2,(*p1 - *p2) );
    printf("\n divisão de valores: %d / %d = %d",*p1,*p2,(*p1 / *p2));
    printf("\n multiplicação de valores: %d * %d = %d",*p1,*p2,(*p1 * *p2));
    

    return 0;
}