#include <iostream>
#include <set>
#include <string>

using namespace std;

struct myorder {
	bool operator() (const string& a,const string& b) const{
		if(a.size()==b.size()) return a < b;
		else return a.size() < b.size();
	}
};

int N;
set<string,myorder> s;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	string input;

	for(int i=0; i<N; i++){
		cin >> input;
		s.insert(input);
	}

	for(auto& str : s ){
		cout << str << "\n";
	}


}
