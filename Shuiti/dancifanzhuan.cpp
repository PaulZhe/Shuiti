#include <stdio.h>
#include <string.h>
int main()
{
	int i, n, j = 0, k = 0, count = 0;
	char s[256], str[100][100];
	gets(s);
	n = strlen(s);
	for(i = 0; i < n; i++){
		if( s[i] != ' ' ){
			str[j][k] = s[i];
			k++;
		}else{
			count++;
			str[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	str[j][k] = '\0';
	for(i = count; i >= 0; i--){
		printf("%s ", str[i]);
	}
	return 0;
} 
