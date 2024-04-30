# SPDX-License-Identifier: Apache-2.0



target_sources(app PRIVATE main.c)

# zephyr_syscall_include_directories(example_module)

# below line makes possible to write << #include "example_module.h" >> in main without specifying the folder location such as << #include "example_module/example_module.h" >>
zephyr_include_directories(example_module)

add_subdirectory(example_module)