#include <stdio.h>
#include <stdlib.h>
int main()
{
    char opera;
    float num1,num2,res,div;

    printf("Digite o primeiro numero\n");
    scanf("%f",&num1);
    printf("Digite o segundo numero\n");
    scanf("%f",&num2);
    printf("Escolha a operacao:\n+\n-\n*\n/\n");
    scanf(" %c",&opera);

    switch(opera)
    {
        case '+': res=num1+num2;
        printf("A soma deles e' %2.f",res);
        break;
        case '-': res=num1-num2;
        printf("A subtracao deles e' %2.f ",res);
        break;
        case '*': res=num1*num2;
        printf("A multiplicacao deles e' %2.f",res);
        break;

        case '/': div=num1/num2;
        printf("A divisao deles e' %2.f",div);
        break;

        default:
        printf("Operacao invalida");
        break;
    }
return 0;
}
