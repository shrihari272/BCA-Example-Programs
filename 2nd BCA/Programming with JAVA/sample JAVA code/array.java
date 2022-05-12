public class array
{
    public static void main(String[] args) 
    {
        int[] a = {1,2,3,4,5};
        int[][] b = {{1,2,3,4},{1,2,3,4,5},{1,2,3}}; 
        System.out.println(a[1]);   
        for(int i=0;i<b.length;i++)
            for(int j=0;j<b[i].length;j++)
            System.out.printf("%d ",b[i][j]);
    }    
}
