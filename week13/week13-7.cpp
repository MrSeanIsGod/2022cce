#include <stdio.h>
int main()
{
	char c1,c2,c3,c4;
	scanf("%c%c%c%c",&c1,&c2,&c3,&c4);
	if(c1==c4&&c2==c3)printf("YES\n");
	else printf("NO\n");
}
