#include <iostream>

using namespace std;

int x,y,w,h;
int answer;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> x >> y >> w >> h;
	answer = x;
	if(answer > w-x) answer = w-x;
	if(answer > y) answer = y;
	if(answer > h-y) answer = h-y;

	cout << answer << "\n";
}
