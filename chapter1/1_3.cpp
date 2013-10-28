//desin an algorithm to remove the duplicate characters in a string
//
public static voide removeDuplicates(char[] str){
  if(str == null) return;
  int len = str.length;
  if( len < 2) return;

  int tail = 1;

  for(int i = 1; i < len; ++i){
    int j;
    for (j=0; j < tail; ++j){
      if(str[i] == str[j]) break;
    }
    if(j == tail){
      str[tail] = str[i];
      ++tail;
    }
  }
  str[tail] = 0; // ?, end with a '\0' character
}

/*
if we can use additional memory of constant size
use a boolean[] hit to store if one character appeared or not
for ASCII, there are 256 characers,
so bolean[] hit = new boolean[256];
