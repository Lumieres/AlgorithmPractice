#include <iostream>

using namespace std;

string input[2];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> input[0];
        cin >> input[1];

	int p1, p2;
	for(int i=0; i< input[0].length(); i++) {
		cout << input[0].at(i) << ' ';
		p1 = p2 = i;
		while(p1<input[0].length()) {
			if(input[0].at(p1) == input[1].at(p1]) {

			}
		}
	}


}
