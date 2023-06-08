#include <iostream>
using namespace std;
 
//declaration for new tree node
struct node  { 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
   
//allocates new node 
struct node* newnode(int data) { 
    // declare and allocate new node  
    struct node* node = new struct node(); 
    node->data = data;    // Assign data to this node
    // Initialize left and right children as NULL 
    node->left = NULL; 
    node->right = NULL; 
    return(node); 
} 

void create_tree()
{
    int input_value;

    cout<<"Enter head value: "<<endl;
    cin>>input_value;
    struct node *rootnode = newnode(input_value);  
    cout<<"General tree created is as follows:"<<endl;
    cout<<"\t\t\t "<<rootnode->data<<endl;
    cout<<"\t\t\t "<<"/ "<<"\\"<<endl; 
    cout<<"Enter Level 1 left value: "<<endl;
    cin>>input_value;
    rootnode->left        = newnode(input_value);
    cout<<"\t\t\t "<<rootnode->data<<endl;
    cout<<"\t\t\t "<<"/ "<<"\\"<<endl; 
    cout<<"\t\t\t"<<rootnode->left->data;
    cout<<endl;

    cout<<"Enter Level 1 right value: "<<endl;
    cin>>input_value;
    rootnode->right = newnode(input_value); 

            // Display full tree data
    cout<<"\t\t\t "<<rootnode->data<<endl; //Head
    cout<<"\t\t\t "<<"/ "<<"\\"<<endl;  // Ticks
    cout<<"\t\t\t"<<rootnode->left->data<<"  "<<rootnode->right->data; //Level 2 Data
    cout<<endl;

            cout<<"Enter Level 2 left-left value: "<<endl;
            cin>>input_value;
            cout<<endl; rootnode->left->left  = newnode(input_value); 
            cout<<"\t\t\t "<<rootnode->data<<endl; //Head
            cout<<"\t\t\t "<<"/ "<<"\\"<<endl;  // Ticks
            cout<<"\t\t\t"<<rootnode->left->data<<"  "<<rootnode->right->data<<endl; //Level 2 Data
            cout<<"\t\t\t"<<"/"<<endl;
            cout<<"\t\t      "<<rootnode->left->left->data;
            cout<<endl;
}
   
int main() { 
    int ch;
    cout<<"1) Create a Tree"<<endl;
    cout<<"2) Exit"<<endl;
  
  do {
    cout<<"Enter choice: "<<endl;
    cin>>ch;

    switch (ch) {
        case 1: {  
            create_tree();
            break;
        }

        case 2: {
        cout<<"Exit"<<endl;
         break;
        }
        default: {
            cout<<"Invalid choice"<<endl;
        }
        }
  }
  while (ch!=2);   
return 0; 
}