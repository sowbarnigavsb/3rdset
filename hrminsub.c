#include <stdio.h>

int main(void) {
	int h1,m1,h2,m2,h3,m3,s,a;
	scanf("%d\t%d\n%d\t%d",&h1,&m1,&h2,&m2);
	h3=h1-h2;
	m3=m1-m2;
	s=h3*60;
	if(s<0)
	a=-(s+m3);
	else
	a=-(s-m3);
	printf("difference in time is %d:%d",a/60,a%60);
	// your code goes here
	return 0;
}
