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
// answer is 25164150
#include <iostream>
#include <cmath>
using namespace std;

// ¹«Ê½
// Æ½·½ºÍ 1^2 + 2^2 + ... + n^2 = n*(n+1)*(2n+1)/6
// ÇóºÍ¹«Ê½ (1 + 2 + ... + n) ^ 2 = (n*(n+1)/2)^2
int sumSquareDiff(int n)
{
    return pow(n*(n+1)/2, 2) - n*(n+1)*(2*n+1)/6;
}

int main()
{
    cout << sumSquareDiff(10) << endl;
    cout << sumSquareDiff(100) << endl;
    return 0;
}
