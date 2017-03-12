#pragma once
#include "BaseOperation.h"

ref class Credit : public BaseOperation
{
private:
	System::UInt16 ^percent;
	System::UInt64 ^gotMoney;
	System::UInt64 ^returnedMoney;
public:
	Credit(System::UInt64 ^userid, System::UInt16 ^percent, System::UInt64 ^gotMoney, System::UInt64 ^returnedMoney);
	Credit(System::UInt64 ^id, System::UInt64 ^userid, System::UInt16 ^percent, System::UInt64 ^gotMoney, System::UInt64 ^returnedMoney);
	System::UInt16 ^getPercent() { return percent; }
	System::UInt64 ^getGotMoney() { return gotMoney; }
	System::UInt64 ^getReturnedMoney() { return returnedMoney; }
	System::Void changeReturnedMoney(System::UInt64 sum);
	System::Void getCredit(OleDbConnection ^odbc);
	System::Void payCredit(OleDbConnection ^odbc, System::Windows::Forms::TextBox ^tb, System::UInt64 creditid, System::UInt64 need_pay);
};