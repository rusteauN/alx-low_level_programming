#include <stdio.h>
void print_alphabet(void);
int main()
{
    print_alphabet();

    return 0;
}
void print_alphabet(void)
{
    int i;
    for(i=97;i<=122;i++)
        printf("%c",i); 
    
}