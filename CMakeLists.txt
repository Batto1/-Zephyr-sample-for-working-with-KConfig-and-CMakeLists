# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(working_with_kconfig_and_cmakelists_with_nested_files)




# add_subdirectory(app)

add_subdirectory_ifdef(CONFIG_CUSTOM_CONFIG_EXAMPLE app)