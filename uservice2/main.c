#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int a = 10, exit_val = 0;
	char cmd_str[128];

	printf("\n Hello World ... \n");
	printf("\n \t value is %d\n", a);

	while (1) {
		sleep(5);
		if (a == 10) {
			printf("\n exiting ...%d\n",(a/0));
			return;
		}
		printf("\n continuing ...%d\n",a);
		fflush(stdout);
        a++;
#if 0
		scanf("%d\n", &exit_val);
		if (exit_val == 100) {
				printf("\n exiting\n");
		}
#endif
	}

	return;
}
