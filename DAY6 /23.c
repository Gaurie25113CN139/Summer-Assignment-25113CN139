#include <stdio.h>
int main () {
	int num=0, i=0, n=0, temp=0, count=0;
	printf ("enter the no.: ");
	scanf ("%d", &num);
	n=num;
	while (n)
	{
		temp++;
		n = n>>1;
	}
	for (i= 0; i<temp; i++)
	{
		if (((num >> i) & 1)==0)
		{
			count++;
		}
	}
	printf ("no. of bits set to zero: %d\n", count);
	return 0;
}
