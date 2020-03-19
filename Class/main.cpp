#include <iostream>
#include "Memory.h"

using namespace std;

int main()
{
	Memory mem("asa", 11, "ddr4", "mem");
	cout << mem.get_manufacturer() << endl;
	Memory memes("input.txt");
	cout << memes << endl;
	memes.set_capacity(34);
	cout << memes << endl;
	memes.save("output.txt");

	return 0;
}
