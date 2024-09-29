#include<stdio.h>
#include<limits.h>

int main(){
	
	printf("Este eh o tamanho maximo do int: %d\n", INT_MAX);
	printf("Este eh o tamnho minimo do int: %d\n\n", INT_MIN);
	
	printf("Este eh o tamanho maximo do char: %d\n", CHAR_MAX);	
	printf("Este eh o tamnho minimo do char: %d\n\n", CHAR_MIN);
	
	printf("Este eh o tamanho maximo do short: %d\n", SHRT_MAX);
	printf("Este eh o tamnho minimo do short: %d\n\n", SHRT_MIN);
	
	printf("Este eh o tamanho maximo do Long Long: %lld\n", LLONG_MAX);
	printf("Este eh o tamnho minimo do Long Long: %lld\n\n", LLONG_MIN);
	
	printf("Este eh o tamanho maximo do unsigned long long int: %llu\n\n", ULLONG_MAX);
	
	printf("Este eh o tamanho maximo do unsigned int: %u\n\n", UINT_MAX);
	
	
	printf("Este eh o tamanho maximo unsigned long long int: %lu\n\n", ULONG_MAX);
	
	printf("Este eh o tamanho maximo do long int: %ld\n", LONG_MAX);
	printf("Este eh o tamnho minimo do long int: %ld\n", LONG_MIN);
	
	printf("\nOq acontece caso ultrapasse o numero maximo de bits: %d", INT_MAX + 1000);
	
	return 0;
}
