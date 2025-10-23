#include <stdio.h>

void change(int **x, int *y){
    *x = y;
}
int main(){
    int N = 28, M = 56;
    int *ptr1 = &N;
    int *ptr2 = &M;
    printf("Truoc khi goi ham : \n");
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    change(&ptr1, ptr2);
    printf("Sau khi goi ham : \n");
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    return 0;
}