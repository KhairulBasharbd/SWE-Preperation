
#include<bits/stdc++.h>
using namespace std;

//------------------------Quick Sort-----------------------------
int partitionindex(vector <int>&arr,int low,int high){

    int i =low, j =high, p =arr[high];
    while(i<j){
        while(arr[i]<= p && i<high){
            i++;
        }

        while(arr[j] > p && j>low){
            j--;
        }

        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[high],arr[i]);

    return i;
}


void quicksort(vector <int>&arr,int low,int high){


    if(low>=high) return;

    //  Finding the privot index
    int pindex = partitionindex(arr,low,high);
    //cout<<"index : "<<arr[pindex]<<endl;

    // Divide whole array according to partition 
    quicksort(arr,low, pindex-1);
    quicksort(arr,pindex+1,high);


}



//------------------------Merge Sort------------------------
void merge(vector <int> &arr,int low,int mid,int high){

    vector <int> temp;
    int left=low,right=mid+1;
    //Merging two subarray in ascending order and put into a temp array
    //arr[low....mid]
    //arr[mid+1....high]
    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(right<=high){
        temp.push_back(arr[right++]);
        //right++;
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
        //left++;
    }

// put the temp sort part into main array
    for(int i=low;i<=high;i++){
        arr[i]= temp[i-low];
    }
}
void mergesort(vector <int> &arr,int low,int high){

    //Divide by two
    if(low>=high){
        //cout<<" "<<arr[low];
        return;
    }
    int mid = (low+high) /2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    //cout<<"low "<<low<<" mid "<<mid<<" high "<<high<<endl;

    //Conquire and merge
    merge(arr,low,mid,high);


}

int main(){

    //vector <int> arr = {3,2,5,7,1,4,9,6,8};
    //vector <int> arr = {9,8,7,6,5,4,3,2,1};
    //vector <int> arr = {1,2,3,4,5,6,7,8,9};
    //vector <int> arr = {4,6,2,5,7,9,1,3,5};
    vector <int> arr = {4,1,3,9,7};


    int size = arr.size();
    int low=0,high = size-1;
    //mergesort(arr,low,high);

    quicksort(arr,low,high);
    for(int i:arr){
        cout<<i<<" ";
    }
}

