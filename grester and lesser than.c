#include<stdio.h>
void main()
{
	int a,b;
	a = 16;
	b = 8;
	printf("%d > %d--> %d\n", a,b, a>b);
	printf("%d >= %d--> %d\n", a,b, a>=b);
	printf("%d < %d--> %d\n", a,b, a<b);
	printf("%d <= %d--> %d\n", a,b, a<=b);
    printf("%d == %d--> %d\n", a,b, a==b);
    printf("%d != %d--> %d\n", a,b, a!=b);
}
