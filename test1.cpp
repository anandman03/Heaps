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

	return 0;
}