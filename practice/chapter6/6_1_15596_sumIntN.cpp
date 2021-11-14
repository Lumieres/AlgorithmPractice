#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a){
	long long ans = 0;
	int index = 0;
	while( index < a.size()) {
		ans += a.at(index);
		index++;
	}
	return ans;
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> num = {1,2,3,4,5};
	cout << sum(num) << "\n";

}
