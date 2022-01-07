#include <iostream>

using namespace std;

int x[2];
int y[2];
int a,b;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> x[0] >> y[0];
	cin >> a >> b;
	if(x[0] == a) x[0] = 0;
	else x[1] = a;
	
	if(y[0] == b) y[0] = 0;
	else y[1] = b;

	cin >> a >> b;
	if(x[0] == 0) cout << a << " ";
	else if(x[0] == a) cout << x[1] << " ";
	else if(x[1] == a) cout << x[0] << " ";

	if(y[0] == 0) cout << b << "\n";
	else if(y[0] == b) cout << y[1] << "\n";
	else if(y[1] == b) cout << y[0] << "\n";

}
