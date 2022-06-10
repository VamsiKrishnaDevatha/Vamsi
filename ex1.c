#include<stdio.h>

int main()
{
	int add(int,int);
	int a = 10,b=20;
	int c = add(a,b);
	printf("%d",c);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
