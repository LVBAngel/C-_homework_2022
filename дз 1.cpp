//Для этой задачи мы будем использовать библиотеку cpr для HTTP - запросов.
//библиотека cpr зависит от библиотеки libcurl
//Верхний уровень CMakeLists.txt:

cmake_minimum_required(VERSION 3.14)
project(MyProject VERSION 1.0)

if (WIN32) # Install dlls in the same directory as the executable on Windows
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${ CMAKE_BINARY_DIR })
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${ CMAKE_BINARY_DIR })
endif()

add_subdirectory(deps)
add_subdirectory(src)

//CMakeLists.txt в папке deps :

include(FetchContent)

FetchContent_Declare(
    cpr
    GIT_REPOSITORY https ://github.com/libcpr/cpr.git
GIT_TAG master
)

FetchContent_GetProperties(cpr)
if (NOT cpr_POPULATED)
FetchContent_Populate(cpr)
add_subdirectory(${ cpr_SOURCE_DIR } ${ cpr_BINARY_DIR })
endif()

//CMakeLists.txt в папке src :

add_executable(MyProject main.cpp)
target_link_libraries(MyProject PRIVATE cpr::cpr)

//Содержимое main.cpp может выглядеть следующим образом :

#include <cpr/cpr.h>
#include <iostream>

int main() {
    cpr::Response r = cpr::Get(cpr::Url{ "http://www.httpbin.org/get" });
    std::cout << r.text << std::endl;
    return 0;
}

//Чтобы собрать этот проект, вы можете использовать следующие команды :

mkdir build
cd build
cmake ..
cmake --build .

//После выполнения этих команд мы должны увидеть исполняемый файл MyProject в директории build.Если все настроено правильно, запуск этого файла должен отобразить ответ на ваш GET - запрос.