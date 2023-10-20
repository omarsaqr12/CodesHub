// here we assume the array is sorted ascendingly 
// we can replace the array with a vector but we will have to change the parameters of the function
#include <iostream>
int normal_binary_search(int arr[],int low, int high, int target){
	int mid;
	while(high>=low){ // to include the case when there is only one element in the array
		mid=low+(high-low)/2;
		if(arr[mid]==target){return mid;}
		else if(arr[mid]>target){high=mid-1;}
		else{low=mid+1;}
	}
	return -1;
}

int main()
{

}

