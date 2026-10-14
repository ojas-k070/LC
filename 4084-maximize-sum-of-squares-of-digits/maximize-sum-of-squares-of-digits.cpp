class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum < 0 || sum > 9 * num) {
            return "";
        }
        
        string result(num, '0');
        for (int i = 0; i < num; ++i) {
            int take = min(9, sum);
            result[i] = '0' + take;
            sum -= take;
        }
        
        return result;
    }
};