#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int a = 10, exit_val = 0;
	char cmd_str[128];

	printf("\n Hello World ... ");
	printf("\n \t value is %d\n", a);

	while (1) {
		sprintf(cmd_str, "echo \"%d,\" >> /tmp/health", a++);
		system (cmd_str);
		sleep(1);
		if (a == 30) {
			system ("rm -rf /tmp/health");
			printf("\n continuing...%d\n",a);
			return;
		}
		printf("\n exiting ...%d\n",a);
#if 0
		scanf("%d\n", &exit_val);
		if (exit_val == 100) {
				printf("\n exiting\n");
		}
#endif
	}

	return;
}
