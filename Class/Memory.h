#pragma once

#include <string>

class Memory
{
	private:
		std::string manufacturer;
		int capacity;
		std::string type;
		int power_usage;

	public:
		Memory();
		std::string get_manufacturer();
		int get_capacity();
		std::string get_type();
		int get_power_usage();
};