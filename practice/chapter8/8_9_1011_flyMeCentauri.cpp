#include <iostream>
#include <cmath>

using namespace std;

int T;
long long input,rest,answer,temp,X,Y,N;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>T;

	while(T--){
		cin>>X>>Y;
		input = Y-X;
		if(input == 0 || input == 1) answer = input;
		else {
			N = 1;
			temp = N;
			while((temp+1)*(temp+2) < input){
				temp++;
			}
			N = temp;
			rest = input - N*(N+1);
			if(rest <= N+1) answer = (N+1)*2-1;
			else answer = (N+1)*2;
		}
		cout<<answer<<"\n";
	}
}
