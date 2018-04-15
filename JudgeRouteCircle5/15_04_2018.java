import java.lang.* ;
import java.util.*;

class Solution {
    public boolean judgeCircle(String moves) {
        int x = 0;
        int y = 0;
        for (char ch : moves.toCharArray()) {
            if (ch == 'U') y++;
            else if (ch == 'D') y--;
            else if (ch == 'R') x++;
            else if (ch == 'L') x--;
        }
        return x == 0 && y == 0;
    }

    public static void main(String[] args) {
        Solution s = new Solution();
        String a = new String();
        String b = new String();
        a="RLUD";
        b="LL";
        if(s.judgeCircle(a) == true) 
        {
            System.out.println("YES");
        } else 
        {
        System.out.println("NO");
        }
       if(s.judgeCircle(b) == true) 
        {
            System.out.println("YES");
        } else 
        {
        System.out.println("NO");
        }
    }
}