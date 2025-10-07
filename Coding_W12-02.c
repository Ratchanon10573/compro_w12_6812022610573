#include <stdio.h>

// ฟังก์ชัน swap ใช้ pointer เพื่อทำการสลับค่าตัวแปรสองตัว
void swap(int *x, int *y) {
    int temp = *x; // เก็บค่าของ x ชั่วคราว
    *x = *y; // นำค่าของ y มาใส่ x
    *y = temp; // นำค่าชั่วคราวมาใส่ y
}

int main() {
    int a = 5, b = 10;

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกใช้ฟังก์ชัน swap โดยส่งที่อยู่ของ a และ b
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}