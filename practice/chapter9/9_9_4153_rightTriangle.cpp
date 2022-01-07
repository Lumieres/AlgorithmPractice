#include <iostream>

using namespace std;

int a, b, c;

void swapNumber(int* x, int* y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> a >> b >> c;
	while(a*b*c != 0){
		if(a>b) swapNumber(&a,&b);
		if(b>c) swapNumber(&b,&c);

		if(a*a + b*b == c*c) cout << "right" << "\n";
		else cout << "wrong" << "\n";

		cin >> a >> b >> c;
	}
}
