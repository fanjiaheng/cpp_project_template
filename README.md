# cpp_project_template
c++开源工程模板
   
# 目录简介   
root# tree
.
├── bin                       // 存放测试的可执行程序
├── build                     // cmake构建时中间文件
├── build.sh                  // 自动化编译脚本
├── CMakeLists.txt            // 顶层CMakeLists.txt
├── include                   // 父类，思想：以接口的形式对外提供方法
│   ├── Common
│   │   └── common.h
│   └── TestApp
│       └── test.h
├── lib                       // 存放静态库和动态库
│   ├── libTestApp.a
│   └── libTestApp.so
├── LICENSE                   // 证书
├── README.md                 // 说明文档
├── src                       // 源文件
│   ├── CMakeLists.txt        // 源文件下的CMakeLists.txt
│   ├── model
│   │   ├── test1.cpp
│   │   └── test1.h
│   ├── test.cpp
│   └── test.h
── test                       // 测试用例，cpp可以存放GoogleTest
    ├── build
    ├── build.sh
    ├── CMakeLists.txt
    └── main.cpp
   
# 使用说明   
(1) 静态库/动态库的编译
执行cpp_project_template/build.sh
(2) 测试
执行cpp_project_template/test/build.sh