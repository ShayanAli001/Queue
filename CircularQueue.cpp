#include<iostream>
using namespace std;


class circularqueue
{
	private:
		int *arr;
		int front;
		int rear;
		int length;
		
		public:
			circularqueue(int n)
			{
				arr = new int[n];
				this->length = n;
				front = -1;
				rear = -1;
				}	
	
	bool enqueue(int d)
	{
		if( (front==0 && rear == length-1 ) || (rear == front-1) % (length-1) )
		{
			cout << "Queue is full:" ;
		}
		
		else if(front == -1)
		{
			front = rear = 0;
			arr[rear] = d;
		}
		
		else if( (rear == length-1) && (front != 0) )
		{
			rear = 0;
			arr[rear] = d;
		}
		
		else
		{
			rear++;
			arr[rear] = d;
		}
		return true;
	}
	
	
	int deque()
	{
		int x = arr[front];
		arr[front] = -1;
		if(front == -1)
		{
			cout << "Queue is empty ";
		}
		
		else if(front == rear)
		{
			front = rear = -1;
		}
		
		else if(front == length-1)
		{
			front = 0;
		}
		
		else
		{
			front++;
		}
		return x;
	}
	int top()
{
	if(rear == front )
	{
		return true;
	}
	else
	{
		return arr[++front];
	}
}
	
};




int main()
{
	circularqueue s(4) ;
   	s.enqueue(7);
	cout<<s.top();