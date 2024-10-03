# NENU ACM string
本仓库用于NENU ACM的字符串基础培训
## 依赖
1. C++编译器(GCC 11.4.0)
2. GNU Make 4.3
## 用法
1. 克隆仓库到本地
```bash
$ git clone https://github.com/GSteve-Paul/acm-course-string.git
```
2. 使用Make编译、运行程序
教程内字符、C风格的字符数组型字符串示例代码在```char-array.c```中。C++风格的```std::string```示例代码在```cppstring.cpp```中。在以下叙述中，示例代码1为前者，示例代码2为后者。

每个示例代码内有多个```code1```,```code2```...函数，这个数字被称作代码块号。

如要运行某个示例的某个代码块，可参照以下命令：
```bash
$ make run\[示例号\] CODENB=\[代码块号\]
```

*例*：
要运行字符示例代码的```code1()```，请输入以下命令：
```bash
$ make run1 CODENB=1
```
