#include <stdio.h>
int main() {
	int a = 0, b = 0;
	printf("Input a:");
	scanf("%d", &a);
	printf("Input b:");
	scanf("%d", &b);
	while (a != b) {
		if (a > b) {
			a = a - b;
		} else {
			b = b - a;
		}
	
	}
	printf("NOD = %d", a);
	return 0;
}
