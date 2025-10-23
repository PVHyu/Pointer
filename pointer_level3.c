#include <stdio.h>

int main(){
    int N = 28;
    int *ptr1 = &N;
    // con trỏ cấp 2 ptr2 lưu địa chỉ con trỏ ptr1
    int **ptr2 = &ptr1; 
    int ***ptr3 = &ptr2;
    printf("Dia chi cua N : %d\n", &N);
    printf("Dia chi cua ptr1 : %d\n", &ptr1);
    printf("Dia chi cua ptr2 : %d\n", &ptr2);
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    printf("Gia tri cua ptr3 : %d\n", ptr3);
    printf("Giai tham chieu ptr3 : %d\n", *ptr3);
    printf("Giai tham chieu 2 lan ptr3 : %d\n", **ptr3);
    printf("Giai tham chieu 3 lan ptr3 : %d\n", ***ptr3);
    return 0;
}