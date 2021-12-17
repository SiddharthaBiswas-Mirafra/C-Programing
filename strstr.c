#include<stdio.h>
#include<stdio_ext.h>

char* Mystrstr(const char*,const char*);

int main()
{
	char str1[100],str2[100],*p;
	printf("Enter actual string: ");
	scanf("%[^\n]s",str1);
	printf("Enter sub-string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	p=Mystrstr(str1,str2);
	if(p!=NULL)
		printf("The sub-string has been found at %d \n",(int)(p-str1));
	else
		printf("The character is not found\n");

}
char* Mystrstr(const char* Main,const char* Sub)
{
	int i,j;
	for(i=0;Main[i];i++)
	{
		if(Main[i]==Sub[0])
		{
			for(j=1;Sub[j];j++)
			{
				if(Main[j+i]!=Sub[j])
					break;
			}
			if(Sub[j]=='\0')
				return (char*)Main+i;
		}
	}
	return NULL;
}
