
#
# 命令是用来定义变量
# - 第一个参数是要定义的变量名字;
# - 第二个参数是CMake自带的预定义变量，工程的根目录;
#
set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)


#
# 命令是用来向工程添加多个指定头文件的搜索路径，路径之间用空格分隔。可以折行书写。
#
include_directories(
    ../include
)


#
# 命令可以把指定目录下所有的源文件存储在一个变量中
# - 第一个参数是指定目录;
# - 第二个参数是用于存放源文件列表的变量;
# - 多条指令书写，会追加信息;
#
aux_source_directory(. SRC_FILES)
aux_source_directory(model SRC_FILES)


#
# 命令是用来生成动态库或静态库
# - 第1个参数指定库的名字;
# - 第2个参数决定是动态还是静态，如果没有就默认静态;
# - 第3个参数指定生成库的源文件;
#
add_library(TestApp ${SRC_FILES})