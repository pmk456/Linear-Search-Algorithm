public class linear_search{
    private static int linear_search(int[] arr, int n){
        for(int i=0;i<=arr.length;i++){
            if (arr[i] == n){
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args){
        int[] arr = {45, 66, 120, 12, 10, 1, 90, 40};
        int result = linear_search(arr, 12);
        if(result != -1){
            System.out.print("Found At index "+result);
        }
        else{
            System.out.print("Not Found");
        }
    }
}
