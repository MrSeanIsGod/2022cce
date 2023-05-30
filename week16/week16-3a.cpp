
#include <stdio.h>
#include <string.h>
int main()
{
	char a[200],b[200];
	scanf("%s %s",&a,&b);
	int N1=strlen(a);
	int N2=strlen(b);
	if(N1>N2){
		printf("1");
		return 0;
	}
	else if(N1<N2){
		printf("-1");
		return 0;
	}
	for(int i=0;i<N1;i++){
		if(a[i]>b[i]){
			printf("1");
			return 0;
		}
		else if(a[i]<b[i]){
			printf("-1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
