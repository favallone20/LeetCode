class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    std::vector<int> index;
    std::vector<int> copiedVector(nums.begin(), nums.end());
    std::sort(copiedVector.begin(), copiedVector.end());
    int j=0;
    int k= nums.size()-1;
    while(j<k)
    {
        int somma = copiedVector[j]+copiedVector[k];
        if(somma == target)
        {
            break;
        }
        else if(somma<target)
            j++;
        else
            k--;
    }

    for(int i=0; i<nums.size() && index.size()<2; i++)
    {
        if(copiedVector[j]==nums[i]){
            index.push_back(i);
        }
        else if(copiedVector[k]==nums[i]){
            index.push_back(i);
        }
    }


    return index;
}
};