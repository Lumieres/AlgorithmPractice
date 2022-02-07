#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int a, b;
vector<pair<int,int>> v;

bool cmp(pair<int,int> a, pair<int,int> b){
	if(a.first==b.first) return a.second < b.second;
	else return a.first < b.first;
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b;
		v.push_back(pair<int,int>(a,b));
	}

	sort(v.begin(),v.end(),cmp);

	for(int i=0; i<N; i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}

}
