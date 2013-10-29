//implement an algorithm to find the nth to last element of a singly linked list
//
//1. create 2 pointers point to the head
//2. increment p2 by n-1 positions
//3. check if p2.next is null, if true return p1, if not, increment both by 1
//4. repeat 3


LinkedListNode nthToLast(LinkedListNode head, int n){
  if(head == null || n < 1){
    return null;
  }
  LinkedListNode p1 = head;
  LinkedListNode p2 = head;

  for(int j = 0; j < n - 1; j++){
    if(p2 == null){
      return null; // list size < n
    }
    p2 = p2.next;
  }
  while(p2.next != null){
    p1 = p1.next;
    p2 = p2.next;
  }
  return p1;
}
