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
// answer is 104743
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Ѱ�ҵ�n������
// ��ǰ����������ж�ÿһ�����Ƿ�Ϊ������ֱ���ҵ���n��
bool isPrime(int n)
{
    int sqrtn = sqrt(n); 
    for (int i = 2; i <= sqrtn; ++i)
        if (!(n % i))
            return false;
    return true;            
}
int findNthPrime(int n)
{
    if (1 == n)
        return 2;
    --n;
    //for (int i = 2; ; ++i)
    for (int i = 3; ; i += 2)  // step is 2
        if (isPrime(i))
            if (--n == 0)
                return i;
}

// ɸ���� ����ȷ���Ͻ�?
// ��������һ�������ܱ�С���������������Ļ�����ô��������������
bool isPrime(int num, vector<int> &primes, int cnt)
{
    for (int i = 0; i < cnt; ++i)
    {
        if (num < primes[i] * primes[i])  // [2, sqrt(num)]
            break;
        if (0 == (num % primes[i]))
            return false;
    }
    return true;
}
int findNthPrime_2(int n)
{
    vector<int> primes(n);
    primes[0] = 2;
    int cnt = 1;
    for (int i = 3; cnt < n; i += 2)
        if (isPrime(i, primes, cnt))
            primes[cnt++] = i;
    return primes[n-1];
}

int main()
{
    cout << findNthPrime(6) << endl;
    cout << findNthPrime(10001) << endl;
    cout << findNthPrime_2(10001) << endl;
    return 0;
}