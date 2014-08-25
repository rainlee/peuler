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

// ��1������[1,n) ����ж��Ƿ��ܱ�3��5����
int multiples3and5(int n)
{
    int sum = 0;
    for (int i = 1; i < n; ++i)
        if (!(i%3) || !(i%5))
            sum += i;
    return sum;
}

// ��2���ҹ���
// ���Բ�ֳɣ�3�ĵȲ����� + 5�ĵȲ����� - 3*5�ĵȲ�����
// �õȲ����е���͹�ʽ�ɽ� Sn = (a1 + an) * n / 2 = d*n * (1 + n) / 2; a1 = d
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

