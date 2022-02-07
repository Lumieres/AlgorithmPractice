#include <iostream>

using namespace std;

int N,cnt,answer = 0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	string temp;
	for(int t=666; t < 100000666; t++){
		temp = to_string(t);
		if(temp.find("666") != string::npos) cnt++;
		if(cnt == N){
			answer = t;
			break;
		}
	}
	cout << answer << "\n";
}
