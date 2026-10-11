#include <iostream>
using namespace std;
class stackOp{
  int maxSize = 5, item;
  int *arr;
  int top = -1;
  public:
  stackOp(int size) : maxSize(size) {
    arr = new int[static_cast<std::size_t>(maxSize)];
  }
  ~stackOp() {
    delete[] arr;
  }
  bool isfull(){
    if(top == maxSize - 1){
      return true;
    }
    else return false;
  }
  bool isempty(){
    if(top == -1){
      return true;
    }else return false;
  }
  void push(){
    if(isfull()){
      cout<<"stack overflow"<<endl;
      return;
    }
    top++;
    cout<<"Enter the item : ";
    cin>>item;
    arr[top] = item;
  }
  void pop(){
    if(isempty()){
      cout<<"stack underflow"<<endl;
      return;
    }
    item = arr[top];
    cout<<"The popped item is : "<<item<<endl;
    top--;
  }
  void peek(){
    if(isempty()){
      cout<<"stack underflow"<<endl;
      return;
    }
    item = arr[top];
    cout<<"The topmost item is : "<<item<<endl;
  }
  void display(){
    int count = top;
    while(count != -1){
      cout<<arr[count]<<" ";
      count--;
    }
  }
};
int main(){
  int size;
  cout<<"Enter stack size : ";
  cin>>size;
  stackOp s1(size);
  int operation;
  bool isValid = false;
  while(!isValid){

    cout<<"Choose the operation you want to perform : "<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Peek"<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>operation;

    switch(operation){
      case 1:
      s1.push();
      break;
      case 2:
      s1.pop();
      break;
      case 3:
      s1.peek();
      break;
      case 4:
      s1.display();
      break;
      case 5:
      cout<<"Exiting..."<<endl;
      isValid = true;
      break;
      default:
      cout<<"invalid operation"<<endl;
    }
    cout<<"--------------------------------------------------------------"<<endl;
  }
    return 0;
}
