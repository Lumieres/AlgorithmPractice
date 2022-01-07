#include <iostream>

using namespace std;

int N;
int cnt=0;

bool isPrime(int _num){
	if(_num<2) return false;

	for(int i=2; i*i<=_num; i++){
		if(_num%i==0) return false;
	}
	return true;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	while(1){
		cin>>N;
		if(N==0) break;
		cnt =0;
		for(int i=N+1; i<=(2*N); i++){
			if(isPrime(i)==true) cnt++;
		}
		cout<<cnt<<"\n";
	}
}
