#include <iostream>

using namespace std;

#define INIT -100 

int num, a, b, c;
int arr[101][101][101];

int w(int a, int b, int c) {
	int i,j,k,l;

	if(a<=0 || b<=0 || c<=0) return 1;

	if(arr[a][b][c] != INIT) return arr[a][b][c];

	if(a>20 || b>20 || c>20) {
		i = arr[20][20][20] = arr[20][20][20]!= INIT ? arr[20][20][20] : w(20,20,20);
		return i;
	}

	if(a<b && b<c) {
		i = arr[a][b][c-1] = arr[a][b][c-1] != INIT ? arr[a][b][c-1] : w(a,b,c-1); 
		j = arr[a][b-1][c-1] = arr[a][b-1][c-1] != INIT ? arr[a][b-1][c-1] : w(a,b-1,c-1); 
		k = arr[a][b-1][c] = arr[a][b-1][c] != INIT ? arr[a][b-1][c] : w(a,b-1,c); 
		return i+j-k;
	}
	else {
		i = arr[a-1][b][c] = arr[a-1][b][c] != INIT ? arr[a-1][b][c] : w(a-1,b,c); 
		j = arr[a-1][b-1][c] = arr[a-1][b-1][c] != INIT ? arr[a-1][b-1][c] : w(a-1,b-1,c); 
		k = arr[a-1][b][c-1] = arr[a-1][b][c-1] != INIT ? arr[a-1][b][c-1] : w(a-1,b,c-1); 
		l = arr[a-1][b-1][c-1] = arr[a-1][b-1][c-1] != INIT ? arr[a-1][b-1][c-1] : w(a-1,b-1,c-1); 
		return i+j+k-l;
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for(int i=0; i<101; i++) {
		for(int j=0; j<101; j++) {
			for(int k=0; k<101; k++) {
				arr[i][j][k] = INIT;
			}
		}
	}
	while(1){
		cin >> a >> b >> c;
		if(a==-1 && b==-1 && c==-1) break;
		num = w(a,b,c);
		cout << "w(" << a << ", " << b << ", " << c << ") = " << num << '\n';
	}	

}
