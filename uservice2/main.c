#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "log4c.h"

int main()
{
	int a = 10, exit_val = 0;
	char cmd_str[128];
	log4c_category_t* mycat = NULL;


	log4c_init();
    mycat = log4c_category_get("manas.usrv2");

	log4c_category_log(mycat, LOG4C_PRIORITY_DEBUG, "Hello World ... \n");
	log4c_category_log(mycat, LOG4C_PRIORITY_DEBUG, "value is %d\n", a);

	while (1) {
		sleep(5);
		if (a == 10) {
	        log4c_category_log(mycat, LOG4C_PRIORITY_ERROR, "exiting ...%d\n",a);
			return;
		}
		log4c_category_log(mycat, LOG4C_PRIORITY_WARNING, "continuing ...%d\n",a);
		fflush(stdout);
        a++;
#if 0
		scanf("%d\n", &exit_val);
		if (exit_val == 100) {
				printf("\n exiting\n");
		}
#endif
	}
    if ( log4c_fini()){
        printf("log4c_fini() failed");
    }

	return;
}
