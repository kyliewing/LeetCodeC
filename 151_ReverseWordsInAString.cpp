//reverse the whole string, then reverse word by word
class Solution {
public:
    void reverseWords(string &s) {
        int slow=0, fast=0, ind=0, word_count=0, len=s.length();
        reverse(s,slow,len-1);
        while(true){
            while(fast<len && s[fast]==' ') {fast++;}
            if(fast==len){break;}
            if(word_count) {s[slow++]=' ';}
            ind=slow;
            while(fast<len && s[fast]!=' '){
                s[slow]=s[fast];
                slow++;
                fast++;
            }
            reverse(s,ind,slow-1);
            word_count++;
        }
        
        s.resize(slow);      //notice the use of s.resize(length)
        
    }
    
    void reverse(string &s, int begin, int end){
        while (begin<end){
            char temp=s[begin];
            s[begin++]=s[end];
            s[end--]=temp;
        }
    }
};