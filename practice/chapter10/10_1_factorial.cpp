#include <iostream>

using namespace std;

int N;

int factorial(int num){
	if(num == 0 || num == 1) return 1;
	return num*factorial(num-1);
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << factorial(N) << "\n";
}
