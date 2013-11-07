//describe how you could use a single array to implement three stacks
//approach 1:
//divide the array in three equal parts and allow individual stack to grow in
//that limited space
//
//
int stackSize = 300;
int[] buffer = new int[stackSize * 3];
int[] stackPointer = {0,0,0}; //stack pointers to track top elem

void push(int stackNum, int value){
  //find the index of the top element in the array + 1, and increment the stack
  //pointer
  int index = stackNum * stackSize + stackPointer[stackNum] + 1;
  stackPointer[stackNum]++;
  buffer[index] = value;
}

int pop(int stackNum){
  int index = stackNum * stackSize + stackPointer[stackNum];
  stackPointer[stackNum]--;
  int value = buffer[index];
  buffer[index] = 0;
  return value;
}

int peek(int stackNum){
  int index = stackNum * stackSize + stackPointer[stackNum];
  return buffer[index];
}

boolean isEmpty(int stackNum){
  return stackPointer[stackNum] == stackNum * stackSize;
  //check if stackPointer is at the beginning of the limited space
}


//approach 2
//any stack can grow as long as there is any free space
//maintain a free list and the whole array space should be given initially
//to the free list

int stackSize = 300;
int indexUsed = 0;
int[] stackPointer = {-1,-1,-1};
stackNode[] buffer = new StackNode[stackSize * 3];

class stackNode{
  public int previous;
  public int value;
  public StackNode(int p, int v){
    value = v;
    previous = p;
  }
}

void push(int stackNum, int value){
  int lastIndex = stackPointer[stackNum];
  stackPointer[stackNum] = indexUsed;
  indexUsed++;
  buffer[stackPointer[stackNum]] = new stackNode(lastIndex, value);
}

int pop(int stackNum){
  int value = buffer[stackPointer[stackNum]].value;
  int lastIndex = stackPointer[stackNum];
  stackPointer[stackNum] = buffer[stackPointer[stackNum]].previous;
  buffer[lastIndex] = null;
  indexUsed--;
  return value;
}

int peek(int stackNum){
  return buffer[stackPointer[stackNum]].value;
}

boolean isEmpty(int stackNum){
  return stackPointer[stackNum] == -1;
}
