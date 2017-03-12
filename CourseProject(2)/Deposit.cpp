#include "Deposit.h"

Deposit::Deposit(System::UInt64 ^userid, System::UInt64 ^sum, System::UInt16 ^depPercent)
{
	this->userid = userid;
	this->currentDepositSumm = sum;
	this->depositPercent = depPercent;
}

Deposit::Deposit(System::UInt64 ^id, System::UInt64 ^userid, System::UInt64 ^sum, System::UInt16 ^depPercent)
{
	this->id = id;
	this->userid = userid;
	this->currentDepositSumm = sum;
	this->depositPercent = depPercent;
}

System::Void Deposit::addDepositBalance(System::UInt64 sum)
{
	*this->currentDepositSumm = *this->currentDepositSumm + sum;
}

System::Void Deposit::subtractDepositBalance(System::UInt64 sum)
{
	*this->currentDepositSumm = *this->currentDepositSumm - sum;
}

System::Void Deposit::getDeposit(OleDbConnection ^odbc, System::UInt64 ^userid)
{
	odbc->Open();
	System::String ^myQuery = "INSERT INTO TableDeposit (userid,currentDepositSumm,depositPercent) VALUES(@userid,@currentDepositSumm,@depositPercent)";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,odbc);
	
	myCommand->Parameters->AddWithValue("@userid", userid);
	myCommand->Parameters->AddWithValue("@currentDepositSumm", this->getCurrentDepositSumm());
	myCommand->Parameters->AddWithValue("@depositPercent", this->getDepositPercent());
					
	myCommand->ExecuteNonQuery();
	odbc->Close();
	delete myCommand;
	delete myQuery;
}

System::Void Deposit::fillDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of card balance	
	if((tb->Text != "") && (System::Convert::ToUInt64(tb->Text) <= *this->currentDepositSumm))
	{
		this->addDepositBalance(System::Convert::ToUInt64(tb->Text));
		myQuery = "UPDATE [TableDeposit] SET [currentDepositSumm] = " + System::Convert::ToString(this->currentDepositSumm) + "  WHERE [depositid] = " + depositid;
		myCommand = gcnew OleDbCommand(myQuery,odbc);
		myCommand->ExecuteNonQuery();
	}
	else
		System::Windows::Forms::MessageBox::Show("Введите значение!");
}

System::Void Deposit::reduceDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of card balance	
	if((tb->Text != "") && (System::Convert::ToUInt64(tb->Text) <= *this->currentDepositSumm))
	{
		this->subtractDepositBalance(System::Convert::ToUInt64(tb->Text));
		myQuery = "UPDATE [TableDeposit] SET [currentDepositSumm] = " + System::Convert::ToString(this->currentDepositSumm) + "  WHERE [depositid] = " + depositid;
		myCommand = gcnew OleDbCommand(myQuery,odbc);
		myCommand->ExecuteNonQuery();
	}
	else
		System::Windows::Forms::MessageBox::Show("Введите значение!");
}

System::Void Deposit::closeDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of card balance
	if(tb->Text != "")
	{
		myQuery = "DELETE FROM [TableDeposit] WHERE [depositid] = " + depositid;
		myCommand = gcnew OleDbCommand(myQuery,odbc);
		myCommand->ExecuteNonQuery();
		System::Windows::Forms::MessageBox::Show("Депозит закрыт. К выдаче: " +	tb->Text + "$.");
	}
	else
		System::Windows::Forms::MessageBox::Show("Введите значение!");
}