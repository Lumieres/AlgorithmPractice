#include <iostream>
#include <cmath>

using namespace std;

double r;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << M_PI*pow(r,2) << "\n";
	cout << 2*pow(r,2) << "\n";
}
