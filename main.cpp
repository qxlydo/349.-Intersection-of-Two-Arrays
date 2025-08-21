class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::vector<int> result;
        for(int i : nums1){
            bool num2 = false;
            for(int j : nums2){
                if(i == j){
                    num2 = true;
                    break;
                }
            }
            bool res = false;
            for(int re : result){
                if(i  == re){
                    res = true;
                    break;
                }

            }
            if(num2 && !res){
                result.push_back(i);
            }

        }
    return result;
    }
};
