#include <stdio.h>
#include <string.h>
int main()
{
	int T, i, j, n, flag;
	char str[1000][6], ear[6];
	scanf("%d", &T);
	while(T--){
		flag = 1;
		scanf("%d", &n);
		for(i = 0; i < n; i++)
			scanf("%s", str[i]);
		strcpy(ear, str[0]); 
		for(i = 0; i < 5 && flag; i++){
			flag = 0;
			for(j = 0; j < n-1; j++){
			if( strcmp(ear, str[j+1]) > 0 ) strcpy(ear, str[j+1]); 
			else if( strcmp(ear, str[j+1]) == 0 ) flag = 1;
			}
		} 
		printf("%s\n", ear);
	}
	return 0;
}
