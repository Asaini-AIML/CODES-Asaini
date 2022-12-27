#include <stdio.h>
void strreverse(char *p)
{
    char *q, r ;
    q = p;
    while (*q != '\0')
    {
        q++;
    }
    q--;
    while (p < q)
    {
        r = *p;
        *p = *q;
        *q = r;
        p++;
        q--;
    }
    printf("\n");
  
}
void main()
{
    char a[10];
    printf("enter the string");
    scanf("%s", a);
    strreverse(a);
    printf("reverse of string %s", a);
}
