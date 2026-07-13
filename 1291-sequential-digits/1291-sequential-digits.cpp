class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        for(int i=2; i<=9; i++){  // i=2 coz constraint diya hai 10< 
            for(int j=0; i+j<=9; j++){
                int num= stoi(s.substr(j,i));
                if(num>=low && num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};