#include <iostream>
#include <string>

using namespace std;

void printWords(int _rc, string _input){	
	for(int i=0; i<_input.size(); i++){
		for(int j=0; j<_rc; j++){
			cout << _input.at(i);
		}
	}
	cout << "\n";
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,rc;
	string input;
	cin >> T; 
	for(int i=0;i<T;i++){
		cin >> rc;
		cin >> input;
		printWords(rc,input);
	}
}
