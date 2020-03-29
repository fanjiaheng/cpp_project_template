#pragma once

namespace TestApp {

class ITestApp
{
public:
    /// 虚析构函数
    virtual ~ITestApp() {};

    /// 启动组件
    virtual bool start();

    /// 停止组件
    virtual bool stop();

    /// 测试方法
    virtual void sayHello(void);
};

} // namespace TestApp