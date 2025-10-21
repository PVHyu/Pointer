// Ví dụ: Tính giá trị trung bình của một mảng sử dụng con trỏ
#include <stdio.h>

// Hợp lệ: n > 0. Sử dụng con trỏ để duyệt mảng và tính tổng
double average(int *arr, int n) {
    if (n <= 0 || arr == NULL) return 0.0;
    long long sum = 0;
    int *p = arr;
    for (int i = 0; i < n; ++i) {
        sum += *(p + i); // hoặc sum += p[i]; (p là con trỏ)
    }
    return (double)sum / n;
}

// Tra ve con tro tro den phan tu lon nhat trong mang
// Neu n <= 0 hoac arr == NULL thi tra ve NULL
int *findMax(int *arr, int n) {
    if (n <= 0 || arr == NULL) return NULL;
    int *maxPtr = arr; // bat dau voi phan tu dau tien
    int *end = arr + n;
    for (int *p = arr + 1; p < end; ++p) {
        if (*p > *maxPtr) {
            maxPtr = p;
        }
    }
    return maxPtr;
}

int main(void) {
    int n;
    printf("Nhap so luong phan tu n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("So luong khong hop le. Ket thuc.\n");
        return 1;
    }

    // Su dung VLA (variable-length array) cho don gian
    int arr[n];
    printf("Nhap %d so nguyen (cach nhau boi dau cach hoac newline):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Gia tri khong hop le. Ket thuc.\n");
            return 1;
        }
    }

    double avg = average(arr, n);
    printf("Gia tri trung binh: %.2f\n", avg);

    int *maxP = findMax(arr, n);
    if (maxP) {
        int index = (int)(maxP - arr); // tinh chi so tu con tro
        printf("Phan tu lon nhat: %d (tai chi so %d)\n", *maxP, index);
    }
    return 0;
}