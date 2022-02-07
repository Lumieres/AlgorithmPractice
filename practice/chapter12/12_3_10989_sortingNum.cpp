#include <iostream>

using namespace std;

int N,num;
int arr[10001] = {0};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for(int t=0; t<N; t++){
		cin >> num;
	       	arr[num]++;
	}
	for(int t=1; t<=10000; t++){
		if(arr[t]>0){
			while(arr[t]--) cout << t << "\n";
		}
	}
}
