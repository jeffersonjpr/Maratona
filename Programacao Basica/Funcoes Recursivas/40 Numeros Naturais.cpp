#include <bits/stdc++.h>
using namespace std;

int fat(int n){
	if(n < 1) return 0;
	return n + fat(n-1);
}

int main(){
	int n;
	cin >> n;
	printf("%i\n",fat(n));
}
