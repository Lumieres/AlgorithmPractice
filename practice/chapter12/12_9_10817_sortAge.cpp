#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int N;
vector<pair<int,string>> v;

bool cmp(pair<int,string> a, pair<int,string> b){
	return a.first < b.first;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	pair<int,string> tmp;
	for(int i=0; i<N; i++){
		cin >> tmp.first >> tmp.second;
		v.push_back(tmp);
	}

	stable_sort(v.begin(), v.end(), cmp);

	for(int i=0; i<N; i++){
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}
