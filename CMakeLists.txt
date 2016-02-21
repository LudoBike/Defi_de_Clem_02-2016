cmake_minimum_required(VERSION 2.6)

project(Defi_de_Clem_02-2016)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

include_directories(include)

file(
  GLOB_RECURSE
  source_files
  src/*
  )

add_executable(
  exec
  ${source_files}
  )
