#include <iostream>
#include <memory>
using namespace std;

struct node{
  int data;
  shared_ptr<node> next;
  node(int data): data(data), next(nullptr){}
};

class LinkedList{
  shared_ptr<node> head;  
  public:
  LinkedList():head(nullptr){};
  ~LinkedList(){
    while(head){
      shared_ptr<node> temp = head;
      head=head->next;
      temp.reset();
    }
  };
  
  void ins(int data){
    shared_ptr<node> n = make_shared<node>(data);
    if (!head)    //헤드가 nullptr이면 새 노드를 헤드로 설정
      head=n;
    else{
      shared_ptr<node> iter = head;    //리스트를 순회할 포인터 생성
      while(iter->next)    //마지막 노드까지 이동
        iter=iter->next;
      iter->next=n;    //마지막 노드의 next를 새 노드로 설정
    }
  };

  void print(){
    shared_ptr<node> iter = head;
    while(iter){
      cout<<iter->data<<" ";
      iter=iter->next;
    }
    cout<<endl;
  }

  void del(int d){
    shared_ptr<node> iter=head, prev=nullptr;
    while(iter!=nullptr&&iter->data!=d){
      prev=iter;
      iter=iter->next;
    }

    if(iter->data==d){
      prev->next=iter->next;  //이전 노드의 next를 현재 노드의 next로 설정      
    }
    else{
      cout<<"해당 값이 없습니다."<<endl;
    }
    iter.reset();  //메모리 해제
  };

  void search(int d){
    shared_ptr<node> iter=head;
    while(iter!=nullptr&&iter->data!=d){
      iter=iter->next;
    }
    if(iter->data==d){
      cout<<"해당 값이 있습니다."<<endl;
    }
    else{
      cout<<"해당 값이 없습니다."<<endl;
    }
  };

  void isEmpty(LinkedList& list){
    if(head==nullptr){
      cout<<"리스트가 비었습니다"<<endl;
    }
    else{
      cout<<"리스트가 비어있지 않습니다."<<endl;
    }
  };
};

int main(){
  LinkedList list;
  list.isEmpty(list);
  list.ins(1);
  list.ins(2);
  list.ins(3);
  list.print();
  list.del(2);
  list.print();
  list.search(3);
  list.isEmpty(list);
}