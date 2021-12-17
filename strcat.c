#include<stdio.h>
#include<stdio_ext.h>
char *Mystrcat(char *,const char*);
size_t Mystrlen(const char*);

int main()
{
	char str1[100],str2[100];
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	puts("..........Before concatenate.........");
	printf("str1: %s\n",str1);
	Mystrcat(str1,str2);
	puts("..........After concatenate.........");
	printf("str1: %s\n",str1);
}

char *Mystrcat(char *dst,const char *src)
{
	size_t len=Mystrlen(dst);
	int i;
	for(i=0;src[i];i++)
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
