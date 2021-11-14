#include <iostream>

using namespace std;

int T,cnt,sum=0;
string input;
void solution(){
	cin >> T;
	while(T-->0){
		sum = 0;
		cnt = 0;
		cin >> input;
		for(int i=0;i<input.size();i++){
			if(input.substr(i,1) == "O"){
				cnt++;
				sum += cnt;
			}
			else{
				cnt = 0;
			}
		}
		cout << sum  << "\n";
	}
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	solution();
}
