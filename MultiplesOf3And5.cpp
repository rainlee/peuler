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
// anwser is 233168
#include <iostream>
using namespace std;

// 法1：遍历[1,n) 逐个判断是否能被3或5整除
int multiples3and5(int n)
{
    int sum = 0;
    for (int i = 1; i < n; ++i)
        if (!(i%3) || !(i%5))
            sum += i;
    return sum;
}

// 法2：找规律
// 可以拆分成：3的等差数列 + 5的等差数列 - 3*5的等差数列
// 用等差数列的求和公式可解 Sn = (a1 + an) * n / 2 = d*n * (1 + n) / 2; a1 = d
int multiples3and5_2(int n)   // less than n
{
    int m = n - 1;
    return 3*int(m/3)*(1+int(m/3))/2 + 5*int(m/5)*(1+int(m/5))/2 - 15*int(m/15)*(1+int(m/15))/2;
}

int main()
{
    cout << multiples3and5(10) << endl;
    cout << multiples3and5(1000) << endl;
    cout << multiples3and5_2(1000) << endl;
    return 0;
}

