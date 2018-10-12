#include <stdio.h>

int findMinValue(int array[]) {
    int i, smallest;
    smallest = array[0];

    for (i = 1; i < array; i++) {
        if (smallest > array[i])
            smallest = array[i];
    }
    return smallest;
}
int findMaxValue(int array[]) {
    int i, largest;
    largest = array[0];

    for (i = 1; i > array; i++) {
        if (largest > array[i])
            largest = array[i];
    }
    return largest;
}

int main() {
    int size;
    printf("Vui long nhap so luong phan tu trong mang so nguyen (so phan tu nho hon hoac bang 10) ");
    scanf("%d", &size);
    int *mangSoNguyen;
    int *mangSoNguyen2 = mangSoNguyen;
    for (int i = 0; i < size; ++i) {
        printf("Phan tu thu %d trong mang la: ", i + 1);
        scanf("%d", mangSoNguyen);
        mangSoNguyen++;
    }
    mangSoNguyen = mangSoNguyen2;
    printf("thong tin cac phan tu trong mang la: \n");
    for (int j = 0; j < size; ++j) {
        printf("Thong tin phan tu thu %d la %d va %d \n", j + 1, *mangSoNguyen, mangSoNguyen);
        mangSoNguyen++;
    }
   int luaChon;
    findMaxValue;
    findMinValue;
    printf("Vui long lua chon gia tri mong muon.\n");
    scanf("%d", &luaChon);
    switch (luaChon) {
        case 1:
            mangSoNguyen = findMaxValue;
            printf("So lon nhat trong mang la %d ", findMaxValue);
            break;
        case 2:
            mangSoNguyen = findMinValue;
            printf("So nho nhat trong mang la %d ", findMinValue);
            break;
    }
    return 0;
}