/*********************
*                    *
*  用栈实现递归运算  *
*                    *
**********************/
#include <iostream>
using namespace std;
/******************************
 *  计算如下递归式：          *
 *   F(m)=m*F(m/n) , m>0      *
 *   F(m)=1        , m=0      *
 ******************************/
int calMultiplication(int  m, int n);
/******************************
 *  计算如下递归式：          *
 *   F(m)=m+F(m-n) , m>0      *
 *   F(m)=0        , m=0      *
 ******************************/
int calPlus(int  m, int n);

const int maxSize = 1000;

int main()
{
	cout << calPlus(10,5) << endl;
	cout << calMultiplication(10, 5) << endl;
	return 0;
}

int calMultiplication(int m, int n)
{
	int cum = 1;
	int s[maxSize];
	int top = -1;
	while (m > 0)
	{
		s[++top] = m;
		m /= n;
	}
	while (top != -1)
		cum *= s[top--];
	return cum;
}
int calPlus(int  m, int n)
{
	int cum = 0;
	int s[maxSize];
	int top = -1;
	while (m > 0)
	{
		s[++top] = m;
		m -= n;
	}
	while (top != -1)
		cum += s[top--];
	return cum;
}