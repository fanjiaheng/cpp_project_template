#pragma once

namespace TestApp {

class CTest1App
{
public:
    static CTest1App* instance()
    {
        static CTest1App inst;
        return &inst;
    }

    void destroy() {}

    bool start();

    bool stop();

    void test(void);

private:
    CTest1App();
    ~CTest1App();
};

} // namespace TestApp