#include<stdio.h>

int main(void) {
	long long int num1, num2;
	
	scanf("%lld %lld", &num1, &num2);
	printf("%lld\n", num1 + num2);
	printf("%lld\n", num1 - num2);
	printf("%lld\n", num1 * num2);
	printf("%lld\n", num1 / num2);
	printf("%lld\n", num1 % num2);
	printf("%.2f\n", num1 / num2);
	
	return 0;
}
