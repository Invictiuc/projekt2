cmake_minimum_required(VERSION 3.14)

project(projekcikTP2 VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_executable(ToryToryProjekt 
    ToryToryProjekt.cpp 
    ObszarTestow.cpp
)

# Dodaj również źródła logiki gry do testów
add_executable(mytest 
    test.cpp 
    ObszarTestow.cpp
)

add_test(NAME BasicTest COMMAND mytest)
