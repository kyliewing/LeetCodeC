//My iteratively compare by factor version, One Time AC
class Solution {
public:
    bool repeatedSubstringPattern(string str) {
        if (str.length()==0 || str.length()==1){return false;}
        for (int i=1; i<=str.length()/2; i++){
            if (str.length()%i==0){
                bool flag=true;
                for(int j=0; j<str.length(); j+=i){
                    if (str.substr(0,i)!=str.substr(j,i)){flag=false;}
                }
                if (flag==true){return true;}
            }
        }
        return false;
    }
};