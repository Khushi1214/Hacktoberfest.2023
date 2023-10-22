// Without using stl and array implementation of queue
#include<iostream>
using namespace std;
class queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    queue(int size){
        this->size=size;
        arr= new int[size];
        front=0;
        rear=0;
    }
    void push(int data){
        if(rear==size){
            cout<<"q is full";
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(rear==front)
        {
            cout<<"q is empty";
        }
        else{
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    int getfront()
    {
        return arr[front];
    }
    int getsize(){
        if (rear==front)
        {
            
            return 0;
        }
        else{
        return rear-front;
        }
    }
};
int main(){
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"size of queue is"<< q.getsize();
    cout<<endl<<"front element is"<< q.getfront();
    //q.pop();
    //q.pop();
    cout<<endl<<"front element is"<<q.getfront();
    cout<<endl<<"size of queue is"<<q.getsize();
    //q.pop();
    //q.pop();
    cout<<endl<<"size of q is"<<q.getsize();
    q.push(50);
    cout<<endl<<"size of q is"<<q.getsize();
    
    q.push(60);
    cout<<endl<<"size of q is"<<q.getsize();
    
    
}
