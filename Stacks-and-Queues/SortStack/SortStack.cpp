#include <bits/stdc++.h> 
using namespace std;
void insertAtCorrectPlace(stack<int> &s,int x)
{
	if(s.empty()||s.top()<=x)
		s.push(x);
	else{
		int a = s.top();
		s.pop();
		insertAtCorrectPlace(s,x);
		s.push(a);
	}
}
void sortStack(stack<int> &stack)
{
	if(!stack.empty())
	{
		int x = stack.top();
		stack.pop();
		sortStack(stack);
		insertAtCorrectPlace(stack,x);
	}
}