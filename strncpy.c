#include<stdio.h>
#include<stdio_ext.h>
char *Mystrncpy(char *,const char*,int);

int main()
{
	char str1[100],str2[100];
	int n;
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	printf("Enter how many byte want copy: ");
	scanf("%d",&n);
	puts("..........Before string copy.........");
	printf("str1: %s\n",str1);
	Mystrncpy(str1,str2,n);
	puts("..........After string copy.........");
	printf("str1: %s\n",str1);
}

char *Mystrncpy(char *dst,const char *src,int n)
{
	size_t i;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dst[i] = src[i];
	for ( ; i < n; i++)
		dst[i] = '\0';
	return dst;
}
