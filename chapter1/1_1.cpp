//assume char set is ASCII, so 256 char.
public static boolean isUniqueChars2(String str){
  boolean[] char_set = new boolean[256];
  for(int i = 0; i < str.length(); i++){
    int val = str.charAt(i); // convert char to ASCII
    if(char_set[val]) return false;
    char_set[val] = true;
  }
  return true;
}
