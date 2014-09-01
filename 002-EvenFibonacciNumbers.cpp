/*
                   _ooOoo_
                  o8888888o
                  88" . "88
                  (| -_- |)
                  O\  =  /O
               ____/`---'\____
             .'  \\|     |//  `.
            /  \\|||  :  |||//  \
           /  _||||| -:- |||||-  \
           |   | \\\  -  /// |   |
           | \_|  ''\---/''  |   |
           \  .-\__  `-`  ___/-. /
         ___`. .'  /--.--\  `. . __
      ."" '<  `.___\_<|>_/___.'  >'"".
     | | :  `- \`.;`\ _ /`;.`/ - ` : | |
     \  \ `-.   \_ __\ /__ _/   .-` /  /
======`-.____`-.___\_____/___.-`____.-'======
                   `=---='
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
         God Bless Me     BUG Free Forever
*/
// anwser is 4613732
#include <iostream>
using namespace std;

// DP: dp[i] = dp[i-1] + dp[i-2]
int evenFibNum(int n)
{
    int pre = 1;
    int cur = 2;
    int sum = 0;
    while (cur <= n)
    {
        if (!(cur & 0x01))
            sum += cur;
        int tmp = pre;
        pre = cur;
        cur += tmp;
    }
    return sum;
}

int main()
{
    cout << evenFibNum(4000000) << endl;
    return 0;
}
