#include <stdio.h>
int main()
{
	int n,i,j;
	j=0
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		j = j + i;
	}
	printf("%d", j);
	return 0;
}