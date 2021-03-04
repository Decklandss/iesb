int par(int i);

int main()
{
    int i;
    
    printf("Insira um numero inteiro: ");
    scanf("%d", &i);
    
    par(i);  
}

int par(int i)
{
		int n;
	
    if(i >= 0)
    {
    	printf("Numeros pares: ");
        for(n=0; n <= i; n++)
        {
        	if(n % 2 == 0)
        	printf("\t %d", n);
		}
    }    
}