//write an algorithm if an element in an M*M matrix is 0, its entire row and column is set to 0
//
public static void setZeros(int[][] matrix){
  int[] row = new int[matrix.length];
  int[] column = new int[matrix[0].length];
  for( int i = 0; i < matrix.length; i++){
    for(int j = 0; j < matrix[0].length; j++){
      if( matrix[i][j] == 0){
        row[i] = 1;
        column[j] = 1;
      }
    }
  }
  //set arr[i][j] to 0 if either row i or column j has a 0
  for(int i = 0; i < matrix.length; i++){
    for(int j = 0; j <matrix[0].length; j++){
      if((row[i] == 1 || column[j] == 1)){
        matrix[i][j] = 0;
      }
    }
  }
}
