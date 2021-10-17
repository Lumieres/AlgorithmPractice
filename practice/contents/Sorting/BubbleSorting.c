#include <stdio.h>

int main(void){
    int i,j;
    int nums[] = {3,4,5,1,2,7,6,8,9,10};
    int temp;
    for(i=9;i>0;i--){
        for(j=0;j<i;j++){
            if(nums[j]>nums[j+1]){
                temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }
	for(i=0;i<10;i++){
		printf("%d\n", nums[i]);
	}
}
