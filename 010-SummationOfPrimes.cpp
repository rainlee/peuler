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
// The answer is 142913828922
#include <iostream>
#include <vector>
using namespace std;

// 筛数法求n以内的所有素数
long long sumPrimes(int n)
{
    vector<bool> primes(n+1, true);
    long long sum = 0;
    for (int i = 2; i <= n; ++i)
    {
        if (primes[i])  // i is prime
        {
            sum += i;
            for (int j = 2*i; j <= n; j += i)
                primes[j] = false;
        }
    }
    return sum;
}

int main()
{
    cout << sumPrimes(10) << endl;
    cout << sumPrimes(2000000) << endl;
    return 0;
}
