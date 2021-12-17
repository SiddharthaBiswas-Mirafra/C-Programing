#include<stdio.h>
#include<stdio_ext.h>
char *Mystrrchr(const char*,int);
size_t Mystrlen(const char*);

int main()
{
	char str1[100],*p,ch;
	printf("Enter a string: ");
	scanf("%[^\n]s",str1);
	printf("Enter the searching character or symbol: ");
	__fpurge(stdin);
	scanf("%c",&ch);
	printf("str1: %s\n",str1);
	p=Mystrrchr(str1,(int)ch);
	if(p!=NULL)
		printf("The character has been found at %d \n",(int)(p-str1));
	else
		printf("The character is not found\n");


}

char *Mystrrchr(const char *src,int ch)
{
	int i;
	for(i=Mystrlen(src)-1;i>=0;i--)
	{
		if(src[i]==ch)
			return (char*)src+i;
	}
	return NULL;
}

size_t Mystrlen(const char* p)
{
	int i;
	for(i=0;p[i];i++);
	return --i;
}
