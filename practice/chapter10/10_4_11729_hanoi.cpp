#include <iostream>
#include <cmath>

using namespace std;

int N;

void hanoi(int num, int start, int end, int bypass){
	if(num == 1) cout << start << " " << end << "\n";
	else {
		hanoi(num-1,start,bypass,end);
		cout << start << " " << end << "\n";
		hanoi(num-1,bypass,end,start);
	}
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	cout << (int)pow(2,N)-1 << "\n";
	hanoi(N,1,3,2);

}
