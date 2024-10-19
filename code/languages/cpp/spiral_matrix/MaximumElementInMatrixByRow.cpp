#include<bits/stdc++.h>
using namespace std;

const int N = 4;

void printArray(int result[], int no_of_rows) {
	for (int i = 0; i < no_of_rows; i++) {
		cout<< result[i]<<"\n";
	}
}

void maxelement(int no_of_rows, int arr[][N]) {
	int result[no_of_rows];
	for (int i = 0; i < no_of_rows; i++) {
		int max = *max_element(arr[i], arr[i]+N);
		result[i] = max;
	}
	printArray(result,no_of_rows);
}

int main() {
	int arr[][N] = { {3, 4, 1, 8},
					{1, 4, 9, 11},
					{76, 34, 21, 1},
					{2, 1, 4, 5} };
	maxelement(4, arr);
	return 0;
}
