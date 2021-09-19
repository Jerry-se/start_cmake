# start_cmake
开始学习使用cmake

# Windows使用CMake构建和编译
```
    > md build
    > cd build
    > cmake .. -G "Visual Studio 14 2015"
    # 若要指定构建目录D:\code\Git\start_cmake，请使用以下命令
    > cmake . -G "Visual Studio 14 2015" -Bd:/code/Git/start_cmake/build
    # 编译
    > cmake --build . --config Release
```

# Linux使用脚本构建和编译
```
    $ ./build.sh
```
