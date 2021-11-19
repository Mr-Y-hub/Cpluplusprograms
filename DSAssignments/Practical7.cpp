#include<iostream> 
using namespace std; 
int binarySearch(int arr[], int p, int r, int num) { 
   if (p <= r) { 
      int mid = (p + r)/2; 
      if (arr[mid] == num)   
         return mid ; 
      if (arr[mid] > num)  
         return binarySearch(arr, p, mid-1, num);            
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num); 
   } 
   return -1; 
} 
int main() { 
   int arr[20];
   int n;
   cout<<"How many number of array you want to enter "<<endl;
   cin>>n; 
   cout<<"Enter the array";
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for (int i = 0; i < n-1 ; i++)
   {
       if (!(arr[i]<arr[i+1]))
       { 
           cout<<"Sort your array first"<<endl;
           exit(0);
       }
   }

   cout<<"Number to search"<<endl;
   int num;
   cin>>num; 
   int index = binarySearch (arr, 0, n-1, num); 
   if(index == -1)
      cout<< num <<" is not present in the array";
   else
      cout<< num <<" is present at index "<< index<<" in the array"; 
   return 0; 
}
