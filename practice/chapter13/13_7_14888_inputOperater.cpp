#include <iostream>

using namespace std;

int N;
int operatorCnt[4];
int arr[101];
int maxSum = -1000000000;
int minSum = 1000000000;

void dfs(int index, int num) {

	if(index == N-1) {
		if(maxSum < num) maxSum = num;
		if(minSum > num) minSum = num;
		return;
	}

	for(int i=0; i<4; i++) {
		if(operatorCnt[i] != 0) {
			if(i==0) num += arr[index+1]; 
			else if(i==1) num -= arr[index+1];
			else if(i==2) num *= arr[index+1];
			else if(i==3) num /= arr[index+1];

			--operatorCnt[i];
			dfs(index+1,num);
			++operatorCnt[i];

			if(i==0) num -= arr[index+1]; 
			else if(i==1) num += arr[index+1];
			else if(i==2) num /= arr[index+1];
			else if(i==3) num *= arr[index+1];
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}

	for(int i=0; i<4; i++) {
		cin >> operatorCnt[i];
	}
	
	dfs(0,arr[0]);
	cout << maxSum << '\n';
	cout << minSum << '\n';
}
