
#include<bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0
void frequencyCount(vector<int>& arr, int N, int P) {
       
    vector<int> freq(P+1,0);
       
    for(int i=0;i<N;i++){
        freq[arr[i]] +=1;
    }
        
    for(int i=0;i<N;i++){

        if(i >= P) arr[i]=0;

        else arr[i]=freq[i+1];
    }
}


void highestlowestfrequencycount(vector<int>& arr, int n){
    unordered_map<int,int>freqcount;

    for(int i=0;i<n;i++){
        freqcount[arr[i]] +=1;
    }

    int min= INT_MAX;
    int max= INT_MIN;

    for(auto pair:freqcount){
        if(pair.second<min)  min= pair.second;
        if(pair.second >max) max = pair.second;
    }

    cout <<"Highest frequency : "<<max<<endl;

    cout <<"Lowest frequency : "<<min<<endl;


}


int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
  
    highestlowestfrequencycount(arr,n);


    //cout <<ans;
    return 0;
}