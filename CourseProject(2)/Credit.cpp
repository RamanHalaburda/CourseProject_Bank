#include "Credit.h"

Credit::Credit(System::UInt64 ^userid, System::UInt16 ^percent, System::UInt64 ^gotMoney, System::UInt64 ^returnedMoney)
{
	this->userid = userid;
	this->percent = percent;
	this->gotMoney = gotMoney;
	this->returnedMoney = returnedMoney;
}

Credit::Credit(System::UInt64 ^id, System::UInt64 ^userid, System::UInt16 ^percent, System::UInt64 ^gotMoney, System::UInt64 ^returnedMoney)
{
	this->id = id;
	this->userid = userid;
	this->percent = percent;
	this->gotMoney = gotMoney;
	this->returnedMoney = returnedMoney;
}

System::Void Credit::changeReturnedMoney(System::UInt64 sum)
{
	*this->returnedMoney = *this->returnedMoney + sum;
}

System::Void Credit::getCredit(OleDbConnection ^odbc)
{
	odbc->Open();
	System::String ^myQuery = "INSERT INTO [TableCredit] ([userid],[percent],[gotMoney],[returnedMoney]) VALUES(@userid,@percent,@gotMoney,@returnedMoney)";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,odbc);

	myCommand->Parameters->AddWithValue("@userid",this->getuserid());
	myCommand->Parameters->AddWithValue("@percent",System::Convert::ToString(this->getPercent()));
	myCommand->Parameters->AddWithValue("@gotMoney",System::Convert::ToString(this->getGotMoney()));
	myCommand->Parameters->AddWithValue("@returnedMoney",System::Convert::ToString(0));

	myCommand->ExecuteNonQuery();
	odbc->Close();
}

System::Void Credit::payCredit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 creditid, System::UInt64 need_pay)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of returned money	
	if((tb->Text != ""))
	{
		this->changeReturnedMoney(System::Convert::ToUInt64(tb->Text));

		// check credit status
		if(*this->getReturnedMoney() >= need_pay)
		{
			myQuery = "DELETE FROM [TableCredit] WHERE [creditid] = " + creditid;
			myCommand = gcnew OleDbCommand(myQuery,odbc);
			myCommand->ExecuteNonQuery();
		}
		else
		{
			myQuery = "UPDATE [TableCredit] SET [returnedMoney] = " + System::Convert::ToString(this->getReturnedMoney()) + "  WHERE [creditid] = " + creditid;
			myCommand = gcnew OleDbCommand(myQuery,odbc);
			myCommand->ExecuteNonQuery();
		}
	}
	else
		System::Windows::Forms::MessageBox::Show("¬ведите значение!");
}