#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	map<char,int> m;
	string checkStr = "abcdefghijklmnopqrstuvwxyz";
	int arrStr[26] = {-1};
	string input;

	cin >> input;
	for(int i=0;i<checkStr.size();i++){
		m.insert(pair<char,int>(checkStr.at(i), i));
		arrStr[i] = -1;
	}
	
	for(int i=0;i<input.size();i++){
		if(arrStr[m[input.at(i)]] == -1)
			arrStr[m[input.at(i)]] = i;
	}
	for(int i=0;i<26;i++)
		cout << arrStr[i] << " ";

	cout << "\n";
	
}
