#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d", &a, &b, &c);
	printf("%C%C%C", a+95, b+95, c+95);
}
