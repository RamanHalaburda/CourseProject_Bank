#include "Card.h"

Card::Card(System::UInt64 ^userid, System::UInt64 ^num, System::UInt64 ^cardBalance)
{
	this->userid = userid;
	this->num = num;
	this->cardBalance = cardBalance;
}

Card::Card(System::UInt64 ^id, System::UInt64 ^userid, System::UInt64 ^num, System::UInt64 ^cardBalance)
{
	this->id = id;
	this->userid = userid;
	this->num = num;
	this->cardBalance = cardBalance;
}

System::Void Card::addCardBalance(System::UInt64 sum)
{
	*this->cardBalance = *this->cardBalance + sum;
}

System::Void Card::subtractCardBalance(System::UInt64 sum)
{
	*this->cardBalance = *this->cardBalance - sum;
}

System::Void Card::takeCard(OleDbConnection ^odbc)
{
	odbc->Open();
	System::String ^myQuery = "INSERT INTO TableCard (userid,cardNumber,cardBalance) VALUES(@userid,@cardNumber,@cardBalance)";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,odbc);

	myCommand->Parameters->AddWithValue("@userid",this->getuserid());
	myCommand->Parameters->AddWithValue("@cardNumber", this->getNum());
	myCommand->Parameters->AddWithValue("@cardBalance", this->getCardBalance());
				
	myCommand->ExecuteNonQuery();
	odbc->Close();
}

System::Void Card::fillCard(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 cardid)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of card balance	
	if(tb->Text != "")
	{
		this->addCardBalance(System::Convert::ToUInt64(tb->Text));
		myQuery = "UPDATE [TableCard] SET [cardBalance] = " + System::Convert::ToString(this->cardBalance) + "  WHERE [cardid] = " + cardid;
		myCommand = gcnew OleDbCommand(myQuery,odbc);
		myCommand->ExecuteNonQuery();
	}
	else
		System::Windows::Forms::MessageBox::Show("¬ведите значение!");
}

System::Void Card::takeMoneyCard(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 cardid)
{
	System::String ^myQuery = nullptr;
	OleDbCommand ^myCommand = nullptr;
	// change value of card balance	
	if((tb->Text != "") && (System::Convert::ToUInt64(tb->Text) <= *this->cardBalance))
	{
		this->subtractCardBalance(System::Convert::ToUInt64(tb->Text));
		myQuery = "UPDATE [TableCard] SET [cardBalance] = " + System::Convert::ToString(this->cardBalance) + "  WHERE [cardid] = " + cardid;
		myCommand = gcnew OleDbCommand(myQuery,odbc);
		myCommand->ExecuteNonQuery();
	}
	else
		System::Windows::Forms::MessageBox::Show("¬ведите значение!");
}