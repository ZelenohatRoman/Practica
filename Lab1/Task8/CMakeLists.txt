# CMakeList.txt: проект CMake для Lab1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_library(task8_lib.lib STATIC "")
target_sources(task8_lib.lib PRIVATE "../Task8/Task8_func.c")
add_executable(Lab1_Task8 "")
target_sources(Lab1_Task8 PRIVATE "../Task8/Task8_main.c")
target_link_libraries(Lab1_Task8 task8_lib.lib)

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
