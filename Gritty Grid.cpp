/*
problem link - https://www.codechef.com/submit/GRITGRID?tab=statement
problem statement

Alice and Bob are trapped in a grid having NN rows and MM columns. Alice is currently at cell (1, 1)(1,1) and Bob is at cell (N, M)(N,M) and they both want to meet each other at any common cell. But they have some restrictions in the way they can move and meet:

A step is defined as moving to an adjacent cell from the current cell that the person is in. So in a single step, if a person is at (X, Y)(X,Y) they may move to any one of the following cells, provided that they are inside the grid's boundaries - (X + 1, Y)(X+1,Y), (X, Y + 1)(X,Y+1), (X - 1, Y)(X−1,Y), (X, Y - 1)(X,Y−1).

A move for Alice is defined to be exactly XX steps. And a move for Bob is defined to be exactly YY steps.

They can only meet at the common cell after Alice has just completed her move i.e. they should not meet in the middle of anyone's move or at the end of Bob's move. The first time that they meet should be right after a move of Alice, and they stop moving after that.

Alice makes a move first, then Bob makes a move, and they alternate like this.

Alice and Bob want to know if it is possible to meet with these restrictions. Please help Alice and Bob by telling them whether they would be able to meet each other if they stick to these restrictions.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing four integers: NN, MM, XX and YY denoting the number of rows, number of columns, number of steps in Alice's one move and the number of steps in Bob's one move respectively.
Output Format
For each test case, output in a single line \texttt{YES}YES if they would be able to meet each other at a common cell, else output \texttt{NO}NO.

You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

Constraints
1 \leq T \leq 10001≤T≤1000
2 \leq N, M \leq 10^62≤N,M≤10 
6
 
1 \leq X, Y \leq 10^91≤X,Y≤10 
9
 
Subtasks
Subtask 1 (10 points): 1 \leq M \leq 101≤M≤10
Subtask 2 (20 points): The sum of NN across all test cases won't exceed 2020.
Subtask 3 (70 points): No further constraints.
Sample 1:
Input
Output
4
2 2 2 1
2 2 1 1
2 2 1 2
2 3 3 3
Yes
No
Yes
Yes




*/



#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	// your code goes here
	
	ll t;
	std::cin >> t;
	
	while(t--){
	    
	    ll n,m,x,y;
	    std::cin >> n>>m>>x>>y;
	  ll d = n + m -2;
	  
	  if(d%2 == x% 2 || d%2 == y%2) std::cout << "YES" << std::endl;
	   else std::cout << "NO" << std::endl;
	}
	return 0;
}
