cmake_minimum_required(VERSION 3.0.0)
project(BinaryTree VERSION 0.1.0)

# стандарт языка
set (CMAKE_CXX_STANDARD 17)

# поиск всех заголовочных файлов (*.h)
MACRO(HEADER_DIRECTORIES return_list)
    FILE(GLOB_RECURSE new_list *.h)
    SET(dir_list "")
    FOREACH(file_path ${new_list})
        GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
        SET(dir_list ${dir_list} ${dir_path})
    ENDFOREACH()
    LIST(REMOVE_DUPLICATES dir_list)
    SET(${return_list} ${dir_list})
ENDMACRO()

# добавление всех заголовочных файлов
SET(list "")
HEADER_DIRECTORIES(list)
foreach(my_path ${list})
    include_directories(${my_path})
endforeach()

# определение всех cpp файлов в папке src
file(GLOB_RECURSE
        MY_CPP_FILES src/*.cpp
)

add_executable(${PROJECT_NAME} ${MY_CPP_FILES})