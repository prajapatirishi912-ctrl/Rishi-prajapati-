#include<stdio.h>
main()
{
	int a, b;
	
	printf("\n Enter the value of a and b");
	scanf("\%d %d" ,&a ,&b);
	
	printf("\n addition=%d" ,a+b);
	printf("\n sub=%d" ,a-b);
	printf("\n mul=%d" ,a*b);
	printf("\n div=%.2f" ,(float)a/b);//type conversion
}
