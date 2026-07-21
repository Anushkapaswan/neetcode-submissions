class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // using sorting and two pointer
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int boat=0;
        while(l<=r){
            int remain=limit-people[r--];
            boat++;
            if(l<=r && remain>=people[l]) l++;
            
        }
        return boat;
    }
};