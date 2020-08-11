#include "heap.h"
using namespace std;

int32_t main()
{
	freopen("input.txt", "r", stdin);
	
	maxHeap<int> h;
	h.push(12);
	h.push(21);

	// h.clear();
	h.display();

	cout << '\n';

	vector<int> t = h.sort();
	for(auto x: t) cout << x << ' ';

	cout << '\n';
	
	vector<int> m = {3, 1, 2};
	h.makeHeap(m);
	for(auto x: m) cout << x << ' ';

	cout << '\n';

	int a[3] = {2, 12, 1};
	h.makeHeap(a, 3);
	for(int i = 0 ; i < 3 ; i++) {
		cout << a[i] << ' ';
	}

	return 0;
}