#include <stdio.h>

#include <stdlib.h>
void TOH(int pegs, char source, char dest, char temp);
int main()
{
    int n;
    char s = 'S', d = 'D', t = 'T';
    printf("\nEnter the number of pegs: ");
    scanf("%d", &n);
    TOH(n, s, d, t);
    return 0;
}
void TOH(int peg, char source, char dest, char temp)
{
    int p = peg;
    char s = source;
    char d = dest;
    char t = temp;
    if(p>=1)
    {
        TOH(p-1, s, t, d);
        printf("\n%d peg moves from %c to %c", p,s,d);
        TOH(p-1, t, d, s);
    }
}
