#include <stdio.h>
#define tamanho 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    printf("%d\n", *ptr + 2);
    printf("%d\n", *(ptr + 2));
    printf("%d\n", ptr[2]);
    printf("%d\n", *ptr++);
    printf("%d\n", (*ptr)++);
    return 0;
}
