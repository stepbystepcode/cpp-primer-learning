<p align="center"><a href="https://vuejs.org" target="_blank" rel="noopener noreferrer"><img width="100" src="https://i.loli.net/2020/07/25/YfUdMlncDQ8ItbC.png" alt="Cpp logo"></a></p>

# cpp-primer-learning

Solutions for C++ *Primer* 5th exercises.
## Introduction
This project is used to help people who want to learn C++ language by themselves.

I'm a C + + beginner and the code can be problematic. If you find a mistake, you can write an issue on GitHub and I'll fix it as soon as I can.
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

