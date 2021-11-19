#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];

	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	int i = 0;

	int j = 0;

	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}


void mergeSort(int arr[],int low,int end){
	if(low>=end){
		return ;
	}
	int mid = (low+end-1)/2;
	mergeSort(arr,low,mid);
	mergeSort(arr,mid+1,end);
	merge(arr,low,mid,end);
}
int main()
{    int size;
cout<<"\t\tTHIS THE PROGRAM OF MERGE SORT,HERE YOU HAVE TO MERGE TWO VALUES"<<endl;
cout<<"\t\tEnter the size of the array"<<endl;
cin>>size;
int arr[size];
cout<<"Enter Elements"<<endl;
	for (int i = 0; i < size; i++)
		cin>>arr[i];
		cout << "Given array is \n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	mergeSort(arr, 0, size - 1);
	cout << "\nSorted array is \n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
			return 0;
}


