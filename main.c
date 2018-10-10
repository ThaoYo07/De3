#include <stdio.h>

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
    int findMaxValue;
    int findMinValue;
    for (int k = 0; k < size; ++k) {
        if (findMaxValue < mangSoNguyen[k]);
        findMaxValue = mangSoNguyen[k];
    } else if (findMinValue > mangSoNguyen[k]){
        findMinValue = mangSoNguyen[k];
    }
    int luaChon;
    printf("Vui long lua chon gia tri mong muon.\n");
    scanf("%d", &luaChon);
    switch (luaChon){
        case 1:
            findMaxValue = mangSoNguyen;
                printf("So lon nhat trong mang la %d = ", *findMaxValue);
            break;
        case 2:
            mangSoNguyen = findMinValue;
            printf("So nho nhat trong mang la %d = ", *findMinValue);
            break;
    }

    return 0;
}

// Viết chương trình tìm số lớn nhất và nhỏ nhất trong một mảng các số nguyên.
//    - Yêu cầu người dùng nhập vào số lượng các phần tử trong mảng số nguyên (Yêu cầu số lượng nhỏ hơn hoặc bằng 10)
//    - Yêu cầu người dùng nhập đủ các phần tử trong mảng và in ra thông tin các phần tử trong mảng.
//    - Hỏi người dùng muốn in ra số lớn nhất hay nhỏ nhất
// switch theo lựa chọn của người dùng mà gọi đến một trong hai hàm findMaxValue và findMinValue
// (Tham số truyền vào là mảng các số nguyên vừa nhập).
//    - Hàm findMaxValue trả về số nguyên lớn nhất trong mảng, findMinValue trả về số nguyên nhỏ nhất.
//    - In ra kết quả (Khuyến khích dùng con trỏ)