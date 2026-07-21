/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        // binary search
        int i=1;
        int j=n;
        while(i<=j){
            int mid=i+(j-1)/2;
            int guessNum=guess(mid);
            if(guessNum==0) return mid;
            else if(guessNum>0) i=mid+1;
            else j=mid-1; 
        }

    }
};