#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string sentense;
	int wordCnt = 1;
	getline(cin,sentense);

	if(sentense.empty()){
		cout << 0;
		return 0;
	}

	for(int i=0; i<sentense.size(); i++){
		if(sentense.at(i) == ' '){
			wordCnt++;
		}
	}

	if(sentense.at(0) == ' ') wordCnt--;
	if(sentense.at(sentense.size()-1) == ' ') wordCnt--;
	cout << wordCnt << "\n";
	return 0;
}
