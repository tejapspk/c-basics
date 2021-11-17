#include<stdio.h>
void main()
{
	int t=26,g=8;
	t += g; //32, 8
	g -= t; //32,-26
	t *= g; //
	g *= t;
	printf("%d %d", t, g);
}
