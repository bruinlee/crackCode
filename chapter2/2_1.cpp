//write code to remove(print) duplicates from an unsorted linked list
//if we can a buffer
public static void deleteDups(LinkedListNode n){
  Hashtable table = new Hashtable();
  LinkedListNode previous = null;
  while(n ! =null){
    if(table.contansKey(n.data)) previous.next = n.next;
    else{
      table.put(n.data, true);
      previous = n;
    }
    n = n.next;
  }
}

//without a buffer, we can iterate with two pointers
//
public static void deleteDups2(LinkedListNode head){
  if(head == null) return;
  LinkedListNode previous = head;
  LinkedListNode current = previous.next;//check dups from the 2nd ele
  while(current != null){
    LinkedListNode runner = head;
    while(runner != current){
      if(runner.data == current.data){
        LinkedListNode tmp = current.next;
        previous.next = tmp;
        current = temp;
        break;
      }
      runner = runner.next;
    }
    if(runner == current){
      previous = current;
      current = current.next;
    }
  }
}
