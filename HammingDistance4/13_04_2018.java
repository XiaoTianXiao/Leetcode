import java.lang.* ;
import java.util.*;

class Solution {
	 public int hammingDistance(int x, int y) {
        
        int xor = x ^ y, count = 0;
        
        while (xor != 0) {
            System.out.println(Integer.toBinaryString(xor));
            xor &= (xor - 1);
            count++;
        }
        
        return count;   
    }

    public int hammingDistanceInOneLine(int x, int y) {
        
        return Integer.bitCount(x^y);   
    }

    public static void main(String[] args){
     Solution s = new Solution() ;
     System.out.println("The hammingDistance is: "+s.hammingDistance(1,4));
     System.out.println("Integer.bitCount is for counting how many 1 in a binary: "+Integer.bitCount(5));


   }
}
