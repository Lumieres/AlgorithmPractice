#include <iostream>
#include <string.h>

using namespace std;

int n,T;
int num = 10000;
int idx = 0;


int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	bool* prime = new bool[num+1];
	memset(prime, 1, sizeof(bool)*(num+1));
	
	prime[0]=false;
	prime[1]=false;
	for(int i=2; i<=num; i++){
		if(prime[i] == true){
			for(int j=i*2; j<=num; j+=i){
				prime[j] = false;
			}
		}
	}

	cin >> T;
	while(T--){
		cin >> n;
	       for(int i=0; i<=n/2; i++){
		       idx = i;
		       if(prime[n/2-idx] == true && prime[n/2+idx] == true){
			       break;
		       }
	       }	       
	       cout << n/2-idx << " " << n/2+idx << "\n";
	}
}
