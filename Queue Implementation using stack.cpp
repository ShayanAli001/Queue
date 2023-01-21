#include<iostream>
#include<stack>
using namespace std;

class Queue
{
	public:
	stack<int>s1;
	stack<int>s2;
	
	void push(int val)
	{
		s1.push(val);
	}
	
	int pop()
	{
		if(s1.empty() && s2.empty())
		{
			cout << "Queue is empty";
		}
		
		if(s2.empty())
		{
			while(!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		
		int toop = s2.top();
		s2.pop();
		return toop;
		 
	}
	
	
	bool empty()
	{
		if(s1.empty() && s2.empty())
		{
			cout << "Queue is empty :" << "\n";
			return true;
		}
		else 
		{
			cout << "Queue is not empty :" << "\n";
			return false;
		}
	}
};



int main()
{
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	//cout << q.pop() << "\n";
	cout << q.pop() << "\n";
	cout << q.pop() << "\n";
	cout << q.pop() << "\n";	
	cout << q.empty() ;
}