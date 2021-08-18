// ----------------------------------  vector ------------------------------

#include<iostream>
using namespace std;

class Vector{
public:
//datamembers
	int* a;
	int curr_size;
	int capacity;

	//constructor
	Vector(int x = 2){
		curr_size = 0;
		capacity = x;
		a = new int[capacity];


	//push back
		void push_back(int y){
			if(curr_size == capacity){
				capacity*=2;
				int* oldptr = a;
				a = new int[capacity];
				for(int i=0;i<curr_size;i++){
					a[i]=oldptr[i];
				}
				delete[] oldptr;

			} 
			a[curr_size] = y;
			curr_size++;

		}

	//pop back
		void pop_back(){
			if(curr_size>0){
				curr_size--;
			}
		}
	//size
	 int size(){
	 	return curr_size;
	 }	
	//empty
	 bool empty(){
	 	return curr_size == 0;
	 }
	//capacity 
	 int capacity = return capacity;
		
	//front
	 int front(){
	 	return a[0];
	 }

	}

	
};



int main(){
	
	Vector v;
	v.push_back();
	cout<<v.pop_back();
	cout<<v.size();
	cout<<v.capacity();
	cout<<v.empty();
	cout<<v.front();
	return 0;

}


// ------------------------------  linkedlist  -----------------------


#include<iostream>
using namespace std;

//class of node
class node{
public:
	//data memebers
	int data;
	node* next;

	//constructor
	node(int x){
		data = x;
		next = NULL;
	}
};

//class of linkedlist
class LinkedList(){
public:
	//data members
	node* head;
	node*tail;

	// constructor
	LinkedList(){
		head = NULL;
		tail = NULL;
	}

	//insertion at head
	void insertion_at_head(int y){
		node* n = new node(x);
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			n->next = head;
			head = n;
		}
	}

	//insertion at tail
	void insertion_at_tail(int x){
		node*n =new node(x);
		if(head==NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail=n;
		}
	}

	//insertion at any point 
	void insertion_at_any_point(int x,int pos){
		if(pos<=0){
			insertion_at_head(x);
		}
		else if(pos>length()){
			insertion_at_tail(x);
		}
		else{
			node*temp = head;
			int moveNo = 1;
			while(moveNo < pos-1){
				moveNo++;
				temp = temp->next;
			}
			node*n = new node(x);
			n->next = temp->next;
			temp->next = n;
		}
	}

		//deleting from head
		void delete_at_head(){
			node* temp = head;
			head = head->next;
			delete temp; 

		}
		//deleting from tail
		void delete_at_tail(){
			node* temp = head;
			while(temp->next!=tail){
				temp = temp->next; 
			}
			delete tail;
			temp->next = NULL;
			tail = temp;
		}

	// print
		void print(){
			node* temp = head;
			while(temp!=NULL){
				cout<<temp->data<<"-->";
				temp=temp->next;
			}
		}
	//length
		int length(){
			node* temp = head;
			int l=0;
			while(temp!=NULL){
				l++;
				temp=temp->next;
			}
			return l;
		}

};

