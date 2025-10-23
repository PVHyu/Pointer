// Hàm malloc() viết tắt của từ memory allocation tức là cấp phát động vùng nhớ, hàm này được sử dụng để xin cấp phát khối bộ nhớ theo kích thước byte mong muốn. 
// Giá trị trả về của hàm là một con trỏ kiểu void, bạn nên ép kiểu sang kiểu dữ liệu mà bạn cần dùng. 
// Cú pháp : ptr = (cast_type*)malloc(byte_size)

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int *a = (int*)malloc(n * sizeof(int));
    if(a == NULL){
        printf("Cap phat khong thanh cong !\n");
    }
    else{
        printf("Cap phat thanh cong !\n");
        for(int i = 0; i < n; i++){
            a[i] = 28 + i; 
        }
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
*/

// Hàm calloc() viết tắt của contiguous allocation tương tự như malloc() sử dụng để cấp phát vùng nhớ động 
// nhưng các giá trị của các vùng nhớ được cấp phát sẽ có giá trị mặc định là 0 thay vì giá trị rác như hàm malloc()
// Cú pháp : ptr = (cast_type*) calloc(n, element_size)

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int *a = (int*)calloc(n, sizeof(int));
    if(a == NULL){
        printf("Cap phat khong thanh cong !\n");
    }
    else{
        printf("Cap phat thanh cong !\n");
        printf("Mang ban dau : ");
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
        for(int i = 0; i < n; i++){
            a[i] = 28 + i; 
        }
        printf("\nMang sau khi thay doi : ");
        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }
    }
    return 0;
}
*/
