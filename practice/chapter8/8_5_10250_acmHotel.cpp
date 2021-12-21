#include <iostream>
#include <cmath>

using namespace std;

int T,H,W,N;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>T;
	while(T--){
		cin>>H>>W>>N;
		cout<<((N%H) > 0 ? N%H : H);
		if(N/H + ((N%H) > 0 ? 1 : 0))>=10) cout << N/H + ((N%H) > 0 ? 1 : 0) << "\n";
		else cout << 0 << N/H + ((N%H) > 0 ? 1 : 0) << "\n";
	}
}
