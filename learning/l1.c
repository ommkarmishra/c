#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int lower(int c)
{
if (c >= 'A' && c <= 'Z')
return c + 'a' - 'A';
else
return c;
}

int main(){


    lower(3);
    
    

    return 0;

}