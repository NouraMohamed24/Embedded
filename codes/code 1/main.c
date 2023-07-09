#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a ,b;
    printf("Enter two numbers");
    fflush(stdin);fflush(stdout);
    scanf("%d%d", &a,&b);
    printf("product: %d", a*b);
    return 0;
}
