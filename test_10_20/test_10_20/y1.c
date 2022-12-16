#define _CRT_SECURE_NO_WARNINGS 1
int max(int x, int y)
{
	int z;
	z = x > y ? x : y;
	return(z);
}



#include<stdio.h>
int main()
{
	int a, b, c;
	printf("please enter two numbers:");
	scanf("%d,%d",&a,&b);
	c = max(a, b);
	printf("max is%d\n", c);






	return 0;
}
