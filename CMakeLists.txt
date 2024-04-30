# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(hello_world_qwerweq)


# zephyr_syscall_include_directories(src)

# zephyr_include_directories(src)

add_subdirectory(src)

# add_subdirectory_ifdef(CONFIG_CUSTOM_CONFIG_EXAMPLE src)