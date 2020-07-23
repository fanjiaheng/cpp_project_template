cmake_minimum_required(VERSION 3.10)

#
# 设置可执行文件的 文件名 变量，即生成的可执行程序 test，TEST_BIN的作用是方便操作
#
set(TEST_BIN mytest)

#
# 将所有的文件名信息存在 TEST_SRC变量中
#
set(TEST_SRC main.cpp)


#
# 添加需要链接的库文件目录
# CMake 2.8.0 以下的版本，加载动态链接库link_directories()时使用相对路径，链接时也使用相对路径;
# CMake 2.8.1 及以上版本加载动态链接库link_directories()时使用CMAKE_CURRENT_SOURCE_DIR修饰对路径，链接时先转换成绝对路径再进行链接;
# 语法：link_directories(directory1 directory2 ...)
# 解释：相当于g++命令的 -L选项 的作用，也相当于环境变量中增加LD_LIBRARY_PATH的路径的作用。
#
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib/)


message("************hhh")
message(${CMAKE_CURRENT_SOURCE_DIR})
message(${CMAKE_CURRENT_SOURCE_DIR}/../include)
#
# 头文件信息
#
#target_include_directories(${TEST_BIN} ${CMAKE_CURRENT_SOURCE_DIR}/../include)


#
# 编译成可执行文件
#
add_executable(${TEST_BIN} ${TEST_SRC})


#
# 设置要链接的库文件的名称
#
target_link_libraries(${TEST_BIN}
    -Wl,--start-group
    TestApp
    -Wl,--end-group
)


#
# 注意:
# (1) target_link_libraries 要在 add_executable 之后;
# (2) link_libraries 要在 add_executable 之前;
#