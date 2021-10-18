#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int hour,min;
	int minusValue = 45;
	cin >> hour >> min;
	min -= minusValue;
	if(min < 0) {
		hour--;
		min += 60;
	}
	if(hour < 0){
		hour += 24;
	}
	cout << to_string(hour) + " " + to_string(min) << endl;
}
