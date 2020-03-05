#include "Memory.h"

#include <string>
#include <cstdint>

Memory::Memory()
{
	capacity = 2;
	type = "DDR3";
	power_usage = 300;
	manufacturer = "Hynix";
}

int Memory::get_capacity()
{
	return capacity;
}

std::string Memory::get_manufacturer()
{
	return manufacturer;
}

std::string Memory::get_type()
{
	return type;
}

int Memory::get_power_usage()
{
	return power_usage;
}