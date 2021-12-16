#include <iostream>

using namespace std;

long long sum,N;
int ans;
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	sum = 1;
	ans = 1;
	while(sum<N){
		sum += 6*ans;
		ans++;
	}
	cout << ans << "\n";
}
