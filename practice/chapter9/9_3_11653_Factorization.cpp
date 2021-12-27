#include <iostream>

using namespace std;

int N;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	for(int i=2; i<=N; i++){
		while(N%i==0){
			N /= i;
			cout << i << "\n";
		}
	}
}
