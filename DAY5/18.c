#include <stdio.h>
int main() {
	int n, temp, rem, sum = 0, fact, i;

	printf("enter a no.: ");
	scanf("%d", &n);
	temp=n;

	while (temp>0) {
		rem = temp%10;
		fact=1;
		i=1;

		while (i <= rem) {
			fact*=i;
			i++;
		}
		sum += fact;
		temp/=10;   
	}
	if (sum==n) {
		printf("it is a strong number");
	} else {
		printf("it is not a strong number");
	}
	return 0;
}
