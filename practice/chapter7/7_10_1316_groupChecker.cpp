#include <iostream>
#include <map>

using namespace std;

bool checkGroupWord(string input){
	map<char,int> m;
	for(int i=0; i < input.size(); i++){
		if(m.count(input.at(i)) == 0)
			m.insert(pair<char,int>(input.at(i),1));
		else if(input.at(i) != input.at(i-1)) return false;
	}
	return true;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	int answer = 0;
	string input;
	
	cin >> T;
	while(T--){
		cin >> input;
		if(checkGroupWord(input)) answer++;
	}

	cout << answer << "\n";
}
