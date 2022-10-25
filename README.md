# 2022cce

Week06

1.畫星星

```cpp
#include <stdio.h>
int main()
{
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("i:%d¬P¬P\n",i);
    }
}
```
2.畫星星金字塔

```cpp
#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++)
    {
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++)
            printf(" ");
        for(int k=0; k<star; k++)
            printf("*");
        printf("\n");
    }
}
```
3.找公因數(暴搜法)

```cpp
#include <stdio.h>
int main()
{
    printf("請輸入2個數,要約分: ");
    int a,b;
    scanf("%d%d",&a,&b);

    int ans;
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            ans=i;
        }
    }
    printf("ans: %d 可約分",ans);
}
```
4.找公因數(輾轉相除法)

```cpp
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(1)
    {
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n",a,b,c);
        if(c==0)
            break;
        a=b;
        b=c;
    }
    printf("答案b: %d",b);
}
```
Week07

1.long long int 可以放進更多位數的數字
```cpp
#include <stdio.h>
int main()
{
    int n=9876543210;
    printf("int 印出來 %d\n",n);

    long long int a=9876543210;
    printf("long long int 印出來 %lld\n",a);
}
```

2.用暴力搜尋法找最大公因數，但這樣太慢了
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0)ans=i;
    }
    printf("最大公因數是:%lld\n",ans);
}
```

3.用輾轉相除法找公因數快上許多
```cpp
#include <stdio.h>
int main()
{
    long long int a,b,c;
    scanf("%lld %lld",&a,&b);
    while(1){
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n",a,b,c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是: %lld\n",b);
}
```

4.剝皮法
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;

    printf("現在的個位數:%d\n",n%10);
    n=n/10;
}
```


Week08

1.判斷質數
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2;i<n;i++){
        if(n%i==0) bad=1;
    }
    if(bad=0) printf("%d 是質數",n);
    else printf("%d 不好, 不是質數",n);
}
```

2.用兩個for迴圈判斷質數
```cpp
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for(int n=2;n<=a;n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) printf("%d ",n);
	}
}
```

3. 5個數字加總
```cpp
#include <stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來)");
    int n;
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        sum+=n;
    }
    printf("總和是:%d",sum);
}

```

4.用for迴圈印* 直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++) printf(" ");
        for(int k=1;k<=i;k++) printf("*");
        printf("\n");
    }
}
```

5.只用2個for迴圈印* 直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k<=n-i)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```

6.用while迴圈印* 直角三角形
```cpp
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int k=1;
        while(k<=n){
            if(k<=n-i) printf(" ");
            else printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
}
```
