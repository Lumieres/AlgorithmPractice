#include <iostream>
#include <cmath>

using namespace std;

double T,x_1,x_2,y_1,y_2,r_1,r_2;
double diffMid, diffR;
int result;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;
	while(T--){
		cin >> x_1 >> y_1 >> r_1 >> x_2 >> y_2 >> r_2;
		diffMid = sqrt(pow((x_2-x_1),2)+pow((y_2-y_1),2));
		diffR = abs(r_2-r_1);
		
		if(diffMid == 0 && r_1 == r_2) result = -1;
		else if(diffMid == diffR || diffMid == (r_1+r_2)) result = 1;
		else if(diffMid > diffR && diffMid < (r_1+r_2)) result = 2;
		else result = 0;

		cout << result << "\n";

	}
}
