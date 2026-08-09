#include <stdio.h>
#include <string.h>
#include<stdbool.h>

void squeeze(char s1[],char s2[]){

    int i,j;  //i for iterating through s1, k for s2 and j for placing what to put in s1
    //the nested loop is for comparing 2 string
    for(i = j = 0; s1[i] != '\0'; i++){
        int k;
        for(k = 0; s2[k] != '\0'; k++){
            if (s1[i] == s2[k]){
                break;
            }
        }
        if (s2[k] == '\0'){
                s1[j++] =s1[i];
            }
            s1[j] = '\0';  //puting an end to the string
    }
}
int main(){

    //s1 = "hello"    
    //s2 = "aeiou"
    // res = "hll"    
    char s1[10] = "hello";
    char s2[10] = "aeiou";

    squeeze(s1, s2);
    printf("ans: %s\n", s1);

    return 0;

}

