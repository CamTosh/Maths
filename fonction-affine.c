#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int x;
	int f;

	printf("a : ");
	scanf("%d", &a);

    printf("\nb : ");
	scanf("%d", &b);

	printf("\nx : ");
	scanf("%d", &x);
	
	f = a * x + b;
	printf("%d\n", f);

	return 0;
}
