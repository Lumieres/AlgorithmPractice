#include <iostream>

using namespace std;

int M, N;
int Sum = 0;
int Min = 10001;

bool isPrime(int _num){
	if(_num<2) return false;
	for(int i=2; i*i<=_num; i++){
		if(_num % i == 0) return false;
	}
	return true;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> M >> N;

	for(int i=M ; i<= N; i++){
		if(isPrime(i) == true){
		       	Sum+=i;
			if(Min > i) Min = i;
		}
	}

	if(Sum > 0) cout << Sum << "\n" << Min << "\n";
	else cout << -1 << "\n";
}
