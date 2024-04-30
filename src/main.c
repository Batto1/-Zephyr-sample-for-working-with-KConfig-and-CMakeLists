/*
 * https://github.com/zephyrproject-rtos/example-application/tree/94bd8c7413489e3e77f5cf2898ff25bf933dae13
 */

#include <stdio.h>
#include "example_module.h"

int main(void)
{
	printk("Hello World! %s\n", CONFIG_BOARD);

	printk("%d %d %d \n", Return_CONFIG_EXAMPLE_MODULE_CONF(), Return_CONFIG_EXAMPLE_NUMERIC_CONF_1(), Return_CONFIG_EXAMPLE_NUMERIC_CONF_2());


	return 0;
}
