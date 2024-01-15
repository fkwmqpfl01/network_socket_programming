#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	for(int i=0; i<5; i++){
		num = rand() % 100;
		printf("%d\n", num);
	}
	return 0;
}
