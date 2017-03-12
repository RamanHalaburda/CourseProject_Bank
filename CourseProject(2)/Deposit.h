#pragma once
#include "BaseOperation.h"

ref class Deposit : public BaseOperation
{
private:
	System::UInt64 ^currentDepositSumm;
	System::UInt16 ^depositPercent;
public:
	Deposit(System::UInt64 ^userid, System::UInt64 ^sum, System::UInt16 ^depPercent);
	Deposit(System::UInt64 ^id, System::UInt64 ^userid, System::UInt64 ^sum, System::UInt16 ^depPercent);
	System::UInt64 ^getCurrentDepositSumm() { return *this->currentDepositSumm; }
	System::UInt16 ^getDepositPercent() { return *this->depositPercent; } 
	System::Void addDepositBalance(System::UInt64 sum);
	System::Void subtractDepositBalance(System::UInt64 sum);
	System::Void getDeposit(OleDbConnection ^odbc, System::UInt64 ^userid);
	System::Void fillDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid);
	System::Void reduceDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid);
	System::Void closeDeposit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 depositid);
};