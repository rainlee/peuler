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
// The answer is 200 * 375 * 425 = 31875000
#include <iostream>
using namespace std;

// ±¿·½·¨£ºa b¶¼´Ó1-n³¢ÊÔ¡­¡­
int specialPyTri(int n)
{
    for (int a = 1; a <= n; ++a)
    {
        for (int b = a+1; b <= (n-a); ++b)
        {
            int c = n-a-b;
            if (a*a + b*b == c*c)
            {
                cout << a << " " << b << " " << c << endl;
                return a*b*c;
            }
        }
    }
    return -1;
}

int main()
{
    cout << specialPyTri(12) << endl;
    cout << specialPyTri(1000) << endl;
    return 0;
}
