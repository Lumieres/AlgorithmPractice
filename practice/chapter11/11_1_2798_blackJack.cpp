#include <iostream>

using namespace std;

int sorted[10001];
int N,M;
int answer;

void merge(int a[], int m, int middle, int n){
	int i = m;
	int j = middle + 1;
	int k = m;
	while(i <= middle && j <= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}
	if(i>middle) {
		for(int t=j; t<=n; t++){
			sorted[k] = a[t];
			k++;
		}
	} else {
		for(int t=i; t<=middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	for(int t=m; t<=n; t++){
		a[t] = sorted[t];
	}
}

void mergeSort(int a[], int m, int n){
	if(m<n) {
		int middle = (m+n)/2;
		mergeSort(a,m,middle);
		mergeSort(a,middle+1,n);
		merge(a,m,middle,n);
	}
}

int main(void){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;
	int arr[N];
	for(int t=0; t<N; t++){
		cin >> arr[t];
	}
	mergeSort(arr,0,N-1);
	int a = 0;
	int b = 1;
	int c = N-1;
	while(a < N-2){
		while(b<c){
			if(arr[a]+arr[b]+arr[c] == M){
				answer = M;
				cout << answer << "\n";
				return 0;
			}
			else if(arr[a]+arr[b]+arr[c]>M){
				c--;
			}
			else if(a+b+c<M){
				if(answer < arr[a]+arr[b]+arr[c]) answer = arr[a]+arr[b]+arr[c];
				b++;
			}
		}
		a++;
		b = a+1;
		c = N -1;
	}
	cout << answer << "\n";
}
