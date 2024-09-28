#include<iostream>
#include<algorithm>
using namespace std;

int bs(const int arr[],int n,int t){
	int l = 0;
	int r = n - 1;
	
	while(l<=r){
		int mid = l + (r-1) / 2;
		if(arr[mid] == t)
			return mid;
		else if(arr[mid] < t)
			l = mid + 1;
		else 
			r = mid - 1;
	}
	return -1;
}

int main(){
	int n,t;
	cout << "\t\tBINARY SEARCH\t\t\n\n";
	cout << "Enter the Number of Elements: ";
	cin >> n;
	int arr[n];
	cout << "Enter the Elements: " << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr,arr+n);
	cout << "Enter Target Element: ";
	cin >> t;
	int r = bs(arr,n,t);
	if(r == -1)
		cout << "Element not Found!";
	else
		cout << "Element Found at index[" << r << "]" << endl;
	return 0;
}
