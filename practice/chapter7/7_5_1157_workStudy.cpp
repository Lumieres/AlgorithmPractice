#include <iostream>
#include <string>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string input;
	cin >> input;
	int arr[26];
	int max = -1;
	char answer;
	
	for(int i=0; i<26; i++)
		arr[i] = 0;

	for(int i=0; i<input.size(); i++){
		input.at(i) = toupper(input.at(i));
		arr[input.at(i) - 65]++;
	}

	for(int i=0; i<26; i++){
		if(max < arr[i]) {
			max = arr[i];
			answer = char(i + 65);
		}
		else if(max == arr[i]){
			answer = '?';
		}
	}
	cout << answer << "\n";

}
