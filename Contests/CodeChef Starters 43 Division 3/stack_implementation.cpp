#include<bits/stdc++.h>

using namespace std;

class Stack{
    // properties
    int *arr;
    int top;
    int size;

    public:

    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int ele){
        if(size - top > 1){
            top++;
            arr[top] = ele;
        }
        else{
            cout << "stack overflow!" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        } else {
            cout << "stack underflow!" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        } else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        } else {
            return false;
        }
    }

};

int main (){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(20);
    st.pop();
    cout << st.peek() << endl;
}