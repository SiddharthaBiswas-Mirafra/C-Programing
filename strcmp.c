#include<stdio.h>
#include<stdio_ext.h>
int Mystrcmp(const char *,const char*);

int main()
{
	char str1[100],str2[100];
	int res;
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	res=Mystrcmp(str1,str2);
	if(res==0)
		puts("Both strings are same....");
	else
		puts("Both strings are different.");

}
int Mystrcmp(const char *dst,const char *src)
{
	int i;
	for(i=0;dst[i]|| src[i];i++)
	{
		if(dst[i]!=src[i])
			return dst[i]-src[i];
	}
	return 0;
}

