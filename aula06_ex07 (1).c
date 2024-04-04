#include <stdio.h>

int main()
{
	int i, soma = 0;
	
	for(i = 0; i <= 100; i = i + 2)
	{
		//printf("%d ", i);
		soma = soma + i;
	}
	
	printf("Resposta = %d\n", soma);
	
	return 0;
}

