#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float a ,b;
    printf("Enter two numbers");
    fflush(stdin);fflush(stdout);
    scanf("%f%f", &a,&b);
    printf("product: %f", a*b);
    return 0;
}
