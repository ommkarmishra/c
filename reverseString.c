#include <stdio.h>
#include <string.h>
#include<stdbool.h>

char *reverseString(char str[50]){
    int s = 0;
    int e = strlen(str) -1;
    char temp;
    
    while (s < e){       

        temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        s++;
        e--;

    }
    
    return str;
}
int main(){

   char str1[50] = "Ommkar Mishra";
   printf("str1 ori: %s\n", str1);

   printf("rev str1: %s", reverseString(str1));
  // reverseString(str1);

    return 0;
}