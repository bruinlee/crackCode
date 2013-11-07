//how do you design a stack with a additional function min which
//returns the minimum element

//approach 1
//have each node in the stack keep track of the minimum beneath itself
//
//approach 2 
//have another stack which keeps track of the min
//
public class StackWithMin2 extends Stack<integer> {
  Stack<Integer> s2;
  publick StackWithMin2(){
    super = new Stack<Integer>();
  }
  public void push(int value){
    if(value <= min){
      s2.push(value);
    }
    super.push(value);
  }
  public Integer pop(){
    int value = super.pop();
    if(value == min()){
      s2.pop();
    }
  }
  public int min(){
    if(s2.isEmpty()){
      return Integer.MAX_VALUE;//????
    }else{
      return s2.peek();
    }
  }
}
