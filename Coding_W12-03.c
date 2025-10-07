
#include <stdio.h>

// ฟังก์ชันรับ pointer ของ array และขนาด แล้วคูณทุกตัวด้วย 2
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2; // หรือ *(arr + i) = *(arr + i) * 2;
    }
}

int main() {
    int all[] = {1, 2, 3, 4, 5}; // ประกาศ array
    int size = 5;

    // แสดงค่าก่อนคูณ
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", all[i]);
    }
    printf("\n");

    // เรียกใช้ฟังก์ชัน doubleArray
    doubleArray(all, size);

    // แสดงค่าหลังคูณ
    printf("After : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", all[i]);
    }
    printf("\n");

    return 0;
}
