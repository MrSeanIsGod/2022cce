///準備好整數a,b
///讀入a,b
///列出 a+b
#include <stdio.h>

int main()
{
    int a,b;
    printf("請用鍵盤輸入兩個整數:");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("你讀入了 %d %d \n",a,b);
    printf("它們加起來是: %d \n",a+b);
}
