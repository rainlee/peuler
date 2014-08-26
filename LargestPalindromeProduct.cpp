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
// answer is 906609
#include <iostream>
#include <cmath>
using namespace std;

// 遍历三位数[999,100]，两两组合，判断乘积是否是回文
bool isPalindrome(int x)
{
    int hbase = 1;
    while (x / hbase >= 10)
        hbase *= 10;
    
    while (hbase >= 10)   // hbase, not x
    {
        int low = x % 10;
        int high = x / hbase;
        if (low != high)
            return false;
        x = (x % hbase) / 10;
        hbase /= 100;
    }
    return true;
}
int largestPalindromeProduct(int n)
{
    int maxp = 0;
    int low = pow(10, n-1);
    int high = pow(10, n) - 1;
    for (int i = high; i >= low; --i)
    {
        for (int j = high; j >= low; --j)
        {
            int p = i * j;
            if (isPalindrome(p))
                maxp = max(maxp, p);
        }
    }
    return maxp;
}

int main()
{
    cout << largestPalindromeProduct(1) << endl;
    cout << largestPalindromeProduct(2) << endl;
    cout << largestPalindromeProduct(3) << endl;
    return 0;
}