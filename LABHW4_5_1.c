#include <stdio.h>
int get_cycle_number (int n);
int main(void)
{
	int input;

	printf("Enter a number: ");
	scanf("%d", &input);
		
	printf("\n길이는 %d\n", get_cycle_number(input));
}
int get_cycle_number (int n)
{
	int count = 1;

	printf(" %d", n);

	while (n > 1) {
		if (n % 2 == 0) //짝수이면
			n = n / 2;
		else 
			n = n * 3 + 1;
		printf(" %d", n);
		count++;
	}
	return count;
}