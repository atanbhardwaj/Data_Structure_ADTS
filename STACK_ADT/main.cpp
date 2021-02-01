#include <iostream>
template< class T>
struct STACK
{
    T size;
    T *S;
    T top;
    STACK()
    {
        top = -1;
        SIZE();
        S = new T[size];
    }
    STACK(int &size)
    {
        top = -1;
        this->size = size;
        this->S = new T[this->size];
    }
    void SIZE(int size = 0) {
        this->size = size;
    }
    void PUSH(T val)
    {
        if(top==size)
            std::cout<<"Stack is full";
        S[++top] = val;
    }
    void display()
    {
        for(int i = top; i>=0;i--)
            std::cout<<S[i]<<"\n";
    }
    T POP()
    {
        if(top==-1)
            return -1;
      return S[top--];
    }
    bool EMPTY()
    {
        return top == -1;
    }

    bool FULL()
    {
        return top >= (size - 1);
    }
    T TOP()
    {
        if( top!=-1 && top<size)
            return S[top];
        return -1;
    }
    T PEEK(int index)
    {
        if(index>=-1 && index < size)
            return S[index];
        return -1;
    }

};


int main() {
    STACK<int> s;
    //Define Stack Size
    s.SIZE(5);
    //Push Elements into the stack.
    s.PUSH(1);
    s.PUSH(2);
    s.PUSH(3);
    //Display Stack
    s.display();
    //Pop from the stack
    std::cout<<s.POP();
    std::cout<<s.POP();
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<s.top;
    std::cout<<"\n";
    std::cout<<"\n";
    std::cout<<"\n";
    //Check If STACK is EMPTY
    std::cout<<"Empty ?"<<s.EMPTY();

    //PEEK

    std::cout<<s.PEEK(2);

    //IS FULL
    std::cout<<"\n is full ? "<<s.FULL();

    //
    int x = s.TOP();
    std::cout<<"\nx "<<x;
    
    return 0;
}
