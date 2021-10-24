#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, X;
	int array[10001];
	cin >> N >> X;
	for(int i=0; i<N; ++i){
		cin >> array[i];
	}
	for(int i=0; i<N; ++i){
		if(array[i]<X) cout << array[i] << " ";
	}
}
