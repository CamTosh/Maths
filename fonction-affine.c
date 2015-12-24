#include <stdio.h>
#include <stdlib.h>

int main() {
	int a;
	int b;
	int x;
	int f;

	printf("a : ");
	scanf("%d", &a);

	printf("\nx : ");
	scanf("%d", &x);

    	printf("\nb : ");
	scanf("%d", &b);
	
	f = a * x + b;
	printf("%d\n", f);

	return 0;
}
