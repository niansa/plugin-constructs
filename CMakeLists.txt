cmake_minimum_required(VERSION 3.6)
project(discordpp-plugin-constructs)

set(CMAKE_CXX_STANDARD 17)

###################

add_library(${PROJECT_NAME} discordpp/constructs/message.cc)
target_include_directories (${PROJECT_NAME} PUBLIC ${discordpp_SOURCE_DIR} ${CMAKE_CURRENT_SOURCE_DIR})

find_package(FMT REQUIRED)

TARGET_LINK_LIBRARIES(
        ${PROJECT_NAME} INTERFACE PRIVATE
        fmt::fmt
        nlohmann_json::nlohmann_json
)
