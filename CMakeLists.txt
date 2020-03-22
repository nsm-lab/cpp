cmake_minimum_required(VERSION 3.3)
project(intro_cpp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp basic_data_types/basic_data_types.cpp basic_data_types/basic_data_types.h dictionary_map/map.cpp dictionary_map/map.h conditionals/conditional.cpp conditionals/conditional.h functions/max_of_four.cpp functions/max_of_four.h guess_game/guess.cpp guess_game/guess.h strings/strings.cpp strings/strings.h arrays/studentGrades.cpp arrays/studentGrades.h math/math.cpp math/math.h io/io.cpp io/io.h chapter_2/seconds_to_hours_formatting.cpp chapter_2/seconds_to_hours_formatting.h file_input_output/fileIO.cpp file_input_output/fileIO.h chapter_3/movieTickets.cpp chapter_3/movieTickets.h)
add_executable(intro_cpp ${SOURCE_FILES})
