//{ Driver Code Starts
// Initial Template for Java
import java.io.*;
import java.lang.*;
import java.util.*;


// } Driver Code Ends

import java.util.*;

class Solution {
    public int uneatenLeaves(int[] arr, int n) {
        HashSet<Integer>set = new HashSet<>();
        for(int i=1; i<=n; i++){
            set.add(i);
        }
        int count = n;
        for(int i=0; i<arr.length; i++){
            int num = arr[i];
            while(num<=n){
                if(set.contains(num)){
                    set.remove(num);
                    count--;
                    
                }
                num+=arr[i];
                
            }
        }
        return count;
    }
}



//{ Driver Code Starts.

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            String line = br.readLine();
            String[] tokens = line.split(" ");

            // Create an ArrayList to store the integers
            ArrayList<Integer> array = new ArrayList<>();

            // Parse the tokens into integers and add to the array
            for (String token : tokens) {
                array.add(Integer.parseInt(token));
            }
            int k = Integer.parseInt(br.readLine());

            int[] arr = new int[array.size()];
            int idx = 0;
            for (int i : array) arr[idx++] = i;
            Solution obj = new Solution();
            int res = obj.uneatenLeaves(arr, k);

            System.out.println(res);

            System.out.println("~");
        }
    }
}

// } Driver Code Ends