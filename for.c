#include <stdio.h>

int main(void)
{
	int i;
	double d, t = 0.0, h;

	for(i = 1; i <= 10; i++)
	{
		printf("数値入力-> ");
		scanf("%lf", &d);
		t += d;
	}

	h = t / 10;

	printf("%lf", h);

	return 0;
}
