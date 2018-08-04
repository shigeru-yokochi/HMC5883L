#include <stdio.h>
#include <unistd.h>

extern int HMC5883L_init(void);
extern int HMC5883L_GetDirection(void);

/**************************************
*	sample
*************************************/
int main(int argc,	char **argv)
{
	int i;

	if (HMC5883L_init() == 1) {
		printf("*** HMC5883L_init() error.\n");
		return -1;
	}


	for (i = 0; i < 100; i++) {
		printf("%d\n",HMC5883L_GetDirection());
		usleep(1000 * 100);
	}

	return 0;
}