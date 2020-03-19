#include <iostream>
#include <fstream>
#include <cstring>

#include "Memory.h"


Memory::Memory(const char* manufacturer, int capacity, const char* type, const char* name) : capacity(capacity) {
	strcpy_s(this->manufacturer, MAX_LENGTH, manufacturer);
	strcpy_s(this->type, MAX_LENGTH, type);
	strcpy_s(this->name, MAX_LENGTH, name);
}

Memory::Memory(const char* filename) {
    load(filename);
}

void Memory::set_capacity(int a)
{
    capacity = a;
}

char* Memory::get_manufacturer()
{
	return manufacturer;
}

char* Memory::get_type()
{
	return type;
}

char* Memory::get_name()
{
	return name;
}

void Memory::save(const char* filename) {
    std::ofstream fout(filename);
    fout
        << classname << " "
        << manufacturer << " "
        << capacity << " "
        << type << " "
        << name << std::endl;
    fout.close();
}


void Memory::load(const char* filename) {
    std::ifstream fin(filename);
    fin >> classname >> name >> capacity >> type >> manufacturer;
    fin.close();
}


std::ostream& operator<<(std::ostream& ostream, const Memory& memory) {
    ostream
        << memory.classname << " " << memory.name << " ("
        << "capacity = " << memory.capacity
        << ", type = " << memory.type << " "
        << ", manufacturer = " << memory.manufacturer << ")"<<std::endl;

    return ostream;
}


Memory::~Memory()
{
	//dtor
}
