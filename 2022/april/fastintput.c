#include<stdio.h>
int main() {
	int n, k;
	scanf("%d %d",&n,&k);
	int x;
	int cnt = 0;
	while (n--) {
		scanf("%d",&x)
		if (x % k == 0)
			cnt++;
	}
	printf("%d\n",cnt);


	return 0;
}