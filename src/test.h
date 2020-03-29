#pragma once

#include "TestApp/test.h"
#include <iostream>

namespace TestApp {

class CTestApp : public ITestApp
{
public:
    static CTestApp* instance()
    {
        static CTestApp inst;
        return &inst;
    }

    void destroy() {}

    bool start();

    bool stop();

    void sayHello(void);

private:
    CTestApp();
    ~CTestApp();

private:
    std::string val;
};

} // namespace TestApp