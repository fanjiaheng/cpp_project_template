#include "test.h"
#include "model/test1.h"

namespace TestApp {

CTestApp::CTestApp()
{
    std::cout << "CTestApp - 构造函数!" << std::endl;
}

CTestApp::~CTestApp()
{
    std::cout << "CTestApp - 析构函数!" << std::endl;
}

bool CTestApp::start()
{
    std::cout << "CTestApp - 开始，可以做一些预处理!" << std::endl;

    // CTestApp1::instance()->start();

    return true;
}

bool CTestApp::stop()
{
    std::cout << "CTestApp - 停止，可以做一些善后处理!" << std::endl;

    // CTestApp1::instance()->stop();

    return true;
}

void CTestApp::sayHello(void)
{
    std::cout << "CTestApp - hello world!" << std::endl;
}

} // namespace TestApp
