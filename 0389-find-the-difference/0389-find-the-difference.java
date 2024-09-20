class Solution {
    public char findTheDifference(String s, String t) {
        String a=s+t;
        // int =0;
        char res=0;
        for(int i=0;i<a.length();i++)
        {
            char ch=a.charAt(i);
            res=(char)(res^ch);
        }
        return res;
    }
}