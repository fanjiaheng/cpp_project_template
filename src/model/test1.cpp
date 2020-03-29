#include "test1.h"
#include <iostream>

namespace TestApp {

CTest1App::CTest1App()
{
    std::cout << "CTest1App构造函数!" << std::endl;
}

CTest1App::~CTest1App()
{
    std::cout << "CTest1App析构函数!" << std::endl;
}

bool CTest1App::start()
{
    std::cout << "CTest1App开始，可以做一些预处理!" << std::endl;

    return true;
}

bool CTest1App::stop()
{
    std::cout << "CTest1App停止，可以做一些善后处理!" << std::endl;

    return true;
}

void CTest1App::test(void)
{
    std::cout << "CTest1App这是一个测试程序!" << std::endl;
}

} // namespace TestApp
