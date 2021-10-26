#include <iostream>

using namespace std;

int main(void){
	int input[10] = {0, };
	int remainder[42] = {0, };
	int count = 0;
	for(int i=0; i<10; ++i){
		cin >> input[i];
		remainder[input[i]%42]++;
	}
	for(int i=0; i<42; ++i){
		if(remainder[i]>0) count++;
	}
	cout << count << "\n";
}
