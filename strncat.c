#include<stdio.h>
#include<stdio_ext.h>
char *Mystrcat(char *,const char*,size_t);
size_t Mystrlen(const char*);

int main()
{
	char str1[100],str2[100];
	int n;
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	printf("Eter number of byte for copy: ");
	scanf("%d",&n);
	puts("..........Before concatenate.........");
	printf("str1: %s\n",str1);
	Mystrcat(str1,str2,n);
	puts("..........After concatenate.........");
	printf("str1: %s\n",str1);
}

char *Mystrcat(char *dst,const char *src,size_t n)
{
	size_t len=Mystrlen(dst);
	int i;
	for(i=0;i<n && src[i];i++)
		dst[len+i]=src[i];
	dst[len+i]='\0';
	return dst;
}

size_t Mystrlen(const char* p)
{
	int i;
	for(i=0;p[i];i++);
	return --i;
}
