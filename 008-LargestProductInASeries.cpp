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
// The answer is 23514624000
#include <iostream>
#include <climits>
using namespace std;

const string s = "\
73167176531330624919225119674426574742355349194934\
96983520312774506326239578318016984801869478851843\
85861560789112949495459501737958331952853208805511\
12540698747158523863050715693290963295227443043557\
66896648950445244523161731856403098711121722383113\
62229893423380308135336276614282806444486645238749\
30358907296290491560440772390713810515859307960866\
70172427121883998797908792274921901699720888093776\
65727333001053367881220235421809751254540594752243\
52584907711670556013604839586446706324415722155397\
53697817977846174064955149290862569321978468622482\
83972241375657056057490261407972968652414535100474\
82166370484403199890008895243450658541227588666881\
16427171479924442928230863465674813919123162824586\
17866458359124566529476545682848912883142607690042\
24219022671055626321111109370544217506941658960408\
07198403850962455444362981230987879927244284909188\
84580156166097919133875499200524063689912560717606\
05886116467109405077541002256983155200055935729725\
71636269561882670428252483600823257530420752963450\
";

// 遍历一遍每次取k个数，时间复杂度O(n*k)
// 注意用long long
long long largestProductInSeries(const string &s, int k)
{
    long long maxp = INT_MIN;
    int maxi = 0;
    for (int i = 0; i <= s.size()-k; ++i)
    {
        long long sum = 1;
        for (int j = 0; (j < k) && (s[i+j] != '0'); ++j)
            sum *= (s[i+j] - '0');
        //maxp = max(maxp, sum);
        if (sum > maxp)
        {
            maxp = sum;
            maxi = i;
        }
    }
    cout << "the subseries is " << s.substr(maxi, k) << endl;
    return maxp;
}

// 法2：优化
// 1. 当其中出现0了，即可停止
// 2. k个数的窗口向后移动时，可以去头加尾，不用再遍历k（0值不好处理……）

int main()
{
    cout << largestProductInSeries(s, 4) << endl;
    cout << largestProductInSeries(s, 13) << endl;
    return 0;
}
