/**
 * @brief  
 * @author 
 * @date   
*/



#ifndef EXAMPLE_MODULE_H
#define EXAMPLE_MODULE_H

#ifdef __cplusplus
extern "C" {
#endif


#include <stdbool.h>
#include <zephyr/kernel.h>

bool Return_CONFIG_EXAMPLE_MODULE_CONF(void);
int Return_CONFIG_EXAMPLE_NUMERIC_CONF_1(void);
int Return_CONFIG_EXAMPLE_NUMERIC_CONF_2(void);
int Some_Example_Function(int a_param);




#ifdef __cplusplus
}
#endif

#endif // END: EXAMPLE_MODULE_H
