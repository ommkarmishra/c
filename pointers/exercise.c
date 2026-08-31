/*Exercise 5-1: getint treats a + or - not followed by a digit as a valid representation of zero.
Fix it to push such a character back on the input.
*/
#include <stdio.h>
#include <ctype.h>

#define BUFSIZE 100

char buf[BUFSIZE];
int bufp = 0;

/* get a (possibly pushed-back) character */
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

/* push character back on input */
void ungetch(int c)
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}

/* get next integer from input */
int getint(int *pn)
{
    int c, sign;

    while (isspace(c = getch()))
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-') {
        int next = getch();

        /* Fix for Exercise 5-1:
           if sign is not followed by a digit,
           push BOTH characters back. */
        if (!isdigit(next)) {
            if (next != EOF)
                ungetch(next);
            ungetch(c);
            return 0;
        }

        c = next;
    }

    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');

    *pn *= sign;

    if (c != EOF)
        ungetch(c);

    return c;
}

int main(void)
{
    int n;

    printf("Enter integers:\n");

    while (getint(&n) != EOF)
        printf("You entered: %d\n", n);

    return 0;
}