class Solution {
public:
    bool isPalindrome(string s) {
        string A;
        for(auto c:s){
            if(c>=65 && c<=90) A+= c+32;
            else if(c>=97 && c<=122) A+= c;
            else if(c>=48 && c<=57) A+= c;
            
        }
        int j=A.size()-1,i=0;
        while(i<j){
            if(A[i++]!=A[j--]) return false;
        }
        return true;
    }
};
