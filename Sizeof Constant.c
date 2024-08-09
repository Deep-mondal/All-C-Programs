#include<stdio.h>
int main()
{
	printf("Size of int constant is %d\n",sizeof(1254685));
	printf("Size of double constant is %d\n",sizeof(0.357));
	printf("Size of float constant is %d\n",sizeof(0.357f));
	return 0;
}
/*
Any fractional constant is treated as double type constant.
So, 1.8 is a double type constant and it requires 8 bytes of
memory space.
But 1.8f is a float type constant and it requires 4 bytes of
memory space.
*/
