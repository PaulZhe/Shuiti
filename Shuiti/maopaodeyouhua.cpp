#include <stdio.h>
int main()
{
	int i, j, t, flag = 1, count, icount = 7;
	int a[8] = {0, 2, 1, 5, 4, 6, 3, 7};
	for(i = 0; i < 7 && flag; i++){
		flag = 0;
		for(j = 0; j < icount; j++){
			if(a[j] > a[j+1]){
			t = a[j];
			a[j] = a[j + 1];
			a[j + 1] = t;
			flag = 1;
			count = j + 1;
			}
		}
		icount = count;	
	}
	for(i = 0; i < 8; i++)
		printf("%3d", a[i]);
} 
