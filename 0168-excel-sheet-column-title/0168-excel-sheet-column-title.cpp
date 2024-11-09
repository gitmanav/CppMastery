class Solution {
public:
    string convertToTitle(int columnNumber) {
        int start=64;
        int end=89;
        string result="";
        while(columnNumber>0)
        {
            columnNumber--;
            result=char(columnNumber % 26 + 'A')+result;
            columnNumber=columnNumber/26;
        }
        return result;
    }
};