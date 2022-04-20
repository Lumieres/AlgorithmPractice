#include <iostream>

using namespace std;

int N;
int sumWayNum =0;
long long mod = 1000000000;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	long long stairWay[101][10] = {0,};

	for(int i=0; i<=9; i++)
		stairWay[1][i] = 1;

	for(int i=2; i<=N; i++){
		for(int j=0; j<=9; j++){
			if(j==0) stairWay[i][j] += stairWay[i-1][j+1]%mod;
			else if(j==9) stairWay[i][j] += stairWay[i-1][j-1]%mod;
			else stairWay[i][j] += (stairWay[i-1][j-1] + stairWay[i-1][j+1])%mod;
		}
	}

	for(int i=1; i<=9; i++){
		 sumWayNum = (sumWayNum + stairWay[N][i])%mod;
	}

	cout << sumWayNum << '\n';
}
