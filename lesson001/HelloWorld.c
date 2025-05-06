//
// Created by 103style on 2025/5/6.
//
//#include "stdio.h"
#include <stdio.h>

int main(int args, char *argv[]){
    printf("Hello World!\n");
    return 0;
}

// 从源文件到可执行文件 经历了什么
//  Linux   --- main.c    a.out
// Windows  --- main.c    xxx.exe


// 1.gcc -E HelloWorld.c -o main.i  预处理
// 2.gcc -S main.i -o main.s        编译
// 3.gcc -c main.s -o main.o        汇编
// 4.gcc main.o -o hello            链接 生成可执行文件