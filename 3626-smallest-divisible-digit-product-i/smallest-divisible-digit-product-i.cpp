// class Solution {
// public:

//     int productdigi(int number, int t){
//         int num=number;
//         if(num==0){
//             return 0;
//         }
//         int prod=1;
//         while(num>0){
//             int d=num%10;
//             prod*=d;
//             num/=10;
//           }
//          if(prod%t==0){
//             return num;
//         }
        

//     }
//     int smallestNumber(int n, int t) {
//         for(int i=n;i<101;i++){
//             productdigi(i,t);
//         }
        
//     }
// };
class Solution {
public:
    bool productdigi(int number, int t) {
        if (number == 0)
            return (0 % t == 0);

        int prod = 1;
        int num = number;

        while (num > 0) {
            prod *= (num % 10);
            num /= 10;
        }

        return (prod % t == 0);
    }

    int smallestNumber(int n, int t) {
        for (int i = n; ; i++) {
            if (productdigi(i, t))
                return i;
        }
    }
};
