//
// Created by 103style on 2025/5/6.
//

# include "stdio.h"

// T a; a + 1;
// T* p; p + 1; sizeof(T);
// 所以说，指针的运算，不是一种单纯的数值运算，而数值+类型一种运算
//p + 2 = q; p + 2*sizeof(T) = q  (q - p)/ sizeof(T);
int main1(int argc, char *argv[]) {
    int a = 0x0001;
    printf("a=%#x, a+1=%#x\n", a, a + 1);
    int *p = (int *) 0x0001;
    printf("p=%#x, p+1=%#x\n", p, p + 1);
    int aa = 0x0010;
    printf("aa=%#x, aa-1=%#x\n", aa, aa - 1);
    int *q = (int *) 0x0010;
    printf("q=%#x, q-1=%#x\n", q, q - 1);
    int m = 0x11;
    printf("m=%#x, --m=%#x\n", m, --m);
    double *pm = (double *) 0x11;
    printf("%#x\n", pm--);
    int arr[10];
    int *parr = &arr[0];
    int *qarr = &arr[8];
    printf("%d\n", parr - qarr);
    printf("%d\n", (int) parr - (int) qarr);

    int *ptrnum1, *ptrnum2;
    int value = 1;
    ptrnum1 = &value;
    value += 10;
    ptrnum2 = &value;
    if (ptrnum1 == ptrnum2)
        printf("\n两个指针指向同一个地址\n");
    else
        printf("\n两个指针指向不同的地址\n");
    return 0;
}


int main(int argc, char *argv[]) {
    int data = 0x12345678;
    int *pd = &data;
    printf("%x\n", pd); // bf304eac
    printf("%x\n", *pd); // 12345678
    printf("%x\n", *(int *) pd); // 12345678
    printf("%x\n", *(short *) pd); // 5678
    printf("%x\n", *(char *) pd); // 78
    return 0;
}
