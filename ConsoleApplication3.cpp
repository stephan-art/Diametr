#include <iostream>
using namespace std;
int main()
{
	int W, H, R, D;
	cin >> W >> H >> R;
	D = 2 * R;
	if (D <= W && D <= H) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

}