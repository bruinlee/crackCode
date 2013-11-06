class Stack{
  Node top;
  Node pop(){
    if(top != null){
      Object item = top.data;
      top = top.next;
      return item;
    }
  }

  void push(Object item){
    Node t = new Node(item);
    t.next = top;
    top = t;
  }
}


//stack should have
//push, pop, top(return top item), is-empty(), is-full(), get-size()
//
