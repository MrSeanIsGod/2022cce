#include <stdio.h>
///49 就是數字 '1'
///65 就是大寫 'A'
///97 就是小寫 'a'
int main()
{
    printf("A 的值是 %d\n", 'A');
    printf("B 的值是 %d\n", 'B');
    printf("C 的值是 %d\n", 'C');

    for(int c='A';c<='Z';c++){
        printf("%c 的值是 %d\n",c,c);
    }
}
