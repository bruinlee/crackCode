//wrtie a method to replace all spaces in a string with '%20'
//
//1 count the number of spaces during first scan(so can get the new length for new array)
//2 parse again, if encounter space, store "%20"
//
public static void ReplaceFun(char[] str, int length){
  int spaceCount = 0, newLength, i = 0;
  for(i=0; i<length; i++){
    if(str[i] == ' '){
      spaceCount++;
    }
  }

  newLength = length + spaceCount * 2;
  str[newlength] = '\0';

  for(i=length - 1; i >= 0; i--){
    if( str[i] == ' '){
      str[newLength - 1] = '0';
      str[newLength - 2] = '2';
      str[newLength - 3] = '%';
      newLength = newLength - 3;
    }else{
      str[newLength - 1] = str[i];
      newLength = newLength - 1;
    }
  }
/*
for(j=0, i = 0; i < length; i++){
  if(str[i] == ' '){
    str[j] = '%';
    str[j + 1] = '2';
    str[j + 2] = '0';
    j = j + 3;
  }else{
    str[j] = str[i];
    j = j + 1;
  }
}
 */
}
