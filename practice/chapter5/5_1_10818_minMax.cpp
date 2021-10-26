#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N,max = -1000000;
	int min = 10000000;
	cin >> N;
	int num[N]; 
	for(int i=0; i<N; ++i){
		cin >> num[i];
		if(max<num[i]) max = num[i];
		if(min>num[i]) min = num[i];
	}
	cout << min << " " << max << "\n";
}
