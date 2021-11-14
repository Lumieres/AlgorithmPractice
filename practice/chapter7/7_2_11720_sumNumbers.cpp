#include <iostream>
#include <string>

using namespace std;

int main(void){
	int N;
	int sum =0;
	string num;
	cin >> N;
	cin >> num;

	for(int i=0; i < num.size(); i++){
		sum += (int)num.at(i) - 48;
	}
	cout << sum << "\n";
}
