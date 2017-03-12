#pragma once
using namespace System::Data::OleDb;

ref class Person
{
private:
	System::UInt64 ^id;
	System::String ^firstName;
	System::String ^secondName;
	System::String ^lastName;
	System::UInt16 ^age;
public:
	Person(System::String ^fn, System::String ^sn, System::String ^ln, System::UInt16 ^age);
	Person(System::UInt64 ^id, System::String ^fn, System::String ^sn, System::String ^ln, System::UInt16 ^age);
	System::UInt64 ^getid() { return this->id; }
	System::String ^getFirstName() { return this->firstName; }
	System::String ^getSecondName() { return this->secondName; }
	System::String ^getLastName() { return this->lastName; }
	System::UInt16 ^getAge() {return this->age; };
	System::Void setid(OleDbConnection ^odbc); 
	void DBAddPerson(OleDbConnection ^odbc);
};