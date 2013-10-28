//reverse a c style string(end with null character)
//
void reverse(char *str){
  char *end = str;
  char tmp;
  if(str){
    while(*end){
      ++end;
    }
    --end;
    while(str < end){
      tmp = *str;
      *str++ = *end;  //x++ would increments the value after processing the current statement
      *end-- = tmp;
    }
  }
}
//++x would increment before processing the current statement
