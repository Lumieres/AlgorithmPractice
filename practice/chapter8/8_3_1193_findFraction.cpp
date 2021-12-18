#include <iostream>

using namespace std;

int input;
int x,y;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> input;
	int change = 1;
	int cnt = 1;
	bool isDirect = false;
	for(int i=0; i<input; i++){
		if(change == cnt){
			change++;
			cnt = 1;
			if(isDirect == true){
				x = 1;
				y = change - 1; 
			}
			else{
				x = change - 1;
				y = 1;
			}
			isDirect = !isDirect;
		}
		else{
			if(isDirect == true){
				x--;
				y++;
			}
			else{
				x++;
				y--;
			}
		}
		cnt++;
	}
	cout << x << "/" << y << "\n";
}
