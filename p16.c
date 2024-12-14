/*Write a program in C that takes two numbers and an arithmetic operator from the user and does
calculation based on the operator.*/


#include <stdio.h>

int main(void)

{
    float a,b;
    char o;
    printf("Enter a and b: ");
    scanf("%f %f", &a,&b);

    printf("Enter the operator (+,-,*,/)\n ");
    scanf(" %c", &o);


    if (o=='+')
        printf("%f and %f is %.3f",a,b, a+b);
    if (o=='-')
        printf("%f and %f is %.3f ",a,b, a-b);
    if (o=='*')
        printf("%f and %f is %.3f",a,b, a*b);
    if (o=='/')
        printf("%f and %f is .%3f",a,b, a/b);






    return 0;
}
