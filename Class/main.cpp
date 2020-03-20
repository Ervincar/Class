#include <iostream>
#include "Memory.h"

using namespace std;

int main()
{
	Memory mem("Hynix", 11, "ddr4", "mem");
	cout << mem.get_manufacturer() << endl;
	Memory memory("input.txt");
	memory.print();
	memory.save("output.txt");

	return 0;
}
