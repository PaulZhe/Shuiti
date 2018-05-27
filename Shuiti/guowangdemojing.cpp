#include <stdio.h>
#include <string.h>
int main(void)
{
	int T, n, m, i, j;
	char str[100], a[100], b[100];
	scanf("%d",&T);
	while(T--){
		scanf("%s", str);
		n = strlen(str);
		while(1){
			j = 0;
			memset(a, '0', sizeof(char));
			memset(b, '0', sizeof(char));
			if(n % 2!=0){
			printf("%d\n", n);
			break;
			} 
			n /= 2;
			for(i = 0; i < n; i++)
			a[i] = str[i];
			a[i] = '\0';
			for(i = 2*n-1; i >= n; i--){
				b[j] = str[i];
				j++;
			}
			b[j] = '\0';
			if( strcmp(a,b) != 0 ){
				printf("%d\n", 2*n);
				break;
			}
		}	
	}
	return 0;
} 
