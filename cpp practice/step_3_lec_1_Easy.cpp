#include<bits/stdc++.h>
using namespace std;

 void rotate(vector<int>& arr, int k) {

    int n=arr.size();
    if (k>n) k = k%n;
    k = abs(n-k);
    cout<<k<<endl;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    for(auto i:arr){
        cout<<i<<" ";
    }

        
}
//https://leetcode.com/problems/rotate-array/description/
void left_rotate_by_k(vector <int> &arr,int k){
    int n=arr.size();
    vector<int>a(n);
    if (k>n) k = k%n;
    k = abs(n-k);

    for(int i=0;i<n;i++){
        a[i] = arr[(i+k) % n];
    }
    for(auto i:a){
        cout<<i<<" ";
    }


}
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
int remove_duplicate(vector<int> &arr){
        int i= 0;
        for(int j=1;j<arr.size();j++){
            if(arr[i] != arr[j]){
                arr[i+1] = arr[j];
                i++;
            }
        }
        for(int a=i+1;a<arr.size();a++){
            arr[a]=0;
        }
        return i+1;

}
//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
bool check(vector<int>& arr) {
        int c=0;
        int s = arr[0];
        for(int i=1;i<arr.size();i++){
            if((arr[i] - arr[i-1]) >=0 ) {
                cout<<"i : "<<i<<endl;
                if(c==0) continue;
                else if( arr[i]<=s) continue;
                else return false;
            }
            else {
                c++;
                if(c==1 && arr[i]<=s){
                    continue;

                }
                else return false;

            }
        }
        return true;
    }
bool issorted(vector<int> &arr){
    for(int i=0;i<arr.size()-1;i++){
        //cout<<arr[i+1] - arr[i]<<" ";
        if((arr[i+1] - arr[i]) >=0) continue;
        else  return false;
    }
    return true;
}
int second_smallest_element(vector<int> &arr){
    int sm2 = 1000000, sm = arr[0];
    for(int i=1;i<arr.size();i++){
        // checking whether an element is smaller than  the current small
        if(sm>arr[i]){
            sm2=sm;
            sm = arr[i];
        }
        // checking whether the element is equal to the previous small
        else if(sm==arr[i]) sm2=sm2;
        //checking whether an element is greater than small but smaller then 2nd small.
        else if(sm2>arr[i]){
            sm2=arr[i];
        }
    }
    return sm2;
}
int second_largest_element(vector<int> &arr){
    int lg2 = -1, lg = arr[0];
    for(int i=1;i<arr.size();i++){
        // checking whether an element is greter than  the large
        if(lg<arr[i]){
            lg2=lg;
            lg = arr[i];
        }
        // checking whether the element is equal to the previous large
        else if(lg==arr[i]) lg2=lg2;
        //checking whether an element is smaller than large but greater then 2nd large.
        else if(lg2<arr[i]){
            lg2=arr[i];
        }
    }
    return lg2;
}
int largest_element(vector<int> &arr){

    int lg = arr[0];
    for(int i=1;i<arr.size();i++){
        if(lg<arr[i]){
            lg = arr[i];

        }
    }
    return lg;
}

int main(){

    //vector<int> arr ={2,5,25,4,9,6,10,13,20,19};
    //vector<int> arr ={9,8,7,6,5,4,3};
    vector<int> arr ={1,2,3,4,5,6,7};
    
    int n= arr.size();

    //int l =  second_largest_element(arr);
   // int s = second_smallest_element(arr);
   // bool result  = check(arr);
    //int result = remove_duplicate(arr);
    int k=3;
    //left_rotate_by_k(arr, k);
    rotate(arr,k);
    //cout<<"Number of unique elements : "<<result<<endl;

}
