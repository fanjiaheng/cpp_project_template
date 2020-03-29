cd `dirname $0`
rm build/*
cd build
cmake ..
make
cd -