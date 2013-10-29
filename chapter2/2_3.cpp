public static void deleteNode(LinkedListNode n){
  if(n == null || n.next == null){
    return false;// n is null or n is the last element node
  }
  LinkedListNode next = n.next;
  n.data = next.data;
  n.next = next.next;
  return true;
}
