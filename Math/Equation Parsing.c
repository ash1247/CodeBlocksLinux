#include<setjmp.h>
#include<stdio.h>

int f2(void);

jmp_buf ebuf;

int main(void)
{
    char first = 1;
    int i;

    printf("1  ");
    i = setjmp(ebuf);
    if(!first)
    {
        printf("%d",i);
    }

    if(first)
    {
        first = !first;
        i = f2();
        printf("This will not be printed");
    }
    return 0;
}

int f2(void)
{
    printf("2 ");
    longjmp(ebuf,3);
    return 23;
}
