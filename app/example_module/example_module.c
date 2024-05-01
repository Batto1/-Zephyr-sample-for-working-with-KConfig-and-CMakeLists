
#include <stdbool.h>

#include "example_module.h"

#include "zephyr/logging/log.h"

LOG_MODULE_REGISTER(example_module, LOG_LEVEL_DBG);



#if defined(CONFIG_EXAMPLE_MODULE_CONF)
#define EXAMPLE_MODULE_CONF CONFIG_EXAMPLE_MODULE_CONF
#else
#define EXAMPLE_MODULE_CONF false
#endif

#if defined(CONFIG_EXAMPLE_NUMERIC_CONF_1)
#define EXAMPLE_NUMERIC_CONF_1 CONFIG_EXAMPLE_NUMERIC_CONF_1
#else
#define EXAMPLE_NUMERIC_CONF_1 -1
#endif

#if defined(CONFIG_EXAMPLE_NUMERIC_CONF_2)
#define EXAMPLE_NUMERIC_CONF_2 CONFIG_EXAMPLE_NUMERIC_CONF_2
#else
#define EXAMPLE_NUMERIC_CONF_2 -2
#endif

bool Return_CONFIG_EXAMPLE_MODULE_CONF(void)
{
     return EXAMPLE_MODULE_CONF;
}

int Return_CONFIG_EXAMPLE_NUMERIC_CONF_1(void)
{
     return EXAMPLE_NUMERIC_CONF_1;
}

int Return_CONFIG_EXAMPLE_NUMERIC_CONF_2(void)
{
     return EXAMPLE_NUMERIC_CONF_2;
}

int Some_Example_Function(int a_param)
{
     return a_param;
}