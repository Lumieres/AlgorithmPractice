#include <iostream>

using namespace std;

int a,b,c;
int maxInt=0;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;

	if(a==b && b==c) {
		cout << 10000+a*1000 << '\n';
	}
	else if(a==b&&b!=c) {
		cout << 1000+a*100 << '\n';
	}
	else if(b==c&&c!=a) {
		cout << 1000+b*100 << '\n';
	}
	else if(a==c&&c!=b) {
		cout << 1000+c*100 << '\n';
	}
	else if(a!=b && b!=c) {
		if(maxInt<a) maxInt = a;
		if(maxInt<b) maxInt = b;
		if(maxInt<c) maxInt = c;
		cout << maxInt*100 << '\n';
	}
}
