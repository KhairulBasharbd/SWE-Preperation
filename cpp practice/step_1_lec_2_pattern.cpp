#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){

    for(int i=0;i<n;i++){

        //space
        for(int j=n-1-i; j>0; j--){
            cout<<" ";
        }
        //char in single loop
        char c='A';
        int bp = (2*i) /2;
        for(int j=0;j<2*i + 1;j++){
            
            cout<<c<<" ";
            
            if(j< bp ){
                c++;
            }else c--;
        }
        // //char
        // char last;
        // for(char c='A';c<= 'A'+ i;c++){
        //     cout<<c;
        //     last = c;
        // }
        // //char
        // for(char c= last - 1 ;c>= 'A';c--){
        //     cout<<c;
        // }

        //space
        for(int j=n-1-i; j>0; j--){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n){

    
    for(int i=0;i<n;i++){
        char c = 'A'+ n-1;
        for(int j =0; j<i+1;j++){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
}

int main(){

    int n = 3;
    // cin>>n;

    pattern18(n);


    return 0;
}