#include <iostream>

using namespace std;

int N;

void swapNum(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b =temp;
	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	int arrNum[N];
	for(int t=0 ; t < N; t++) {
		cin >> arrNum[t];
	}

	for(int i=0; i<N; i++){
		for(int j=i; j<N; j++){
			if(arrNum[i]>arrNum[j]) swapNum(arrNum[i],arrNum[j]);
		}
	}

	for(int t=0; t<N; t++) {
		cout << arrNum[t] << "\n";
	}
}
