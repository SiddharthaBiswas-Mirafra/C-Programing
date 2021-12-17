#include<stdio.h>
#include<stdio_ext.h>
int Mystrcmp(const char *,const char*,size_t);

int main()
{
	char str1[100],str2[100];
	int res,n;
	printf("Enter 1st string: ");
	scanf("%[^\n]s",str1);
	printf("Enter 2nd string: ");
	__fpurge(stdin);
	scanf("%[^\n]s",str2);
	printf("Enter how many bytes need to compare: ");
	scanf("%d",&n);
	res=Mystrcmp(str1,str2,n);
	if(res==0)
		puts("Both strings are same....");
	else
		puts("Both strings are different.");

}
int Mystrcmp(const char *dst,const char *src,size_t n)
{
	int i;
	for(i=0;(i<n) && (dst[i]|| src[i]);i++)
	{
		if(dst[i]!=src[i])
			return dst[i]-src[i];
	}
	return 0;
}

