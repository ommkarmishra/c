#include <stdio.h>

int getint(int *pn)
{
    int n;

    if (scanf("%d", &n) == 1) {
        *pn = n;       // send the integer back through pointer
        return 1;      // success
    }

    return EOF;        // no more valid input
}

int main()
{
    int x;
    int status;

    status = getint(&x);

    if (status != EOF)
        printf("Number = %d\n", x);
    else
        printf("End of input\n");

    return 0;
}