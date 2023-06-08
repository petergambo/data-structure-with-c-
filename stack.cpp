#include <iostream>
using namespace std;
int stack[100], n =3, top=-1;

void push(int val) {
    if(top>=n-1)
    cout<<"Stack Overflow"<<endl;
    else {
        top++;
        stack[top]=val;
    }
}

void pop(){
    if (top<=-1)
    cout <<"Stack Underflow"<<endl;
    else {
        cout <<"The popped element is "<<stack[top];
        cout <<endl;
        top--;
    }
}

void display() {
    if(top>=0){
        cout<<"Stack Element are: ";
        for (int i=top; i>=0; i--)
        cout<<stack[i]<<" ";
        cout<<endl;
    }
    else
    cout<<"Stack is empty"<<endl;

}

int main() {
    int ch, val;
    cout<<"How many items do you want to push into stack?"<<endl;
    cin>>n;
    // cout<<"3) Display stack"<<endl;
    // cout<<"4) Exit"<<endl;

    do {
        cout<<"-----------------------------------------------------------------------------------------------";
        cout<<"1) Push in stack"<<endl;
    cout<<"2) Pop from stack"<<endl;
    cout<<"3) Display stack"<<endl;
    cout<<"4) Exit"<<endl;
        cout<<"Enter choice: "<<endl;
        cin>>ch;
        switch(ch) {
            case 1: {
                cout<<"Enter value to be pushed"<<endl;
                cin>>val;
                push(val);
                cout<<"Added successfully!";
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                break;
            }
            default: {
                cout<<"Invalid choice"<<endl;
            }
        }
    }while (ch!=4);
    return 0;
    }
    