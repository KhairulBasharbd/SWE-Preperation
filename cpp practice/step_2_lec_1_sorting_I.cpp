#include<bits/stdc++.h>
using namespace std;

//select the min/max one and sort
void selection_sort(vector <int> &arr){

    int min,n = arr.size(), idx;
    for(int i=0;i<n- 1;i++){
        min = arr[i];
        idx=i;

        for(int j=i+1;j<n;j++){
            if(min > arr[j]){
                min = arr[j];
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);

    }
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
}

//comparae two elements and swap
void bubble_sort(vector <int> &arr){

    int n = arr.size(), idx;
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }

        }
    }

    for(auto i: arr)
    {
        cout<<i<<" ";
    }


}

//insert a element into it's correct position
void insertion_sort(vector <int> &arr){
    int n=arr.size();
    for(int i=1;i<n;i++){

        int j=i;
        while(j>0 && arr[j-1] > arr[j]){
            
            swap(arr[j-1] , arr[j]);
            
            j--;
        }

    }
    for(auto i: arr)
    {
        cout<<i<<" ";
    }

}

int main(){
    vector<int> arr ={5,7,3,9,1};


    //selection_sort(arr);
    insertion_sort(arr);

    return 0;
}