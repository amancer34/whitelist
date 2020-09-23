#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
const int w_1m = 1000000;
int w[w_1m];
//¶ş·Ö²éÕÒ
bool is_match(int t, int w[], int w_length)
{
	int head = 0, rear = w_length, mid;
	while (head < rear) 
	{
		mid = (head + rear) / 2;
		if (t < w[mid]) {
			rear = mid - 1;
		}
		else if (t > w[mid]) {
			head = mid + 1;
		}
		else if (t == w[mid]) {
			return false;
		}
	}
	return true;
}
int main(int argc, char *argv[])
{
	if (argc != 3 || strcmp(argv[1], "-w"))
	{
		return 1;
	}
	ifstream infile;
	infile.open(argv[2]);
	int i = 0;
	cout << argv[2] << endl;
	while (infile >> w[i++])
	{
	}
	int w_length = i - 1;
	cout << w_length << endl;
	int t = 0;
	while (cin >> t)
	{
		if (is_match(t, w, w_length))
		{
			cout << t << endl;
		}
	}
}