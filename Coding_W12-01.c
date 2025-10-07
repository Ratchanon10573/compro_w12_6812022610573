#include <stdio.h>

int main() {
    int x = 10; // ประกาศตัวแปร x และกำหนดค่าเริ่มต้นเป็น 10
    int *ptr; // ประกาศ pointer สำหรับเก็บที่อยู่ของ x

    ptr = &x; // ให้ ptr ชี้ไปที่ตำแหน่งหน่วยความจำของ x

    printf("Before: x = %d\n", x); // แสดงค่าของ x ก่อนเปลี่ยน

    *ptr = 20; // ใช้ pointer เปลี่ยนค่าของ x จาก 10 เป็น 20

    printf("After : x = %d\n", x); // แสดงค่าของ x หลังเปลี่ยน

    return 0;
}