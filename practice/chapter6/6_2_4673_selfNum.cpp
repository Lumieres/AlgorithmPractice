#include <iostream>
#include <vector>
#define MAX 10001

using namespace std;

int d(int n){
	int x = n;
	do{
		x += n%10;
	} while((n/=10)!=0);
	return x;
}
int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num = 1;
	vector<int> arr;
	arr.assign(MAX, 1);
	for(int i=0; i<MAX; i++){
		num = d(i);
		if(num>=MAX) continue;
		arr[num] = 0;
	}

	for(int i=1;i<MAX;i++){
		if(arr[i]>0) cout << i << "\n";  
	}

}
