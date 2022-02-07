#include <iostream>

using namespace std;

int N,M;
int MaxNum = 2500;

int getNumSquare(int x, int y, string arr[], bool isB){
	int cnt=0;
	if(x+8 > N || y+8 > M) return MaxNum;
	if(isB){
		for(int i=x; i<x+8; i++){
			for(int j=y; j<y+8; j++){
				if(i%2==1 && j%2==1 && arr[i].at(j) == 'W') cnt++;
				if(i%2==1 && j%2==0 && arr[i].at(j) == 'B') cnt++;
				if(i%2==0 && j%2==1 && arr[i].at(j) == 'B') cnt++;
				if(i%2==0 && j%2==0 && arr[i].at(j) == 'W') cnt++;
			}
		}
	}
	else{
		for(int i=x; i<x+8; i++){
			for(int j=y; j<y+8; j++){
				if(i%2==1 && j%2==1 && arr[i].at(j) == 'B') cnt++;
				if(i%2==1 && j%2==0 && arr[i].at(j) == 'W') cnt++;
				if(i%2==0 && j%2==1 && arr[i].at(j) == 'W') cnt++;
				if(i%2==0 && j%2==0 && arr[i].at(j) == 'B') cnt++;
			}
		}
	}
	return cnt;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	string arr[N];

	for(int t=0; t<N; t++){
		cin >> arr[t];
	}

	int cntPaint, minCnt = MaxNum; 
	for(int i=0; i+8<=N; i++){
		for(int j=0; j+8<=M; j++){
			cntPaint = getNumSquare(i,j,arr, true);
			if(minCnt>cntPaint) minCnt = cntPaint; 
			cntPaint = getNumSquare(i,j,arr, false);
			if(minCnt>cntPaint) minCnt = cntPaint; 
		}
	}
	cout << minCnt << "\n";
}
