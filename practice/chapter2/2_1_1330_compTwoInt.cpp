#include <iostream>

using namespace std;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int A,B;
	cin >> A >> B;
	if(A<B) cout << "<" << "\n";
	else if(A>B) cout << ">" << "\n";
	else cout << "==" << "\n";
}
