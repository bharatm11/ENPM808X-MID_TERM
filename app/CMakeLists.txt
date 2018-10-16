add_executable(shell-app main.cpp Node.cpp Lists.cpp OpenList.cpp ClosedList.cpp Astar.cpp Map.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
