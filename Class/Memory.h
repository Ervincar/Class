#pragma once

#include <cstdint>
#include <ostream>

const size_t MAX_LENGTH = 100;

class Memory
{
private:
	char manufacturer[MAX_LENGTH] = "Hynix";
	char classname[MAX_LENGTH] = "Memory";
	int capacity = 1;
	char type[MAX_LENGTH] = "DDR4";
	char name[MAX_LENGTH] = "HyperX Fury 8GB";

public:
	Memory(const char*, int, const char*, const char*);
	Memory(const char*);
	void print();
	char* get_manufacturer();
	void set_capacity(int);
	char* get_type();
	char* get_name();
	virtual ~Memory();

	void save(const char*);
	void load(const char*);

	friend std::ostream& operator<<(std::ostream&, const Memory&);
};

