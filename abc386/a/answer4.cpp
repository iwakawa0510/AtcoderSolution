#include<iostream>
using namespace std;
int main() {
	int a, b, c, d,sum=0;
	cin >> a >> b >> c >> d;
	if (a == b)
		sum++;
	if (a == c)
		sum++;
	if (a == d)
		sum++;
	if (b == c)
		sum++;
	if (b == d)
		sum++;
	if(c == d)
		sum++;
	if (sum == 2 || sum == 3)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}