#include<stdio.h>
#include<stdio_ext.h>
char *Mystrchr(const char*,int);

int main()
{
	char str1[100],*p,ch;
	printf("Enter a string: ");
	scanf("%[^\n]s",str1);
	printf("Enter the searching character or symbol: ");
	__fpurge(stdin);
	scanf("%c",&ch);
	printf("str1: %s\n",str1);
	p=Mystrchr(str1,(int)ch);
	if(p!=NULL)
		printf("The character has been found at %d \n",(int)(p-str1));
	else
		printf("The character is not found\n");


}

char *Mystrchr(const char *src,int ch)
{
	int i;
	for(i=0;src[i];i++)
	{
		if(src[i]==ch)
			return (char*)src+i;
	}
	return NULL;
}

