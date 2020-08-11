#include "heap.h"
using namespace std;
#define int long long

int32_t main()
{
	freopen("input.txt", "r", stdin);
	
	minHeap<int> h;
	h.push(12);
	h.push(21);
	h.display();

	cout << endl;

	h.pop();
	h.display();
	
	cout << endl;
	
	h.pop();
	h.display();

	cout << h.empty();
	return 0;
}