#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);
    n = dobro(n);
    printf("%d\n",n);
    return 0 ;
}