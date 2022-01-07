#include <iostream>

using namespace std;

int M,N;

bool isPrime(int num){
	if(num < 2) return false;
	for(int i=2; i*i<=num; i++){
		if(num%i==0) return false;
	}
	return true;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	for(int i = N; i <= M; i++){
		if(isPrime(i)==true) cout << i << "\n";
	}
}
