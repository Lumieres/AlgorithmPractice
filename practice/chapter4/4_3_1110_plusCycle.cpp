#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num,newNum,cycle = 0;
	cin >> num;
	newNum = num;
	while(1){
		++cycle;
		newNum = (newNum/10+newNum%10)%10+(newNum%10)*10;
		if(num==newNum) break;
	}
	cout << cycle << "\n";
}
