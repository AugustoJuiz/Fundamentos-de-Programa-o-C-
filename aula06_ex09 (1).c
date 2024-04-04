#include <stdio.h>

int main()
{
	int i, n; 
	long long int fatorial = 1;
	
	printf("Informe o valor de N: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		fatorial = fatorial * i;
	}

	printf("Resposta = %lld\n", fatorial);

	return 0;
}

