<p align="center"><a href="#"><img width="100" src="https://i.loli.net/2020/07/25/YfUdMlncDQ8ItbC.png" alt="Cpp logo"></a></p>
<h2 align="center">cpp-primer-learning</h2>
<p align="center">
  <a href="https://travis-ci.com/ybygjylj/cpp-primer-learning"><img src="https://travis-ci.com/ybygjylj/cpp-primer-learning.svg?branch=master" alt="Build Status"></a>
  <a href="https://raw.githubusercontent.com/ybygjylj/cpp-primer-learning/master/LICENSE"><img src="https://img.shields.io/badge/license-MIT-blue.svg" alt="LICENSE"></a>
  <a href="https://github.com/topics/cpp"><img src="https://img.shields.io/badge/language-c++-blue.svg" alt="languange"></a>
  <a href="https://gitter.im/learning-cpp/community"><img src="https://badges.gitter.im/Join%20Chat.svg" alt="chat"></a>
</p>


Solutions for C++ *Primer* 5th exercises.
## Introduction
This project is used to help people who want to learn C++ language by themselves.

I'm a C + + beginner and the code can be problematic. If you find a mistake, you can write an issue [here](https://github.com/codingboylj/cpp-primer-learning/issues/new) and I'll fix it as soon as I can.
## Download e-books or Source Code

You can get it from the relase:https://github.com/ybygjylj/cpp-primer-learning/releases/tag/1.0

## My system environment
| My system environment |                               |
| --------------------- | ----------------------------- |
| Kernel                | x86_64 Linux 5.6.19-2-MANJARO |
| g++ version           | 5.5.0                         |
| editor                | neovim 0.4.3                  |

## Run c++ code quickly on linux
In Linux, compiling a CPP file from the command line and running it requires several commands to execute, so I created a shell to quickly compile and run the CPP code. You can execute the CPP file with the run statement by adding the alias directive definition.(in ~/.zshrc or ~/.bashrc)

```
alias run="~/Documents/c++/run.sh"
```

When you want to perform the test.cpp, you can execute the command:

```
run test.cpp
```

If your code is correct, it will run directly, otherwise an error will be thrown.

