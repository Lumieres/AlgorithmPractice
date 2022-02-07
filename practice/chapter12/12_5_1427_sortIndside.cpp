#include <iostream>

using namespace std;

void quickSort(int a[], int left, int right){
	if(left>=right) return;

	int i = left+1;
	int j = right;
	int key = left;
	int tmp;
	while(i<=j){
		while(a[key]<=a[i] && i <= right) i++;
		while(a[key]>=a[j] && j>left) j--;
		if(i>j){
			tmp = a[key];
			a[key] = a[j];
			a[j] = tmp;
		}
		else{
			tmp = a[i];
			a[i] = a[j];
			a[j] = tmp;
		}
	}

	quickSort(a,left, j-1);
	quickSort(a,j+1, right);
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	cin >> input;
	int size = input.size();
	int arr[size];
	for(int i=0; i<size; i++){
		arr[i] = input.at(i)-'0';
	}
	quickSort(arr,0,size-1);
	for(int i=0; i<size; i++){
		cout << arr[i];
	}
	cout << "\n";
}
