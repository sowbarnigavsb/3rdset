#include<stdio.h>
int main()
{
	char a;
	scanf("%s",&a);
	if((a>=65&&a<=90)||(a>=97&&a<=122))
	printf("it is character");
	else
	printf("it is numeric");
}
