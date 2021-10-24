#include <stdio.h>

int main(void){
	int N,i,j;
	scanf("%d", &N);
	for(i=1; i <= N; ++i){
		j = 0;
		while(j < N-i){
			printf(" ");
			j++;
		}
		while(j < N){
			printf("*");
			j++;
		}
		printf("\n");
	}
}
