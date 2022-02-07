#include <iostream>
#include <map>

using namespace std;

int N;
map<int, int> m;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	int tmp;
	int arr[N];
	for(int i=0; i<N; i++){
		cin >> tmp;
		m.insert(make_pair(tmp,i));
		arr[i] = tmp;
	}

	int index=0;
	for(auto iter=m.begin(); iter!=m.end(); iter++){
		iter->second = index++;
	}
	
	for(int i=0; i<N; i++){
		cout<< m[arr[i]] << ' ';
	}
	cout << '\n';
}
