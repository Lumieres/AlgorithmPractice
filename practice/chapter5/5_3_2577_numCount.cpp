#include <iostream>

using namespace std;

int main(void){
	int a,b,c;
	cin >> a >> b >>c;
	int num = a*b*c;
	int arr[10] = {0, };
	while(num != 0){
		arr[num%10]++;;
		num /= 10;	
	}
	for(int i=0; i<10; ++i){
		cout << arr[i] << "\n";
	}
}
