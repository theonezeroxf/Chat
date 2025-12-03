cmake_minimum_required(VERSION 3.10.0)
project(Chat)

find_package(Threads REQUIRED)

set(CMAKE_CXX_STANDARD 11)

set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)
set(INC_DIR ${CMAKE_SOURCE_DIR}/include)

file(GLOB SOURCES "${SRC_DIR}/*.cpp")
include_directories(${INC_DIR})


add_executable(chat_server
    ${SOURCES}
    server.cpp
)
target_link_libraries(chat_server PRIVATE Threads::Threads)

add_executable(chat_client
    ${SOURCES}
    client.cpp
)
target_link_libraries(chat_client PRIVATE Threads::Threads)
# add_executable(Chat_Server chat_server.cpp chat_message.hpp)
# target_link_libraries(Chat_Server PRIVATE Threads::Threads)
# add_executable(Chat_Client chat_client.cpp chat_message.hpp)
# target_link_libraries(Chat_Client PRIVATE Threads::Threads)


