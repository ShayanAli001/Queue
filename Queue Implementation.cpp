#include<iostream>
using namespace std;

class Queue
{
	private:
	int *arr;
	int	front;
	int Rear;
	int size;
	public:
		Queue(int n)
		{
			this->size =n;
			arr = new int[n];
			front = -1;
			Rear = -1;	
		}
		
void Enqueue (int x)
{
	if(Rear == size-1)
	{
		cout << "Queue is Full:" ;
	}
	
	else
	{
		arr[++Rear] = x;
	}
}


int Dequeue()
{
	if(front == Rear)
	{
		return true;
	}
	
	else
	{
		int x = arr[++front];
		return x;
	}
	
	
}






bool isempty()
{
	if(Rear == front)
	{
	 	return true;
	}
	
	else
	{
		return false;
	}
}

int top()
{
	if(Rear == front )
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
	Queue q(5);
	
	
	
	q.Enqueue(1);
	q.Enqueue(2);
	q.Enqueue(3);
	q.Enqueue(4);
	q.Enqueue(5);
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	q.Dequeue();
	cout << q.top() << endl;
	
	if(q.isempty())
	{
		cout << "Queue Is Empty:";
	}
	else
	{
		cout << "Queue Is Not Empty:";
	}

	







	
	
}