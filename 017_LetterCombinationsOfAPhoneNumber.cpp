class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) {return result;}
        static const vector<string> mapp={" ","*","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        result.push_back("");
        for (int i=0; i<digits.size(); i++){
            int num=digits[i]-'0';
            if (num<0 || num>9){ continue;}
            const string& candidate=mapp[num];
            vector<string> temp;
            for (int j=0; j<result.size(); j++){
                for (int k=0; k<candidate.size(); k++){
                    temp.push_back(result[j]+candidate[k]);
                }
            }
            result=temp;//or result.swap(temp);
            
        }
        return result;
        
    }
};