
#include <stdio.h>

int main() {
	int a, b, c;

	printf("Enter 3 numbers \n");
	scanf_s("%d %d %d", &a, &b, &c);
	int razn = b - a;
	printf("dif= %d", razn);
	return 0;
}
