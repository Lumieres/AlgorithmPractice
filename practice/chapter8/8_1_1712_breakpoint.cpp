#include <iostream>

using namespace std;

long long a, b, c;
long long answer;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> a >> b >> c;
	if((c-b)<=0) answer = -1;
	else answer = (a/(c-b))+1;
	cout << answer << "\n";
}
