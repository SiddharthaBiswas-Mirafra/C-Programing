#include<stdio.h>
#include<stdio_ext.h>
size_t Mystrlen(const char*);

int main()
{
	char str1[100];
	printf("Enter a string: ");
	scanf("%[^\n]s",str1);
	printf("The string length is: %lu\n",Mystrlen(str1));
}


size_t Mystrlen(const char* p)
{
	int i;
	for(i=0;p[i];i++);
	return --i;
}
