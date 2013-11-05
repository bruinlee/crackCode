//given a circular linked list, implement a algorithm wichi returns node at the begining of the loop
//A->B->C->D->E->C, return C
//
//two pointers, one with speed 1 and two with speed 2
//
LinkedListNode FindBeginning(LinkedListNode head){
  LinkedListNode n1 = head;
  LinkedListNode n2 = head;

  //find meeting point
  while(n2.next != null){
    n1 = n1.next;
    n2 = n2.next.next;
    if(n1 == n2) break;
  }
  //error check
  if(n2.next == null) return null;

  /*
   * move n1 to head, keep n2 at meeting point, each are k steps
   * from the loop start. if they move at the same pace, they
   * must meet at the loop start
   */
  n1 = head;
  while ( n1 != n2 ){
    n1 = n1.next;
    n2 = n2.next;
  }

  return n2;

}
