// week16-4b.cpp SOIT108 Advance 014 
#include <stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int i=0; i<=N; i++) { 
		ans += 2*i + 1;
	}
	printf("f(%d)=%d", N, ans);
}
