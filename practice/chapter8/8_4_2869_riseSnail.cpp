#include <iostream>

using namespace std;

int answer;
int A,B,V;
int d = 0;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>A>>B>>V;
	answer = (V-A)/(A-B);
	d = (V-A)-(V-A)%(A-B);
	while(1){
		answer++;
		if(d+A >= V) break;
		d += (A-B);
	}
	cout << answer << "\n";
}
