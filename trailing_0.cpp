#include<iostream>
using namespace std;
int compute(int n)
{
	int ans = 0;
	for(int d =5; n / d >= 1; d *= 5){
		ans += n/d;
	}
	return ans;
}
int main(){
	int n;
	cin >> n;
	cout << compute(n);
}