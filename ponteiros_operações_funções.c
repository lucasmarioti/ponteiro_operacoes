#include <stdio.h>

int soma(int *p1, int *p2){
    int result;
    result = *p1 + *p2;
    return result;
}

int sub(int *p1, int *p2){
    int result;
    result = *p1 - *p2;
    return result;
}

int divi(int *p1, int *p2){
    int result;
    result = *p1 / *p2;
    return result;
}

int mult(int *p1, int *p2){
    int result;
    result = *p1 * *p2;
    return result;
}

int main()
{
    int a, b;
    int *p1, *p2;
    
    p1 = &a;
    p2 = &b;
    
    printf("digite um numeros inteiro");
    scanf("%d",p1);
    printf("digite um numeros inteiro");
    scanf("%d",p2);
    
    
    printf("\n soma de valores: %d + %d = %d ",*p1,*p2,(soma (p1,p2)));
    printf("\n subtração de valores: %d - %d = %d", *p1,*p2,(sub (p1,p2)));
    printf("\n divisão de valores: %d / %d = %d",*p1,*p2,(divi (p1,p2)));
    printf("\n multiplicação de valores: %d * %d = %d",*p1,*p2,(mult (p1,p2)));
    

    return 0;
}