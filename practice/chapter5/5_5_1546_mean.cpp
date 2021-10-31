#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	float sum,max,mean = 0;
	cin >> N;
	int arr[N];
	for(int i=0; i<N; i++){
		cin >> arr[i];
		sum += arr[i];
		if(arr[i]>max) max = arr[i];
	}
	mean = (sum/max*100)/N;
	cout << mean << "\n";
}
