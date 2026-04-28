#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
node(int val){
    data=val;
    next= NULL ;}};
     class stack{
        node*top;
        public:
        stack(){
            top=NULL;
        }
        void push(int val){
            node* newnode=new node(val);
            newnode->next=top;
            top=newnode;
            cout<<"value"<<val<<"is pushed to the stack ";
        }
        void pop(){
            if(top==NULL){
                cout<<"underflow:stack is empty";
                return;
            }
            node*temp=top;
            cout<<top->data<<"is popped ";
            top=top->next;
            delete temp;                       
        }
        void display(){
            if(top==NULL){
                cout<<"stack is empty!!";}
                node*temp=top;
                while (temp!=NULL){
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
            }        
     
    };
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    cout<<endl;
    s.pop();
    s.display();
    cout<<endl;
    return 0;
}
