import java.lang.* ;
import java.util.*;

class Solution {
    public int numJewelsInStones(String J, String S) {        //时间复杂度O(M+N)
        int res = 0;
        Set <Character> setJ = new HashSet <Character> ();
        for (char j: J.toCharArray()) setJ.add(j);
        for (char s: S.toCharArray()) if (setJ.contains(s)) res++;
        return res;
    }

    public void numJewelsInStones2(String J, String S) {
    	System.out.println(S.replaceAll("[^" + J + "]", ""));//.length(); //前一个字符串为[^J],匹配在S中未包含J的任意字符。如果是[J]，则是在S中匹配所有包含J的字符
    }	//

    public int numJewelsInStones3(String J, String S){
    	return S.replaceAll("[^" + J + "]", "").length();
    }

 public static void main(String[] args){
     Solution s = new Solution() ;
     String J = "Aa", S = "aaAabc" ;
     System.out.println("The number of jwerl is :" + s.numJewelsInStones(J, S)) ;
	 s.numJewelsInStones2(J,S);
	 System.out.println("The number of jwerl is :" + s.numJewelsInStones3(J, S)) ;

   }
}