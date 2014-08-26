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
// answer is 6857
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// ɸ����
// �����ı�����Ȼ�Ǹ�����
// ��һ��ȫ�������prime[n]
// prime[i]Ϊ0˵������������i��ʼ��¼k*i�����������i
long long largestPrimeFactor(long long n)
{
    vector<long long> prime(n+1, 0);
    for (long long i = 2; i <= n; ++i)
        if (0 == prime[i])
            for (long long j = i; j <= n; j += i)
                prime[j] = i;   // mark the max prime factor
    return prime[n];
}

// ��1��vector��������ô��Ŀռ䡭��
// ��2����[sqrt(n),2]�����ж��Ƿ���n�����أ�Ȼ���ж��Ƿ�������
bool isPrime(long long n)
{
    long long sqrtn = sqrt(n);
    for (long long i = 2; i <= sqrtn; ++i)
        if (0 == n%i)
            return false;
    return true;
}
long long largestPrimeFactor_2(long long n)
{
    for (long long i = sqrt(n); i >= 2; --i)
        if ((0 == n%i) && isPrime(i))
            return i;
    return 1;
}

int main()
{
    cout << largestPrimeFactor(13195) << endl;
    cout << largestPrimeFactor_2(13195) << endl;
    cout << largestPrimeFactor_2(600851475143) << endl;
    return 0;
}