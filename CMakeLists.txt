cmake_minimum_required(VERSION 3.8)
project(Functions2)

set(CMAKE_CXX_STANDARD 11)

# Set files ot compile
#set(SOURCE_FILES Functions.cpp)
#set(SOURCE_FILES functionsStruct.cpp)
#set(SOURCE_FILES functionsreturn.cpp)
#set(SOURCE_FILES Point.cpp)
#set(SOURCE_FILES SeanBiglerHw2_Task1.cpp)
#set(SOURCE_FILES Structures1.cpp)
#set(SOURCE_FILES Structures2.cpp)
#set(SOURCE_FILES Enumeration.cpp)
#set(SOURCE_FILES NestedStructures.cpp)
set(SOURCE_FILES RoomVolume.cpp)

add_executable(Functions2 ${SOURCE_FILES})