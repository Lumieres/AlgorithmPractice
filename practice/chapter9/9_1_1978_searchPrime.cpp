#include <iostream>

using namespace std;

int N,input,cnt = 0;

bool isPrime(int _num){
	if(_num<2) return false;
	for(int i = 2; i*i <= _num; i++){
		if(_num%i == 0) return false;
	}
	return true;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>N;
	while(N--){
		cin>>input;
		if(isPrime(input) == true) cnt++;
	}
	cout << cnt << "\n";
}
