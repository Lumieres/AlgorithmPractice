#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[8001] = {0};

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;

	for(int i=0; i<N; i++){
		int val;
		cin >> val;
		arr[val+4000]++;
	}

	int sum = 0;

}
