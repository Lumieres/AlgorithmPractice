#include <iostream>
#include <cstring>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string apbArr[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string input;
	int answer = 0;
	cin >> input;
	for(int i=0; i<input.size(); i++){
		answer++;
		for(int j=0; j<8; j++){
			if(strncmp(apbArr[j].c_str(),input.c_str()+(i*sizeof(char)),apbArr[j].size()) == 0){
				i = i + apbArr[j].size() - 1;
				break;
			}
		}
	}
	cout << answer << "\n";

}
