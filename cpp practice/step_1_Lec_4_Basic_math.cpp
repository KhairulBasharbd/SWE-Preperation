#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/problems/count-digits5716/1
int countDigits(int n){

	int ans = 0;
	int number = n;
	while(n>0){
		
		int d = n % 10;
		if(d!=0 && number % d == 0) ans++;
		n /=10;

	}
	return ans;

}

//https://leetcode.com/problems/reverse-integer/description/
int reverse(int n) {
    int ans=0;

    int number = n;
	while(n!=0){
		
		int d = n % 10;
        if (ans > INT32_MAX/10 || ans < INT32_MIN/10) return 0;
        ans = ans*10 + d;
		n /=10;
	}
    return ans;
}

//https://leetcode.com/problems/palindrome-number/description/
bool isPalindrome(int x) {
    int n=x;
    long long ans=0;
    while(x!=0){
        int d = x%10;
        ans = ans*10 + d;
        x/=10;

    }
    //cout<<ans;
    if(ans<0) ans = -ans;
    return n==ans ?true:false;
         
}

//https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
bool checkArmstrong(int n){
	int ans;
	int x=n;
	int c = log10(n) +1;
	while(n>0){
		int d= n%10;

		ans = ans + pow(d,c);
		n = n/10;
	}

	//cout<<ans;

	return x == ans?true:false;
}

//https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
long long sumOfAllDivisors(int n){
	long long ans = 0;

	for(int i=1;i<=n;i++){
        //cout<<"the divisor sum of : "<<i<<endl;
		int x = sqrt(i);

		for(int j=1;j<=x;j++){

			if(i%j == 0){
				ans += j;
                if(i/j !=j ){
                    ans += i/j;
                }
			}

		}
        //cout<<endl;

	}


	return ans;	
}

//https://www.naukri.com/code360/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
bool isPrime(int n)
{
    if(n<=1) return false;
    //cout<<"a";
	for(int i=2;i<=sqrt(n);i++){

		if(n%i ==0) return false;
	}
	return true;
}

//The Euclidean Algorithm for finding GCD
long long gcd(long long a, long long b){

    //long long g;
    while(a>0 && b>0){

        if(a>b) a=a-b;
        else b = b-a;
    }

    if(a==0) return b;

    return a;
}

//https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
vector<long long> lcmAndGcd(long long a, long long b) {
        
    vector<long long> lcmgcd;
    long long gcd=1,lcm;
    long long m = min(a,b);
        
    for(int i=1;i<=m; i++){
        if(a%i ==0 && b%i ==0){
            gcd = i;

        }
    }
    long long mul = a*b;
    lcm = mul / gcd;
    lcmgcd.push_back(lcm);
    lcmgcd.push_back(gcd);
        
    return lcmgcd;
}

int main(){
    int a= 9, b=27;

    long long ans= gcd(a,b);
    //cout <<"LCM : "<<ans[0]<<" and GCD : "<<ans[1];
    cout<<ans;
    return 0 ;
}