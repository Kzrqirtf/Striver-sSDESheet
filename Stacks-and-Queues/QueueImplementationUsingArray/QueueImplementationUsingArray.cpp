class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = -1;
		rear = -1;
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{

		rear++;
		arr.push_back(e);
		if(front==-1)front=0;
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		int x;
		if(front>rear || (front==-1 && rear==-1))return -1;
		else{
			x=arr[front];
			front++;
		}
		return x;
	}
};