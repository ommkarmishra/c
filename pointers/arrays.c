#include <stdio.h>
#include <string.h>
int main(){

    int arr [] = {1,2,4,5,7,8};

    int *p = arr; //or int *p = &arr[0];
  /*int *p;
    p = &arr[0];
    int x = p;*/
    printf("%d\n", *p);
    printf("%d",*(p+1));

    return 0;
}