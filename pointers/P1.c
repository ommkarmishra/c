#include <stdio.h>
#include <string.h>

int main(){

   int x = 5;
   int *ip = &x;

   /*
   printf("%d\n", ++*ip); 
   printf("%p\n", &x);
   *ip++: means read the value of x then ip moves to next int
   ++(*ip): means increment the value of x , ip is unchanged
   */
   printf("%p\n", (void *)ip);       
   printf("%d\n", *ip++);  //*ip gets 5 → prints 5 then ip++ moves the pointer to the next int location.
   printf("%p\n", (void *)ip++);  //Now ip is no longer points to x. It points to the next memory location
   printf("%d", ++*ip);
   printf("%p\n", (void *)ip);       

    return 0;
}