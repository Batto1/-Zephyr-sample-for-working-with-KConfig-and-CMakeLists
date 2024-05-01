



if(CONFIG_EXAMPLE_MODULE)
    target_sources(app PRIVATE example_module.c)
	target_include_directories(app PUBLIC ../example_module)


    # zephyr_syscall_include_directories(example_module)

    # line below makes possible to include the header files as << #include "example_module.h" >> in source files without specifying the folder location such as << #include "example_module/example_module.h" >>
    zephyr_include_directories(../example_module)
endif()
