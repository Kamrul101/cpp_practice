#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
// const int mx =2e5+123;
// int a[mx];

struct Node{
    int data;
    Node* next;
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArray2LL(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i=1;i<v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover= temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head=head->next;
    delete temp;
    return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* removeK(Node* head, int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* temp = head;
    Node* pre = NULL;
    while(temp){
        cnt++;
        if(cnt==k){
            pre->next= pre->next->next;
            delete temp;
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}   
Node* removeElem(Node* head, int k){
    if(head==NULL) return head;
    if(head->data==k){
        Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        
        Node* temp = head;
        Node* pre = NULL;
        while(temp!=NULL){
            if(temp->data==k){
                pre->next= pre->next->next;
                delete temp;
                break;
            }
            pre = temp;
            temp = temp->next;
        }
        return head;
}   
Node* removeAllElem(Node* head, int k){
        if(head==NULL) return head;
        Node* pre = new Node(-1,head);
        Node* temp = pre;
        while(temp->next!=NULL){
            if(temp->next->data==k){
                temp->next = temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return pre->next;
}   

void display(Node* head){
    Node* temp  = head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    optimize();
    vector<int> v = {1,2,3,4,5,6};
    Node* head = convertArray2LL(v);
    // head=deleteHead(head);
    // deleteTail(head);
    // head = removeK(head, 6);
    head = removeAllElem(head,3);
    display(head);

    
}