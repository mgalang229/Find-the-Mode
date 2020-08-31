#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main() {
	int a[100], n;
	cin >> n;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int cnt=1, md=0, tmp=0;
	for(int i=1; i!=n+1; ++i) {
		if(a[i-1]>a[i]) {
			if(cnt>tmp) {
				md=a[i-1];
				tmp=cnt;
				cnt=1;
			}
		} else
			cnt++;
	}
	cout << md << "\n";
}
