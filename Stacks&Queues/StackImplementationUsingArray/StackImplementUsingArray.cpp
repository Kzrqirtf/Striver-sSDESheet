class Stack {

    int arr[10001];

    int index;

    int size;

    

public:

    

    Stack(int capacity) {

        // Write your code here.

        this->size=capacity;

        arr[size];

        index=-1;

    }

 

    void push(int num) {

        // Write your code here.

        if(size-index>1){

            index++;

            arr[index]=num;

        }else{

            return;

        }

    }

 

    int pop() {

        // Write your code here.

        if(index>=0){

            int ans=arr[index];

            index--;

            return ans;

        }else{

            return -1;

        }

    }

    

    int top() {

        // Write your code here.

        if(index>=0){

            int ans=arr[index];

            return ans;

        }else{

            return -1;

        }

    }

    

    int isEmpty() {

        // Write your code here.

        if(index==-1){

            return 1;

        }else{

            return 0;

        }

    }

    

    int isFull() {


        if(index==size-1){

            return 1;

        }else{

            return 0;

        }

    }

    

};
