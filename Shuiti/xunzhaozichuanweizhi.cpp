#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char str[100], s[100];
	int m, n, i, j, k, count, flag = 0;
	scanf("%s %s", str, s);
	n = strlen(str);
	m = strlen(s);
	for(i = 0; i < n; i++){
		count = i;
		k = i;
		for(j = 0; j < m; j++){
			if(str[k]!=s[j]) break;
			k++;
			if(j == m-1){
			printf("%d",count+1);
			exit(0);
			}
		} 
	}
	return 0;
} 
