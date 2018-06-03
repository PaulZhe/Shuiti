#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[500];
	int i,j,k,n,x,flag;
	while(!feof(stdin))
	{
		char b[40][40];
		char c[20];
		gets(a);
		n=0;
		flag=1;
		x=strlen(a);
		for(i=0;i<x;i++){
			if(  !((a[i]<='Z'&&a[i]>='A')||(a[i]<='z'&&a[i]>='a')  ))
			a[i]=' '; 
		}
		for(i=0;i<x;i++){ 
			if(a[i]<='Z'&&a[i]>='A')
			a[i]+=32;
		}
		for(i=0;i<x;i++){
		if(flag==1&&a[i]!=' '){
			n++;
			if(n>1)
			b[n-2][j]='\0';
			j=0;
		}
		if(a[i]!=' '){
			b[n-1][j]=a[i];
			j++;
			flag=0;
		}
		if(a[i]==' ')
		flag=1;
		}
		b[n-1][j]='\0';	
		for(i=0;i<n;i++){
			k=i;
			for(j=i+1;j<n;j++){
				if(strcmp(b[k],b[j])>0)
				k=j;
			}
			if(k!=i){
				strcpy(c,b[i]);
				strcpy(b[i],b[k]);
				strcpy(b[k],c);	
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(strcmp(b[i],b[i+1])==0)
			{
				for(j=i;j<n-1;j++)
				{
					strcpy(b[j],b[j+1]);
				}
				n--;
				i--;
			}
		}
		for(i=0;i<n;i++)
		{
			if(i<n-1)
			printf("%s ",b[i]);
			else
			printf("%s\n",b[i]);
		}
	}
}
