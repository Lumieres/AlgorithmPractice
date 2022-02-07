#include <iostream>

using namespace std;

int N;

int findOperator(int num){
	int s, temp, digit = 0;
	temp = num;
	while(temp){
		digit++;
		temp /= 10;
	}
	for(int i=num-(digit*9); i<=num; i++){
		if(i<1) continue;
		s=i;
		temp = i;
		while(temp){
			s += temp%10;
			temp /= 10;
		}
		if(num == s) return i;
	}
	return 0;
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << findOperator(N) << "\n";
}
