#pragma once
#include "Person.h"

ref class BaseOperation
{
public:
	// fields
	System::UInt64 ^id;
	System::UInt64 ^userid;

	// methods
	System::UInt64 ^getid() { return this->id; } 
	System::UInt64 ^getuserid() { return this->userid; }
};