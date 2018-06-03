#include <stdio.h>
int main()
{
	long int n;
	int m;
	while( scanf("%ld%d", &n, &m) != EOF ){
		printf("%d\n", n / m);
	}
	return 0;
} 
