#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
	/* 64bit fun */
	int *a;
	int b = -100;
	char myfoo[10000] = {1};
	a = malloc(sizeof(a));
	printf("sizeof a = %lu\n", sizeof(a));
	printf("sizeof b = %lu\n", sizeof(b));
	*a = -10000 ;
	memset(&b, *a, sizeof(a));
	printf("b = %d\n", b);
	printf("a = %d\n", *a);
	printf("sizeof a = %lu\n", sizeof(a));
	printf("sizeof b = %lu\n", sizeof(b));
	memset(a, b, sizeof(a));
	b += 252643799;
	* a += 252643799;
	*a = *a * -1;
	b = b * -1;
	printf("b = %d\n", b);
	printf("a = %d\n", *a);
	myfoo[1] = myfoo[0];
	free(a);
	return 0;

}

