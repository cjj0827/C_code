#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int* pa, int* pb)
{
	int c = *pa;
	   *pa = *pb;
	   *pb = c;

}



int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	  printf("����ǰ��a=%d b=%d", a, b);
         change(&a, &b);
	  printf("������a=%d b=%d",a, b);

	return 0;
}