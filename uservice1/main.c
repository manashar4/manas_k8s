#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("\n Hello World ... ");
	int a = 10, exit_val = 0;

	printf("\n \t value is %d\n", a);

	while (1) {
		sleep(5);
		printf("\n exiting ...\n");
#if 0
		scanf("%d\n", &exit_val);
		if (exit_val == 100) {
				printf("\n exiting\n");
		}
#endif
	}

	return;
}
