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
//    int main() {
//        int size;
//        scanf("%d", &size);
//        if(size > 10){
//            printf("Vui long nhap so luong phan tu trong mang so nguyen (so phan tu nho hon hoac bang 10) ");
//            return 0;
//        }
//        else{
//            int i;
//            int a[size];
//
//            // thuc hien nhap tung phan tu mang
//            for (i = 0; i < size; i++)
//            {
//                printf("Nhap a[%d] = ", i);
//                scanf("%d", &a[i]);
//            }
//
//            // thuc hien in cac phan tu cua mang ra man hinh
//            printf("\nMang da nhap \n");
//            for (i = 0; i < size; i++)
//            {
//                printf ("%d \t", a[i]);
//            }
//            int luaChon;
//            printf("Vui long lua chon gia tri mong muon.\n");
//            scanf("%d", &luaChon);
//            switch (luaChon) {
//                case 1:
//                    printf("So lon nhat trong mang la %d = ", findMaxValue(a));
//                    break;
//                case 2:
//                    printf("So nho nhat trong mang la %d = ", findMinValue(a));
//                    break;
//            }
//        }
//
//    int findMinValue(int array[]){
//        int i, smallest;
//        smallest= array[0];
//
//        for(i = 1; i < array.length; i++) {
//            if( smallest> array[i] )
//                smallest= array[i];
//        }
//        return smallest;
//    }
//
//
//    int findMaxValue(int array[]){
//        int i, largest;
//        largest = array[0];
//
//        for(i = 1; i > array.length; i++) {
//            if( largest > array[i] )
//                largest = array[i];
//        }
//        return largest;
//    }
//        return 0;
//}
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
//    int findMaxValue;
//    int findMinValue;
//    findMaxValue = mangSoNguyen[0];
//    findMinValue = mangSoNguyen[0];
//    for (int k = 0; k < size; ++k) {
//        if (findMaxValue < mangSoNguyen[k]) {
//            findMaxValue = mangSoNguyen[k];
//        }
//        if (findMinValue > mangSoNguyen[k]) {
//            findMinValue = mangSoNguyen[k];
//        }
//    }

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