#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,a,b;
	cin >> T;
	for(int i=1; i <= T; ++i){
		cin >> a >> b;
		cout << "Case #" << i << ": " << a+b << "\n";
	}
}
