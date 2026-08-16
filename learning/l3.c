#include <stdio.h>
#include <string.h>
#include<stdbool.h>
/*Write the function itob(n,s,b) that converts the integer n into a base b character representation in the string s.
In particular, itob(n,s,16) formats s as a hexadecimal integer in s.
void itob(int n,char s[]){
}*/
/*4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s, or -1 if there is none*/
int strindex(char s[], char t[]){

    int i , j, k;
    for(i = strlen(s) - strlen(t); i >= 0; i--){
        for(j = i, k= 0; t[k] != '\0' && s[j] == t[k]; j++, k++){
            ;
        }
        if(t[k] == '\0'){
            return i;  
        }
    }

    return -1;
}
int main(){
/*int i, n  = 10;
    int a[] = {10,20,30,40,50,60,70,80,90,100,110,120};
   for (i = 0; i < n; i++){
    printf("%6d%c", a[i], (i%10==9 || i==n-1) ? '\n' : ' ');
   }*/

   /*
   /*upper to lower
int lower(int c){
    return (c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c);
}
   char c = 'D';
   printf("%c\n", lower(c));
   */
  char s[100] = "the quick brown fox jumps over the quick fox";
  char t[100] = "cat";

  printf("%d\n", strindex(s,t));

    return 0;
}