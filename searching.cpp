#include<iostream>
using namespace std;

int linearSearch(int arr[] ,int n, int target) {
   for(int i = 0; i < n; i++) {
   	if(arr[i] == target) {
   	    return i;
   	}
   }
   return -1;
}

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    
    while(left <= right) {
    	int mid = left + (right - left) / 2;
    	if(arr[mid] == target) {
    	    return mid;
    	} else if (arr[mid] < target) {
    	    left = mid + 1;
    	} else {
    	    right = mid - 1;
    	}
    	return -1;
    }
}
int main() {
   int n;
   cout<<"Enter number of elements : ";
   cin>>n;
   
   int arr[n];
   
   cout<<"Enter "<<n<<" elements : ";
   for(int i = 0; i < n; i++) {
       cin>>arr[i];
   }
   
   cout<<"Elements are : ";
   for(int i = 0; i < n; i++) {
   	cout<<arr[i]<<" ";
   }
   
   cout<<"----CHOICES----\n";
   cout<<"1.Linear Search\n";
   cout<<"2.Binary Search\n";
   
   int ch;
   cout<<"Enter your choice : ";
   cin>>ch;
   
   int target;
   cout<<"Enter element to search : ";
   cin>>target;
                                          
   switch(ch) {
      case 1: cout<<"Linear Search : "<<endl;
      	   cout<<"Found at index "<<linearSearch(arr,n, target);
	   break;
      	   
      case 2: cout<<"Binary Search : "<<endl;
      	   cout<<"Found at index "<<binarySearch(arr,n, target);
      	   break;
      	   
      default:
      	   cout<<"Invalid";
    }
    return 0;
}
