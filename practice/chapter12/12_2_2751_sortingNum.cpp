#include <iostream>

using namespace std;

int N;
int sorted[1000001];

void quickSort(int a[], int left, int right){
	if(left >= right) return;
	int key = left;
	int i = left+1;
	int j = right;
	int tmp;
	while(i<=j){
		while(a[i] <= a[key] && i<=right) i++;
		while(a[j] > a[key] && j>left) j--;
		if(i<j){
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
		else{
			tmp = a[j];
			a[j] = a[key];
			a[key] = tmp;
		}
	}
	quickSort(a, left, j-1);
	quickSort(a, j+1, right);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	int arr[N];

	for(int i=0; i<N; i++) cin >> arr[i];

	quickSort(arr,0,N-1);

	for(int i=0; i<N; i++) cout << arr[i] << "\n";
}