int main(){
	LinkedList l;
	l.length();
	l.insertion_at_head();
	l.insertion_at_tail();
	l.print();




// ------------------------------ stack -----------------------------------

#include>iostream>
using namespace std;

class Node{
public:
	//data members
	int data;
	node* next;
	Node(int x){
		data = x;
		next=NULL;
	}
};

class Stack{
public:
	//data members
	int count;
	node* head;
	Stack(){
		count = 0;
		head=NULL;
	}


	//member function
	// push

	void push(int x){
		count++;
		node* n = new node(x);
		if(head == NULL){
			head = n;
		}
		else{
			n->next = head;
			head = n;
		}

	}
	//pop
	void pop(){
		if(count>0){
			count--;
			node* temp = head;
			head = head->next;
			delete temp;

		}
	}

	//size
	int size(){
		return count;
	}

	//top element
	int top(){
		return head->data;
	}
	//empty
	bool empty(){
		return head == NULL;
	}

};

int main(){
	Stack s;
	s.push();
	s.pop();
	s.empty();
	s.top();
	s.size();
	return 0;
}


// ----------------------------------- TREE -------------------------------------


#include>iostream>
using namespace std;
class Node(){
public:
	//data members
	int data;
	node*left;
	node*right;


	//constructor
	Node(int x){
		data = x;
		left=NULL;
		right=NULL;
	}
};

node* createTree(){
	int data;
	cin>>data;
	if(data==-1){
		return NULL;
	}
	else{
		node* root = new node(data);
		root->left = createTree();
		root->right = createTree();
		return root;
	}
}

//priting in preorder 
void preorder(){
	if(root==NULL){
		return;
	}
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}

//priting in inorder 
void inorder(){
	if(root==NULL){
		return;
	}
	
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

//priting in postorder
void preorder(){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}


int main(){
	node* root = createTree();
	preorder();
	inorder();
	postorder();

	return 0;
}


// ---------------------------------- using javascript ----------------------------------------

// ---------------------------------- stack ----------------------------------------
class Stack {
    constructor() {
        this.items = []
        this.count = 0
    }

    // Add element to top of stack
    push(element) {
        this.items[this.count] = element
        console.log(`${element} added to ${this.count}`)
        this.count += 1
        return this.count - 1
    }

    // Return and remove top element in stack
    // Return undefined if stack is empty
    pop() {
        if(this.count == 0) return undefined
        let deleteItem = this.items[this.count - 1]
        this.count -= 1
        console.log(`${deleteItem} removed`)
        return deleteItem
    }

    // Check top element in stack
    peek() {
        console.log(`Top element is ${this.items[this.count - 1]}`)
        return this.items[this.count - 1]
    }

    // Check if stack is empty
    isEmpty() {
        console.log(this.count == 0 ? 'Stack is empty' : 'Stack is NOT empty')
        return this.count == 0
    }

    // Check size of stack
    size() {
        console.log(`${this.count} elements in stack`)
        return this.count
    }

    // Print elements in stack
    print() {
        let str = ''
        for(let i = 0; i < this.count; i++) {
            str += this.items[i] + ' '
        }
        return str
    }

    // Clear stack
    clear() {
        this.items = []
        this.count = 0
        console.log('Stack cleared..')
        return this.items
    }
}

const stack = new Stack()

stack.isEmpty()

stack.push(100)
stack.push(200)

stack.peek()

stack.push(300)

console.log(stack.print())

stack.pop()
stack.pop()

stack.clear()

console.log(stack.print())

stack.size()

stack.isEmpty()




// ------------------------------ linked list ----------------------------------------
// Construct Single Node
class Node {
  constructor(data, next = null) {
    this.data = data;
    this.next = next;
  }
}

// Create/Get/Remove Nodes From Linked List
class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
  }

  // Insert first node
  insertFirst(data) {
    this.head = new Node(data, this.head);
    this.size++;
  }

  // Insert last node
  insertLast(data) {
    let node = new Node(data);
    let current;

    // If empty, make head
    if (!this.head) {
      this.head = node;
    } else {
      current = this.head;

      while (current.next) {
        current = current.next;
      }

      current.next = node;
    }

    this.size++;
  }

  // Insert at index
  insertAt(data, index) {
    //  If index is out of range
    if (index > 0 && index > this.size) {
      return;
    }

    // If first index
    if (index === 0) {
      this.insertFirst(data);
      return;
    }

    const node = new Node(data);
    let current, previous;

    // Set current to first
    current = this.head;
    let count = 0;

    while (count < index) {
      previous = current; // Node before index
      count++;
      current = current.next; // Node after index
    }

    node.next = current;
    previous.next = node;

    this.size++;
  }

  // Get at index
  getAt(index) {
    let current = this.head;
    let count = 0;

    while (current) {
      if (count == index) {
        console.log(current.data);
      }
      count++;
      current = current.next;
    }

    return null;
  }

  // Remove at index
  removeAt(index) {
    if (index > 0 && index > this.size) {
      return;
    }

    let current = this.head;
    let previous;
    let count = 0;

    // Remove first
    if (index === 0) {
      this.head = current.next;
    } else {
      while (count < index) {
        count++;
        previous = current;
        current = current.next;
      }

      previous.next = current.next;
    }

    this.size--;
  }

  // Clear list
  clearList() {
    this.head = null;
    this.size = 0;
  }

  // Print list data
  printListData() {
    let current = this.head;

    while (current) {
      console.log(current.data);
      current = current.next;
    }
  }
}

const ll = new LinkedList();

ll.insertFirst(100);
ll.insertFirst(200);
ll.insertFirst(300);
ll.insertLast(400);
ll.insertAt(500, 3);

// ll.clearList();
// ll.getAt(2);

ll.printListData();

