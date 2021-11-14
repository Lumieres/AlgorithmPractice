#include <iostream>
#include <cmath>

using namespace std;

int T,N,i = 0;
double sum,mean,result,cnt = 0;

void solution(){
	cin >> T;
	while(T--){
		cin >> N;
		int numArr[N];
		sum = 0;
		mean = 0;
		result = 0;
		cnt = 0;
		for(i=0;i<N;i++){
			cin >> numArr[i];
			sum += numArr[i];
		}

		mean = sum/N;
	
		for(i=0;i<N;i++){
			if(numArr[i]>mean) cnt++;
		}

		result = cnt/N*100;
		cout<< fixed;
		cout.precision(3);
		cout<< result << "%" << "\n";
	}
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solution();
}
