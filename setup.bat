cd lib
cmake -S . -B ./build -G "MinGW Makefiles" -D CMAKE_BUILD_TYPE=Release
cmake --build ./build

cd ../
cmake -S . -B ./build -G "MinGW Makefiles" -D CMAKE_BUILD_TYPE=Release
cmake --build ./build

pause