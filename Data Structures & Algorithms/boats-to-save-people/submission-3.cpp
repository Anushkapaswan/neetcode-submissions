class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // to count the number of boat required to carry the people
        int i=0;
        int j=people.size()-1;
        int boat=0;
        sort(people.begin(),people.end());
        while(i<=j){
            int remaining=limit-people[j--];
            boat++;
            if(people[i]<=remaining) i++;
        }
        return boat;
    }
};