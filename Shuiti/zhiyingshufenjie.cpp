#include <stdio.h>
#include <math.h>
int prime( int x )
{
	int i, flag;
	flag = 1;
	if ( x == 1 ) flag = 0;
	for( i = 2; i <= sqrt(x); i++ ){	
		if ( x % i == 0 ){
			flag = 0;
			i = x;
		}
	}
	if( flag == 1 ) return 1;
	else return 0;
}
int bigger( int a, int b ){
	int max;
	if(a > b) max = a;
	else max = b;
	return max;
}
int main()
{
	int i, j, n, max;
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		for(j = 1;j <= n; j++){
			if(prime(i) && prime(j)){
				if(i * j == n) max = bigger(i,j);
			}
		}
	}
	printf("%d", max);
	return 0;
}
 
