#
# Author Felix
# Date 2020-03-29
#


#
# 命令是用来限制cmake的最低版本要求是2.8.0
#
cmake_minimum_required(VERSION 2.8.0)


#
# 命令是记录工程信息，也就是工程名叫TestApp
#
project(TestApp)


#
# 命令是用来添加一些编译选项，如-Wall，-std=c++11等
#
add_compile_options(-std=c++11 -Wall)


#
# 命令可以向当前工程添加存放源文件的子目录，并可以指定中间二进制和目标二进制的存放位置
#
add_subdirectory(src)