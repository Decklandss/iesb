int potencia(int n, int m)
{
    int i = 1 , num ;
    num = m ;
    if ( n == 0 )
    {
        num = 1 ;
    }
    while( i < n )
    {
        num = num*m ;
        i++;
    }
    return num ;
}

int main()
{
    int base,expoente,resu;
    printf("Digite a base\n");
    scanf("%d",&base);
    printf("Digite o expoente\n");
    scanf("%d",&expoente);
    resu = potencia(base,expoente);
    printf("%d elevado a %d = %d",base,expoente,resu);
    return 0 ;
}
