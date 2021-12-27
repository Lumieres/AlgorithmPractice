#include <iostream>
#include <string>

using namespace std;

string A,B,answer;
int cnt = 1;
int lenMin,lenMax,lenA,lenB;

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin>>A>>B;
	lenMin = min(A.length(),B.length());
	lenMax = max(A.length(),B.length());
	lenA = A.length();
	lenB = B.length();
	int temp=0;
	
	while(lenMax-cnt >= 0){

		if(temp>=10) temp =1;
		else temp =0;

		if(lenMin-cnt >= 0)
			temp += A.at(lenA-cnt)-'0' + B.at(lenB-cnt)-'0';
		else if(lenA>lenB)
			temp += A.at(lenA-cnt)-'0';
		else if(lenB>lenA)
			temp += B.at(lenB-cnt)-'0';

		if(lenMax-cnt > 0)
			answer = to_string(temp%10) + answer;
		else 
			answer = to_string(temp) + answer;
		cnt++;
	}
	
	cout << answer << "\n";

}
