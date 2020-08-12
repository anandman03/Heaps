#include "heap.h"
using namespace std;

int32_t main()
{
	freopen("input.txt", "r", stdin);
	
	maxHeap<int> h;
	h.push(12);
	h.push(21);
	h.push(100);
	h.push(1);
	h.push(90);
	h.push(101);
	h.push(65);
	h.push(87);
	h.push(19);
	h.push(76);

	// h.clear();
	h.display();

	cout << '\n';

	vector<int> t;
	h.sort(t);
	for(auto x: t) cout << x << ' ';

	cout << '\n';
	h.display();
	
	return 0;
}