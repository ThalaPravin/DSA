#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int element){
	
	int start =0;
	int end= n-1;
	int mid = (start +end)/2;
	
	while(start<=end){
		
		if(arr[mid]==element){
			return mid;
		}
		
		else if( element< arr[mid]) {
			end= mid-1;
		}
		 
		else{
			start= mid+1;
		}
		
		mid= (start+end)/2;
	}
	
	return -1;
}

int main(){
	
	int arr[] = {2,3,4,5,7,8};
	
	int a=BinarySearch(arr, 6, 8);
	
	cout<<"Element 5 is present at index "<< a <<endl;;
	return 0;
}