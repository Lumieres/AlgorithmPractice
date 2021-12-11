#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string a,b,aa,bb;

	cin >> a >> b;

	for(int i=2; i>=0; i--){
		aa += a.at(i);
		bb += b.at(i);
	}

	cout << max(aa,bb) << "\n";
}
