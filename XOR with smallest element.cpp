/*

problem link - https://www.codechef.com/submit/SMALLXOR?tab=statement

problem statement - 

Problem
Chef has an array AA of length NN and an integer XX.

In one operation, Chef does the following:

Find the smallest element in the current array. Let this be SS.
Next, pick any one index ii such that A_i = SA 
i
​
 =S
Finally, replace A_iA 
i
​
  with A_i \oplus XA 
i
​
 ⊕X
Here \oplus⊕ denotes the bitwise XOR operation.

For example, if A = [1, 1, 2]A=[1,1,2] and X = 4X=4, then in one move Chef can turn the array into either [5, 1, 2][5,1,2] or [1, 5, 2][1,5,2].

Chef performs this operation exactly YY times. Let BB be final array obtained.

Output the array BB in sorted order. Note that under this restriction, the output is unique.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains three space-separated integers NN, XX, and YY.
The second line contains NN space-separated integers denoting the array AA.
Output Format
For each test case, output array BB in sorted order.




*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main() {
	// your code goes here
	
	ll t;
	std::cin >> t;
	
	while(t--){
	    ll n,x,y;
	    std::cin >> n>>x>>y;
	    
	    vector<ll> arr(n);
	     priority_queue<ll ,vector<ll>, greater<ll>> pq;
	    for(ll i = 0 ; i < n ; i++){
	        std::cin >> arr[i];
	        pq.push(arr[i]);
	    }
	    
	    
	    
	    ll n1 = min(n+1 , y);
	    
	    for(int i= 0 ; i < n1 ; i++){
	        ll top = pq.top();
	        pq.pop();
	        top = top^x;
	        pq.push(top);
	    }
	    
	    if(n1 < y){
	        ll dif = y -n1;
	        if(dif%2) {
	             ll top = pq.top();
	        pq.pop();
	        top = top^x;
	        std::cout << top <<" ";
	        }
	    }
	    
	    while(!pq.empty()){
	         ll top = pq.top();
	        pq.pop();
	        cout<<top<<" ";
	    }
	    cout<<"\n";
	    
	   
	}
	return 0;
}
