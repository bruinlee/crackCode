class Node{
  Node next = null;
  int data;
  public Node(int d){
    data = d;
  }
  void appendToTail(int d){
    Node end = new Node(d);
    Node n = this;
    while(n.next != null){
      n = n.next;
    }
    n.next = end;
  }
}
//singly linked list,data next
//doubly linked list,prev data next
//
Node deleteNode(Node head, int d){
  Node n = head;
  if(n.data == d){
    return head.next;
  }
  while(n.text != null){
    if(n.text.data = d){
      n.next = n.next.next;
      return head;
    }
    n = n.next; // go through all the nodes
  }
}
