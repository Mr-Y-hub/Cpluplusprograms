			#include<iostream>
			using namespace std;
			template <class T>
			class Node{
				private:
					T data;
					Node *prev;
					Node *next;
					
					public:
					Node(T val){
						data=val;
						prev=NULL;
						next=NULL;
					}
					template <class U>
					friend class DoubleLL;
			};
			template <class T>
			class DoubleLL{
				Node<T>* head;
				Node<T> *tail;
				public:
					DoubleLL(){
						head=NULL;
						tail=NULL;
					}
					
					
					//insert at head
					void insertathead(T data){
						
						Node<T> *temp=new Node<T>(data);
						if(head==NULL){
							head=temp;
							if(tail==NULL)
							tail=head;
							return;
						}
						temp->next=head;
						head=temp;
						temp->next->prev=temp;
						
					}
					
					//traverse
				void traverse(){
				Node<T> *n=head;
				cout<<"\n from head to tail:  ";
				while(n!=NULL){
					cout<<n->data<<" ";
					n=n->next;
				}
				cout<<"\nfrom tail to head:  ";
				Node<T> *p=tail;
				while(p!=NULL){
					cout<<p->data<<" ";
					p=p->prev;
				}
				cout<<"\nhead : "<<head->data<<"   tail: "<<tail->data;
				cout<<"\n";
			}
				
				
				//insert at tail
				void insertatindex(T data,int index){
					Node<T> * temp=new Node<T>(data);
					if(index==0){
						cout<<" if want to insert at head use inserthead ";
						return;
					}
					Node<T> *p=head;
					int count=0;
					while(count<(index-1)&&p->next!=NULL){
						p=p->next;
						count++;
					}
					if(index>count&&p->next==NULL){
						cout<<"index not exist ";
						return;
					}
					temp->next=p->next;
					p->next=temp;
						temp->prev=p;
					p=temp->next;
					p->prev=temp;
				
				
				}
				
				//insert at tail
				void insertattail(T data){
				Node<T> *temp=new Node<T>(data);
				if(tail==NULL){
					tail=temp;
				if(head==NULL)
				head=tail;
				return;
				}
				tail->next=temp;
				temp->prev=tail;
				tail=temp;
				}
				
				//delete head
				void deletehead(){
					Node<T> *temp=head;
					if(temp==NULL){
						cout<<"empty list";
						return;
					}
					head=temp->next;
					head->prev=NULL;
					delete(temp);
				}
				
				
				//delete index
				void deleteindex(int index){
					Node<T> *temp=NULL;
						if(index==0){
						cout<<" if want to delete head use deletehead ";
						return;
					}
						Node<T> *p=head;
					int count=0;
					while(count<(index-1)&&p->next!=NULL){
						p=p->next;
						count++;
					}
					if(index>(count-1)&&p->next==NULL){
						cout<<"index not exist ";
						return;
					}
					temp=p->next;
					p->next=temp->next;
					temp->next->prev=p;
					delete(temp);
					
				}
				
				//delete tail
				void deletetail(){
					Node<T> *temp=tail;
					if(temp==NULL){
						cout<<"Empty list";
						return;
					}
					tail=temp->prev;
					tail->next=NULL;
					delete(temp);
				}
				
				
				//search data
				void search(T data){
					Node<T> *p=head;
					if(p->data==data){
						cout<<head<<endl;
						return;
					}
					while(p->next!=NULL){
						p=p->next;
						if(p->data==data){
							cout<<p<<endl;
							return;
						}
					}
					cout<<"-1"<<endl;
					return;
				}
				
				
				// concatinating the string
				void concat(DoubleLL<T> list2){
					tail->next=list2.head;
					list2.head->prev=tail;
					tail=list2.tail;
				}
			};


			int main(){
				DoubleLL<int> list1;              // can change this to required one if using any other data type like char float
				list1.insertathead(3);
				list1.insertathead(2);
				list1.insertathead(1);
				list1.insertattail(4);
				list1.insertattail(5);
				cout<<"Doubly linked list is: ";
				list1.traverse();
				char ch;
				int x,index;
				int data;              // can change this to required one if using any other data type like char float
				int searchdata;        // can change this to required one if using any other data type like char float
				DoubleLL<int> list2;   // can change this to required one if using any other data type like char float
				do{
					cout<<"Press 1 to Insert an element x at the beginning of the doubly linked list\n";
					cout<<"Press 2 to Insert an element x at position i in the doubly linked list\n";
					cout<<"Press 3 to Insert an element x at the end of the doubly linked list\n";
					cout<<"Press 4 to Remove an element from the beginning of the doubly linked list\n";
					cout<<"Press 5 to Remove an element from position i in the doubly linked list\n";
					cout<<"Press 6 to Remove an element from the end of the doubly linked list\n";
					cout<<"Press 7 to Search for an element x in the doubly linked list and return its pointer\n";
					cout<<"Press 8 to Concatenate two doubly linked lists\n";	
					cin>>x;
					switch(x){
						case 1:
							cout<<"Enter to to be inserted: ";
							cin>>data;
							list1.insertathead(data);
							cout<<"\nThe new list is: ";
							list1.traverse();
							break;
						case 2:
							cout<<"\nEnter data : ";
							cin>>data;
							cout<<"\n Enter index: ";
							cin>>index;
							list1.insertatindex(data,index);
							cout<<"\nThe new list is: ";
							list1.traverse();
							break;
						case 3:
							cout<<"Enter to to be inserted: ";
							cin>>data;
							list1.insertattail(data);
							cout<<"\nThe new list is: ";
							list1.traverse();
						
							break;
						case 4:
							cout<<"\nThe new list is: ";
							list1.deletehead();
							list1.traverse();
							break;
						case 5:
							cout<<"Enter the index you want to delete: ";
							cin>>index;
							list1.deleteindex(index);
							cout<<"The new list is: ";
							list1.traverse();
							break;
						case 6:
							cout<<"\nThe new list is: ";
							list1.deletetail();
							list1.traverse();
							
							break;
						case 7:
							cout<<"Enter the data to be searched in the list: ";
							cin>>searchdata;	
							list1.search(searchdata);
							break;
						case 8:
							list2.insertathead(34);
							list2.insertathead(33);
							list2.insertattail(35);
							cout<<"\n the second list is: ";
							list2.traverse();
							list1.concat(list2);
							cout<<"\nThe concatenated list is: ";
							list1.traverse();
							break;
					}
					cout<<"If wantr to continue press y else any other key: ";
					cin>>ch;
				}while(ch=='y'||ch=='Y');
				
				
			}


