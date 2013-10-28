//isSubstring which checks if one word is a substring of another.
//use it just one time to check if s2 is a rotation of s1
//
public static boolean isRotation(String s1, String s2){
  int len = s1.length();
  if(len == s2.length() && len > 0){
    String s1s1 = s1 + s1;
    return isSubstring(s1s1, s2);
  }
  return false;
}
