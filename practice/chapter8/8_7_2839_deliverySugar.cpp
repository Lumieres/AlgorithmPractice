#include <iostream>

using namespace std;

int N;
int sugar = 0;
int numBag;

int getNUm(int _num){

	numBag = _num/5;
	sugar = _num%5;
	while(sugar > 0 && sugar <= _num){
		if(sugar%3 == 0){
			numBag += sugar/3;
			break;
		}
		else{
			numBag--;
			sugar = _num - 5*numBag;
		}
	}
	
	return numBag;
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << getNUm(N) << "\n";
}
