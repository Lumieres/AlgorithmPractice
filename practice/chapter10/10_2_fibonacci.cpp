#include<iostream>

using namespace std;

int N;

int getFibo(int num){
	if(num == 0 || num == 1) return num;
	return getFibo(num-1) + getFibo(num-2);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << getFibo(N) << "\n";
}
