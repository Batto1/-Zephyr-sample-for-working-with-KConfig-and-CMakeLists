

if(CONFIG_EXAMPLE_MODULE)
    target_sources(app PRIVATE example_module.c)
	target_include_directories(app PUBLIC example_module)
endif()
