#include<bits/stdc++.h>
using namespace std;


//https://leetcode.com/problems/fibonacci-number/description/
int fib(int n) {

    if(n<= 1)
    return n;

    return fib(n-1)+fib(n-2);
}

//https://leetcode.com/problems/valid-palindrome/description/
string reverses(string s){

    int l=0, h=s.size()-1;
    while(l<h){
        swap(s[l++],s[h--]);
    }
    return s;
}
bool isPalindrome(string s) {
    string formatedstring;
    for(auto i:s){

        if(i >='A' && i<='Z'){
            i +=32;
        }

        if(i >='A' && i<='Z' || i >='a' && i<='z' || i >='0' && i<='9'){
            formatedstring +=i;

        }
    }
    //cout <<formatedstring;
    //reversing

    string rev = reverses(formatedstring);

    //cout <<rev;
    if(rev == formatedstring) return true;

    return false;
}


int main(){

    string s;
    getline(cin,s);
    bool ans = isPalindrome( s);

    cout <<ans;
    return 0;
}