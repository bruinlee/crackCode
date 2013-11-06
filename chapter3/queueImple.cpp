class Queue{
  Queue first, last;
  void enqueue(Obejct item){
    if(!first){
      last = new Node(item);
      first = last;
    }else{
      last.next = new Node(item);
      last = last.next;
    }
  }

  Node dequeue(Node n){
    if(first != null){
      Object item = first.data;
      first = first.next;
      return item;
    }
    return null;
  }
}

//queue should have
//enqueue(), dequeue(),
//front() return the front element
//is-empty()
//is-full()
//get-size()
