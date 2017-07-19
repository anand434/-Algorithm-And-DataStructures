import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        String str = "SOS";
        int count = 0;
        for(int i = 0 ; i < S.length() ; i++)
            if(S.charAt(i) != str.charAt(i % 3))
                count++;
        System.out.println(count);
    }
}
