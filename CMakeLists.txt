cmake_minimum_required(VERSION 3.6)
project(ProblemmingPearls)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c chapter1/bitmap.c chapter1/bitmap.h utils/translate.c utils/translate.h utils/io.c utils/io.h chapter2/shift.c chapter2/shift.h)
add_executable(ProblemmingPearls ${SOURCE_FILES})