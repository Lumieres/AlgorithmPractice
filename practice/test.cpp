#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool narcissistic(int value){
	int num;
	string s = to_string(value);
	int digit = s.size();
	int temp;
	for(int i=0; i<s.size(); i++){
		temp = s.at(i)-'0';
		num += pow(temp,digit);
	}
	if(value == num) return true;
	else return false;
}

int main(void){
	int input;
	cin >> input;
	if(narcissistic(input)==true) cout << "True" << "\n";
	else cout << "False" << "\n";
}
