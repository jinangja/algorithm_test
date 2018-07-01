#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N, tmp;
	
	cin >> N;

	vector<pair<int, int> > a, b;

	for(int i = 0; i < N; i++)
	{
		cin >> tmp;
		a.push_back(pair<int, int>(tmp, i));
	}
	for(int i = 0; i < N; i++)
	{
		cin >> tmp;
		b.push_back(pair<int, int>(tmp, i));
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	vector<pair<int, int> >::iterator itera, iterb;

	iterb = b.end() - 1;

	int res = 0;
	for(itera = a.begin(); itera != a.end(); itera++)
	{
		res += itera->first * iterb->first;
		iterb--;
	}
	cout << res << endl;
}
