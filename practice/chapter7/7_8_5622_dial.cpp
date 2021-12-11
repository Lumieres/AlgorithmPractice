#include <iostream>
#include <map>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string input;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int valueArr[] = {3,3,3, 4,4,4, 5,5,5, 6,6,6, 7,7,7, 8,8,8,8, 9,9,9, 10,10,10,10};
	int answer=0;

	map<char,int> m;
	for(int i=0; i<alphabet.size(); i++){
		m.insert(pair<char,int>(alphabet.at(i),valueArr[i]));
	}

	cin >> input;
	for(int i=0; i<input.size(); i++){
		answer += m[input.at(i)];
	}

	cout << answer << "\n";
}
