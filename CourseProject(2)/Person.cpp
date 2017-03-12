#include "Person.h"
#include "BaseOperation.h"
#include "Credit.h"
#include "Deposit.h"
#include "Card.h"

Person::Person(System::String ^fn, System::String ^sn, System::String ^ln, System::UInt16 ^age)
{
	this->firstName = fn;
	this->secondName = sn;
	this->lastName = ln;
	this->age = age;
}

Person::Person(System::UInt64 ^id, System::String ^fn, System::String ^sn, System::String ^ln, System::UInt16 ^age)
{
	this->id = id;
	this->firstName = fn;
	this->secondName = sn;
	this->lastName = ln;
	this->age = age;
}

System::Void Person::setid(OleDbConnection ^odbc)
{ 
	odbc->Open();
	System::String ^myQuery = "SELECT personid FROM TablePerson WHERE fname='" + this->getFirstName() + "'";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,odbc);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();
	try
	{
		while(myReader->Read())
			this->id = System::Convert::ToUInt64(myReader["personid"]); 
	}
	__finally { myReader->Close(); }	
	odbc->Close();
}

System::Void Person::DBAddPerson(OleDbConnection ^odbc)
{
	odbc->Open();
	System::String ^myQuery = "INSERT INTO TablePerson (fname,sname,lname,age) VALUES(@fname,@sname,@lname,@age)";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,odbc);

	myCommand->Parameters->AddWithValue("@fname", this->getFirstName());
	myCommand->Parameters->AddWithValue("@sname", this->getSecondName());
	myCommand->Parameters->AddWithValue("@lname", this->getLastName());
	myCommand->Parameters->AddWithValue("@age", this->getAge());

	myCommand->ExecuteNonQuery();

	odbc->Close();
}






