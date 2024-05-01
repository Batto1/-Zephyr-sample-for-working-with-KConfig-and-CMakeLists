# SPDX-License-Identifier: Apache-2.0


# targets the src file that is in the same directory as this CMakeLists file.
target_sources(app PRIVATE main.c)


add_subdirectory(example_module)