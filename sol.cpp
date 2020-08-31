#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int a[100], n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int max=*max_element(a, a+n);
	int list[max+1];
	for(int i=0; i<max+1; ++i)
		list[i]=0;
	for(int i=0; i<n; ++i)
		list[a[i]]++;
	int md=0, tmp=list[0];
	for(int i=1; i<max+1; ++i)
		if(list[i]>tmp) {
			tmp=list[i];
			md=i;
		}
	cout << md << "\n";
}
