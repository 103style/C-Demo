//
// Created by 103style on 2025/5/6.
// 数组指针


# include "stdio.h"

int main1(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("+++++++++++++++++++\n");
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, *(array + i));
    }
    return 0;
}


// 1.数组名是一个常量，不允许重新赋值。
// 2.指针变量是一个变量，可以重新赋值。
// 3.p+i 和 a+i 均表示数组元素 a[i]的地址，均指向a[i]
// 4.*(p+i) 和 *(a+i) 均表示 p+i 和 a+i 所指对象的内容 a[i]。
// 5.*p++：等价于 *(p++)。其作用：先得到 *p，再使 p=p+1。
// 6.(*p)++:表示将p所指向的变量（元素）的值加1。即等价于a[i]++。
// 7.指向数组元素的指针也可以表示成数组的形式，即允许指针变量带下标，如 *(p+i)可以表示成p[i]。
int main(void) {
    // 大刀，长矛
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    printf("array= %p\n", array);
    printf("&array[0] = %p\n", &array[0]);
    // array 代表首元素地址， array[0] 就是数组的首元素，
    // 类型是 int 类型，其地址类型就是 int *。
    // 故可将一维数组跟跟一级指针联系在一起。
    int *p = array;
    for (int i = 0; i < 10; i++) {
        printf("array[%d] = %d\n", i, *(p + i));
    }
    // 小米加步枪
//    printf("********************\n");
//    for (int i = 0; i < 10; i++) {
//        printf("array[%d] = %d\n", i, *p);
//        p++;
//    }
    printf("********************\n");
    // 冲锋枪
    for (int i = 0; i < 10; i++) {
        // printf("array[%d] = %d\n",i,*p++);
        printf("array[%d] = %d\n", i, *(p++));
    }
    return 0;
}