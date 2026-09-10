#include<stdio.h>
main()
{
	int a=10,b=3,rem,m=10;
	rem=a%b;
	printf("\n rem=%d" ,rem);
	//m++;// incre by 1
	//printf("\n m=%d" ,m++);//post incre//assign value first then value
	pritnf("\n m=%d" ,++m);//preinrment//first incre then assgin the value
}
