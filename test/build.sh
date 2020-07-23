# 自动化编译脚本
cd `dirname $0`
rm -rf build
mkdir build
cd build
cmake ..
make
cd -