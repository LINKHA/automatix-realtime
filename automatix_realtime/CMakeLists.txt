set (TARGET_NAME automatix_realtime)

# Get all source files
file(GLOB_RECURSE SOURCE_HEADER *.h)
file(GLOB_RECURSE SOURCE_SRC *.cpp)
file(GLOB_RECURSE SOURCE_HPP *.hpp )
file(GLOB_RECURSE SOURCE_SRC_C *.c )
		
set(SOURCE_ALL_FILES ${SOURCE_HEADER} ${SOURCE_SRC} ${SOURCE_HPP} ${SOURCE_SRC_C} )
source_group_by_dir(SOURCE_ALL_FILES)

add_executable(${TARGET_NAME} ${SOURCE_ALL_FILES})

# target_link_libraries (${TARGET_NAME}  caf)
target_link_libraries(${TARGET_NAME} PRIVATE CAF::internal CAF::core)