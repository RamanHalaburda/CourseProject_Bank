#pragma once
#include "BaseOperation.h"

ref class Card : public BaseOperation
{
private:
	System::UInt64 ^num;
	System::UInt64 ^cardBalance;
public:
	Card(System::UInt64 ^userid, System::UInt64 ^num, System::UInt64 ^cardBalance);
	Card(System::UInt64 ^id, System::UInt64 ^userid, System::UInt64 ^num, System::UInt64 ^cardBalance);
	System::UInt64 ^getNum() { return num; }
	System::UInt64 ^getCardBalance() { return cardBalance; }
	System::Void addCardBalance(System::UInt64 sum);
	System::Void subtractCardBalance(System::UInt64 sum);
	System::Void takeCard(OleDbConnection ^odbc);
	System::Void fillCard(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 cardid);
	System::Void takeMoneyCard(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 cardid);

};