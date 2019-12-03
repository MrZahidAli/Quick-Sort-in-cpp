#include<iostream>
using namespace std;

	int partition(int arr[], int s, int e){
		int pivot = arr[e];
		
		int i = (s - 1);
		for(int j = s; j <= e -1; j++){
			
			if(arr[j] < pivot){
				i++;
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
		int temp2 = arr[e];
		arr[e] = arr[i+1];
		arr[i+1] = temp2;
		return i+1;
	}
	int quickSort(int arr[], int s, int e){
		if(s < e){
			int r = partition(arr, s, e);
			quickSort(arr, s, r-1);
			quickSort(arr, r+1, e);
		}
	}

int main(){
	int arr[5] = {75, 26, 15, 67, 85};
	int s = 0;
	int e = 4;
	quickSort(arr, s, e );
	for(int i = 0; i <= 4; i++){
		cout << arr[i] << endl;
	}
	return 0;
}
