#include <iostream>

using namespace std;

bool isHansu(int num){
	int diff;
	if(num <100) return true;
	int first;
	int second;
	bool check = false;
	while(num>=10){
		first = num%10;
		second = (num/10)%10;
		if(check == true && (diff != (second - first))) return false;
		diff = second - first;
		num /= 10;
		check = true;
	}
	return true;
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,cnt=0;
	cin >> T;
	for(int i=T; i>=1; --i){
		if(isHansu(i)) cnt++;
	}
	cout << cnt << "\n";
}
