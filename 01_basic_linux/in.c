#include <stdio.h>

int main(){
	int num, sum=0;
	for(int i=0; i<5; i++){
		scanf("%d", &num);
		sum += num;
	}
	printf("SUM: %d\n", sum);
	return 0;
}
