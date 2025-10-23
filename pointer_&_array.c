// Using arrays through pointers

/* EX1:
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int a[5] = {3, 8, 4, 2, 9};
    printf("Gia tri cua a : %d\n", a);
    for(int i = 0; i < n; i++){
        printf("Dia chi cua a[%d] : %d\n", i, a + i); // a + i <=> &a[i]
    } 
    printf("Mang a : ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    return 0;
}
*/

/* EX2:
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int a[5] = {3, 8, 4, 2, 9};
    int *ptr = &a[0];
    for(int i = 0; i < n; i++){
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    ++ptr; // => a[1]
    printf("%d\n", *ptr); 
    ptr+= 2; // a[3]
    printf("%d\n", *ptr);
    --ptr; // a[2]
    printf("%d\n", *ptr);
    return 0;
}
*/

// EX3: 
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &a[3];
    ptr += a[2]; // ptr += 3 => a[6]
    printf("%d %d %d\n", ptr, &a[6], *ptr);
    --ptr; // a[5]
    printf("%d %d %d\n", ptr, &a[5], *ptr);
    return 0;
}