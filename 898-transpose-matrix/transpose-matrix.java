class Solution {
    public int[][] transpose(int[][] matrix) {
        int row=matrix.length;
        int col=matrix[0].length;
        int [][]res=new int[matrix[0].length][row];
        for(int i=0;i<matrix.length;i++){
for(int j=0;j<matrix[0].length;j++){
    // matrix[i][j]=matrix[j][i];
    res[j][i]=matrix[i][j];
}
        }
        return res;



    }
}