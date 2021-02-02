#include <iostream>

template<class T>
class QUEUE
{
private:
    int size;
    T *A;
    int front;
    int back;
public:
    QUEUE()
    {
        front = -1;
        back = -1;
        A = new T[0];
    }
    QUEUE(int size)
    {
        front = -1;
        back = -1;
        this->size = size;
        A = new T[size];
    }

    void SIZE(int size)
    {
        this->size = size;
        A = new T[size];
    }

    void PUSH(T val)
    {
        if(back==-1 && front==-1)
        {
            A[++back] = val;
            ++front;
        }
        else
            A[++back] = val;
    }
    void POP()
    {
        for(int i = front; i < back;i++)
        {
            A[i] = A[i+1];
        }
        back--;
    }
    int ELEMENTS()
    {
        int count = 0;
        for(int i=front;i<=back;i++)
        {
            count++;
        }
        return count;
    }
    bool EMPTY()
    {
        return front == -1 && back == -1;
    }
    bool FULL()
    {
        return back == (size-1);
    }

    void DISPLAY()
    {
        for(int i=front; i<=back;i++)
            std::cout<<A[i]<<" ";
    }
};

int main() {
    QUEUE<int> queue(10);
    //Push Values in QUEUE
    queue.PUSH(1);
    queue.PUSH(2);
    queue.PUSH(3);

    // Check size
    std::cout<<"Elements: "<<queue.ELEMENTS();


    //Is queue empty
    std::cout<<"\nEmpty Queue? "<<queue.EMPTY();

    //Is queue full
    std::cout<<"\nFull Queue? "<<queue.FULL();
    std::cout<<"\n";
    // Pop value from queue
    queue.POP();

    //Display the Queue
    queue.DISPLAY();
    return 0;
}
