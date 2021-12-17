#include<stdio.h>
#include<stdio_ext.h>
char *Mystrcpy(char *,const char*);

int main()
{
	char str1[100],str2[100];
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	puts("..........Before string copy.........");
	printf("str1: %s\n",str1);
	Mystrcpy(str1,str2);
	puts("..........After string copy.........");
	printf("str1: %s\n",str1);
}

char *Mystrcpy(char *dst,const char *src)
{
	int i;
	for(i=0;src[i];i++)
		dst[i]=src[i];
	dst[i]='\0';
	return dst;
}

