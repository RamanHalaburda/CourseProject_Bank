#pragma once
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>


#include "Person.h"
#include "BaseOperation.h"
#include "Credit.h"
#include "Deposit.h"
#include "Card.h"

//#include "SqlCommon.h"
//#include "SqlDatabase.h"
//#include "SqlField.h"
//#include "SqlTable.h"
//using namespace sql;

//sql::Database db;
//DRIVER=SQLite3 ODBC Driver;Database="c:\mydb.db";LongNames=0;Timeout=1000;NoTXN=0;SyncPragma=NORMAL;StepAPI=0;
//connect = gcnew SQLiteConnection("Data Source=c:\mydb.db;Version=3;");
namespace CourseProject2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// Сводка для MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Diagnostics::EventLog^  eventLog1;			 
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	public: System::Data::OleDb::OleDbConnection^  oleDbConnection2;
	private: 

	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  count;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  fname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  sname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  lname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  age;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  CREDIT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gotMoney;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  returnedMoney;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  CARD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cardNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  cardBalance;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  DEPOSIT;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  currentDepositSumm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  depositPercent;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  balance4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  num3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  balance3;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabControl^  tabControl3;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox53;
	private: System::Windows::Forms::TextBox^  textBox54;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabControl^  tabControl4;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox52;
	private: System::Windows::Forms::TabPage^  tabPage10;
	private: System::Windows::Forms::TextBox^  textBox60;
	private: System::Windows::Forms::TabPage^  tabPage11;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage12;
	private: System::Windows::Forms::TabPage^  tabPage14;
	private: System::Windows::Forms::TabPage^  tabPage13;
	private: System::Windows::Forms::TextBox^  textBox62;
	private: System::Windows::Forms::TextBox^  textBox63;
	private: System::Windows::Forms::TextBox^  textBox64;
	private: System::Windows::Forms::TextBox^  textBox65;
	private: System::Windows::Forms::TextBox^  textBox66;
	private: System::Windows::Forms::TextBox^  textBox67;
	private: System::Windows::Forms::TextBox^  textBox68;
	private: System::Windows::Forms::TextBox^  textBox69;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::TextBox^  textBox70;
	private: System::Windows::Forms::TextBox^  textBox71;
	private: System::Windows::Forms::TextBox^  textBox72;
	private: System::Windows::Forms::TextBox^  textBox73;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  percent2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  gotMoney2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  returnedMoney3;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox74;
	private: System::Windows::Forms::TextBox^  textBox75;
	private: System::Windows::Forms::TextBox^  textBox76;
	private: System::Windows::Forms::TextBox^  textBox57;
	private: System::Windows::Forms::TextBox^  textBox83;
	private: System::Windows::Forms::TextBox^  textBox84;
	private: System::Windows::Forms::TextBox^  textBox85;
	private: System::Windows::Forms::TextBox^  textBox86;
	private: System::Windows::Forms::TextBox^  textBox87;
	private: System::Windows::Forms::TextBox^  textBox88;
	private: System::Windows::Forms::TextBox^  textBox89;
	private: System::Windows::Forms::TextBox^  textBox55;
	private: System::Windows::Forms::TextBox^  textBox56;
	private: System::Windows::Forms::TextBox^  textBox58;
	private: System::Windows::Forms::TextBox^  textBox59;
	private: System::Windows::Forms::TextBox^  textBox61;
	private: System::Windows::Forms::TextBox^  textBox77;
	private: System::Windows::Forms::TextBox^  textBox78;
	private: System::Windows::Forms::TextBox^  textBox79;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  textBox91;
	private: System::Windows::Forms::TextBox^  textBox92;
	private: System::Windows::Forms::TextBox^  textBox93;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::TextBox^  textBox80;
	private: System::Windows::Forms::TextBox^  textBox81;
	private: System::Windows::Forms::TextBox^  textBox82;
	private: System::Windows::Forms::TextBox^  textBox90;
	private: System::Windows::Forms::TextBox^  textBox94;
	private: System::Windows::Forms::TextBox^  textBox95;
	private: System::Windows::Forms::TextBox^  textBox96;
	private: System::Windows::Forms::TextBox^  textBox103;
	private: System::Windows::Forms::TextBox^  textBox104;
	private: System::Windows::Forms::TextBox^  textBox105;
	private: System::Windows::Forms::TextBox^  textBox100;
	private: System::Windows::Forms::TextBox^  textBox101;
	private: System::Windows::Forms::TextBox^  textBox102;
	private: System::Windows::Forms::TextBox^  textBox97;
	private: System::Windows::Forms::TextBox^  textBox98;
	private: System::Windows::Forms::TextBox^  textBox99;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  idcolumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  fname1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  sname1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  lname1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  age1;
	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox64 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->textBox94 = (gcnew System::Windows::Forms::TextBox());
			this->textBox95 = (gcnew System::Windows::Forms::TextBox());
			this->textBox96 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox91 = (gcnew System::Windows::Forms::TextBox());
			this->textBox92 = (gcnew System::Windows::Forms::TextBox());
			this->textBox93 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox90 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->textBox103 = (gcnew System::Windows::Forms::TextBox());
			this->textBox104 = (gcnew System::Windows::Forms::TextBox());
			this->textBox105 = (gcnew System::Windows::Forms::TextBox());
			this->textBox100 = (gcnew System::Windows::Forms::TextBox());
			this->textBox101 = (gcnew System::Windows::Forms::TextBox());
			this->textBox102 = (gcnew System::Windows::Forms::TextBox());
			this->textBox97 = (gcnew System::Windows::Forms::TextBox());
			this->textBox98 = (gcnew System::Windows::Forms::TextBox());
			this->textBox99 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->idcolumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fname1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sname1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lname1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->id4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->balance4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->id3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->num3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->balance3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->id2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->percent2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gotMoney2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->returnedMoney3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->count = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CREDIT = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->percent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gotMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->returnedMoney = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CARD = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->cardNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cardBalance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DEPOSIT = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->currentDepositSumm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->depositPercent = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->eventLog1 = (gcnew System::Diagnostics::EventLog());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection2 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->tabPage10->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->tabPage14->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage13->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(954, 474);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(946, 448);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Добавление клиента";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 192);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Добавить клиента";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(729, 9);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(70, 17);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Депозит";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(484, 9);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 17);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Пластиковая карта";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(263, 9);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(62, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Кредит";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainForm::checkBox1_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox30);
			this->groupBox4->Controls->Add(this->textBox31);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->textBox24);
			this->groupBox4->Controls->Add(this->textBox25);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Location = System::Drawing::Point(729, 32);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(210, 154);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Депозит";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(190, 47);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(15, 20);
			this->textBox30->TabIndex = 35;
			this->textBox30->Text = L"%";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(191, 73);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(15, 20);
			this->textBox31->TabIndex = 34;
			this->textBox31->Text = L"$";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(112, 46);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(73, 20);
			this->textBox22->TabIndex = 33;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(112, 72);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(73, 20);
			this->textBox23->TabIndex = 32;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(6, 46);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 31;
			this->textBox24->Text = L"Процент: ";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(6, 72);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 30;
			this->textBox25->Text = L"Баланс: ";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(6, 19);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 29;
			this->textBox26->Text = L"Введите данные";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->textBox32);
			this->groupBox3->Controls->Add(this->textBox17);
			this->groupBox3->Controls->Add(this->textBox18);
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->textBox20);
			this->groupBox3->Controls->Add(this->textBox21);
			this->groupBox3->Location = System::Drawing::Point(484, 32);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(239, 154);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Плстиковая карта";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(218, 73);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(15, 20);
			this->textBox32->TabIndex = 35;
			this->textBox32->Text = L"$";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(112, 72);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(101, 20);
			this->textBox17->TabIndex = 28;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(112, 46);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(101, 20);
			this->textBox18->TabIndex = 27;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(6, 72);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 26;
			this->textBox19->Text = L"Баланс: ";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(6, 46);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 25;
			this->textBox20->Text = L"Номер карты: ";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(6, 20);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 24;
			this->textBox21->Text = L"Введите данные";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox27);
			this->groupBox2->Controls->Add(this->textBox10);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->textBox29);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox16);
			this->groupBox2->Location = System::Drawing::Point(263, 32);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(215, 154);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Кредит";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(193, 46);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(15, 20);
			this->textBox27->TabIndex = 30;
			this->textBox27->Text = L"%";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(112, 46);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(75, 20);
			this->textBox10->TabIndex = 29;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(6, 46);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 28;
			this->textBox13->Text = L"Процент:";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(193, 73);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(15, 20);
			this->textBox29->TabIndex = 25;
			this->textBox29->Text = L"$";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(112, 72);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(75, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(6, 72);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 19;
			this->textBox15->Text = L"Получено: ";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(6, 19);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 20);
			this->textBox16->TabIndex = 18;
			this->textBox16->Text = L"Введите данные";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(8, 32);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(249, 154);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Личные данные";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(112, 124);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(130, 20);
			this->textBox9->TabIndex = 18;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(6, 124);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 17;
			this->textBox8->Text = L"Возраст: ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(112, 98);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(112, 72);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(112, 46);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 98);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"Отчество:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 72);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Имя: ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Фамилия: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"Введите данные";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl2);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->dataGridView5);
			this->tabPage3->Controls->Add(this->dataGridView4);
			this->tabPage3->Controls->Add(this->dataGridView3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(946, 448);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Об отдельном клиенте";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Enter += gcnew System::EventHandler(this, &MainForm::tabPage3_Enter);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Location = System::Drawing::Point(586, 4);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(352, 255);
			this->tabControl2->TabIndex = 5;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(344, 229);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"Кредит";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage7);
			this->tabControl3->Controls->Add(this->tabPage8);
			this->tabControl3->Location = System::Drawing::Point(-2, -2);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(348, 233);
			this->tabControl3->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->textBox33);
			this->tabPage7->Controls->Add(this->textBox37);
			this->tabPage7->Controls->Add(this->textBox41);
			this->tabPage7->Controls->Add(this->button10);
			this->tabPage7->Controls->Add(this->textBox36);
			this->tabPage7->Controls->Add(this->textBox40);
			this->tabPage7->Controls->Add(this->textBox43);
			this->tabPage7->Controls->Add(this->textBox44);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(340, 207);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = L"Добавить";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(204, 32);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(15, 20);
			this->textBox33->TabIndex = 41;
			this->textBox33->Text = L"%";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(113, 32);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(85, 20);
			this->textBox37->TabIndex = 40;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(7, 32);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(100, 20);
			this->textBox41->TabIndex = 39;
			this->textBox41->Text = L"Процент:";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(7, 84);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 25);
			this->button10->TabIndex = 38;
			this->button10->Text = L"Добавить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(204, 58);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(15, 20);
			this->textBox36->TabIndex = 35;
			this->textBox36->Text = L"$";
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(113, 58);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(85, 20);
			this->textBox40->TabIndex = 32;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(7, 58);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 20);
			this->textBox43->TabIndex = 29;
			this->textBox43->Text = L"Получено: ";
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(6, 6);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(100, 20);
			this->textBox44->TabIndex = 28;
			this->textBox44->Text = L"Введите данные";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->textBox74);
			this->tabPage8->Controls->Add(this->textBox75);
			this->tabPage8->Controls->Add(this->textBox76);
			this->tabPage8->Controls->Add(this->textBox35);
			this->tabPage8->Controls->Add(this->textBox38);
			this->tabPage8->Controls->Add(this->textBox42);
			this->tabPage8->Controls->Add(this->textBox11);
			this->tabPage8->Controls->Add(this->textBox14);
			this->tabPage8->Controls->Add(this->textBox28);
			this->tabPage8->Controls->Add(this->button3);
			this->tabPage8->Controls->Add(this->textBox47);
			this->tabPage8->Controls->Add(this->textBox50);
			this->tabPage8->Controls->Add(this->textBox53);
			this->tabPage8->Controls->Add(this->textBox54);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(340, 207);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = L"Оплатить";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// textBox74
			// 
			this->textBox74->Location = System::Drawing::Point(213, 84);
			this->textBox74->Name = L"textBox74";
			this->textBox74->Size = System::Drawing::Size(15, 20);
			this->textBox74->TabIndex = 45;
			this->textBox74->Text = L"$";
			// 
			// textBox75
			// 
			this->textBox75->Location = System::Drawing::Point(122, 84);
			this->textBox75->Name = L"textBox75";
			this->textBox75->Size = System::Drawing::Size(85, 20);
			this->textBox75->TabIndex = 44;
			// 
			// textBox76
			// 
			this->textBox76->Location = System::Drawing::Point(8, 84);
			this->textBox76->Name = L"textBox76";
			this->textBox76->Size = System::Drawing::Size(108, 20);
			this->textBox76->TabIndex = 43;
			this->textBox76->Text = L"Осталось оплатить: ";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(213, 58);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(15, 20);
			this->textBox35->TabIndex = 42;
			this->textBox35->Text = L"%";
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(122, 58);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(85, 20);
			this->textBox38->TabIndex = 41;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(7, 58);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(109, 20);
			this->textBox42->TabIndex = 40;
			this->textBox42->Text = L"Под процент: ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(213, 32);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(15, 20);
			this->textBox11->TabIndex = 39;
			this->textBox11->Text = L"$";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(122, 32);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(85, 20);
			this->textBox14->TabIndex = 38;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(7, 32);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(109, 20);
			this->textBox28->TabIndex = 37;
			this->textBox28->Text = L"Вам было выдано: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 137);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 25);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Оплатить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(213, 110);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(15, 20);
			this->textBox47->TabIndex = 35;
			this->textBox47->Text = L"$";
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(122, 110);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(85, 20);
			this->textBox50->TabIndex = 32;
			// 
			// textBox53
			// 
			this->textBox53->Location = System::Drawing::Point(7, 110);
			this->textBox53->Name = L"textBox53";
			this->textBox53->Size = System::Drawing::Size(109, 20);
			this->textBox53->TabIndex = 29;
			this->textBox53->Text = L"Получено: ";
			// 
			// textBox54
			// 
			this->textBox54->Location = System::Drawing::Point(6, 6);
			this->textBox54->Name = L"textBox54";
			this->textBox54->Size = System::Drawing::Size(100, 20);
			this->textBox54->TabIndex = 28;
			this->textBox54->Text = L"Введите данные";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tabControl4);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(344, 229);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"Карта";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage9);
			this->tabControl4->Controls->Add(this->tabPage10);
			this->tabControl4->Controls->Add(this->tabPage11);
			this->tabControl4->Location = System::Drawing::Point(-2, -2);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(348, 233);
			this->tabControl4->TabIndex = 1;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->button4);
			this->tabPage9->Controls->Add(this->textBox45);
			this->tabPage9->Controls->Add(this->textBox46);
			this->tabPage9->Controls->Add(this->textBox48);
			this->tabPage9->Controls->Add(this->textBox49);
			this->tabPage9->Controls->Add(this->textBox51);
			this->tabPage9->Controls->Add(this->textBox52);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(340, 207);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Добавить";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(7, 84);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 25);
			this->button4->TabIndex = 42;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(233, 58);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(15, 20);
			this->textBox45->TabIndex = 41;
			this->textBox45->Text = L"$";
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(112, 58);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(115, 20);
			this->textBox46->TabIndex = 40;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(112, 32);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(115, 20);
			this->textBox48->TabIndex = 39;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(6, 58);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(100, 20);
			this->textBox49->TabIndex = 38;
			this->textBox49->Text = L"Внесено: ";
			// 
			// textBox51
			// 
			this->textBox51->Location = System::Drawing::Point(6, 32);
			this->textBox51->Name = L"textBox51";
			this->textBox51->Size = System::Drawing::Size(100, 20);
			this->textBox51->TabIndex = 37;
			this->textBox51->Text = L"Номер карты: ";
			// 
			// textBox52
			// 
			this->textBox52->Location = System::Drawing::Point(6, 6);
			this->textBox52->Name = L"textBox52";
			this->textBox52->Size = System::Drawing::Size(100, 20);
			this->textBox52->TabIndex = 36;
			this->textBox52->Text = L"Введите данные";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->textBox57);
			this->tabPage10->Controls->Add(this->textBox83);
			this->tabPage10->Controls->Add(this->textBox84);
			this->tabPage10->Controls->Add(this->textBox85);
			this->tabPage10->Controls->Add(this->textBox86);
			this->tabPage10->Controls->Add(this->textBox87);
			this->tabPage10->Controls->Add(this->textBox88);
			this->tabPage10->Controls->Add(this->textBox89);
			this->tabPage10->Controls->Add(this->button8);
			this->tabPage10->Controls->Add(this->textBox60);
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(340, 207);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Снять";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// textBox57
			// 
			this->textBox57->Location = System::Drawing::Point(234, 84);
			this->textBox57->Name = L"textBox57";
			this->textBox57->Size = System::Drawing::Size(15, 20);
			this->textBox57->TabIndex = 60;
			this->textBox57->Text = L"$";
			// 
			// textBox83
			// 
			this->textBox83->Location = System::Drawing::Point(113, 84);
			this->textBox83->Name = L"textBox83";
			this->textBox83->Size = System::Drawing::Size(115, 20);
			this->textBox83->TabIndex = 59;
			// 
			// textBox84
			// 
			this->textBox84->Location = System::Drawing::Point(7, 84);
			this->textBox84->Name = L"textBox84";
			this->textBox84->Size = System::Drawing::Size(100, 20);
			this->textBox84->TabIndex = 58;
			this->textBox84->Text = L"Снять сумму: ";
			// 
			// textBox85
			// 
			this->textBox85->Location = System::Drawing::Point(234, 58);
			this->textBox85->Name = L"textBox85";
			this->textBox85->Size = System::Drawing::Size(15, 20);
			this->textBox85->TabIndex = 57;
			this->textBox85->Text = L"$";
			// 
			// textBox86
			// 
			this->textBox86->Location = System::Drawing::Point(113, 58);
			this->textBox86->Name = L"textBox86";
			this->textBox86->Size = System::Drawing::Size(115, 20);
			this->textBox86->TabIndex = 56;
			// 
			// textBox87
			// 
			this->textBox87->Location = System::Drawing::Point(7, 58);
			this->textBox87->Name = L"textBox87";
			this->textBox87->Size = System::Drawing::Size(100, 20);
			this->textBox87->TabIndex = 55;
			this->textBox87->Text = L"Баланс: ";
			// 
			// textBox88
			// 
			this->textBox88->Location = System::Drawing::Point(112, 32);
			this->textBox88->Name = L"textBox88";
			this->textBox88->Size = System::Drawing::Size(115, 20);
			this->textBox88->TabIndex = 54;
			// 
			// textBox89
			// 
			this->textBox89->Location = System::Drawing::Point(6, 32);
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(100, 20);
			this->textBox89->TabIndex = 53;
			this->textBox89->Text = L"Номер карты: ";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(7, 110);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 25);
			this->button8->TabIndex = 42;
			this->button8->Text = L"Снять";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// textBox60
			// 
			this->textBox60->Location = System::Drawing::Point(6, 6);
			this->textBox60->Name = L"textBox60";
			this->textBox60->Size = System::Drawing::Size(100, 20);
			this->textBox60->TabIndex = 36;
			this->textBox60->Text = L"Введите данные";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->textBox55);
			this->tabPage11->Controls->Add(this->textBox56);
			this->tabPage11->Controls->Add(this->textBox58);
			this->tabPage11->Controls->Add(this->textBox59);
			this->tabPage11->Controls->Add(this->textBox61);
			this->tabPage11->Controls->Add(this->textBox77);
			this->tabPage11->Controls->Add(this->textBox78);
			this->tabPage11->Controls->Add(this->textBox79);
			this->tabPage11->Controls->Add(this->button9);
			this->tabPage11->Controls->Add(this->textBox62);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(340, 207);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Пополнить";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// textBox55
			// 
			this->textBox55->Location = System::Drawing::Point(234, 84);
			this->textBox55->Name = L"textBox55";
			this->textBox55->Size = System::Drawing::Size(15, 20);
			this->textBox55->TabIndex = 68;
			this->textBox55->Text = L"$";
			// 
			// textBox56
			// 
			this->textBox56->Location = System::Drawing::Point(113, 84);
			this->textBox56->Name = L"textBox56";
			this->textBox56->Size = System::Drawing::Size(115, 20);
			this->textBox56->TabIndex = 67;
			// 
			// textBox58
			// 
			this->textBox58->Location = System::Drawing::Point(7, 84);
			this->textBox58->Name = L"textBox58";
			this->textBox58->Size = System::Drawing::Size(100, 20);
			this->textBox58->TabIndex = 66;
			this->textBox58->Text = L"Пополнить на: ";
			// 
			// textBox59
			// 
			this->textBox59->Location = System::Drawing::Point(234, 58);
			this->textBox59->Name = L"textBox59";
			this->textBox59->Size = System::Drawing::Size(15, 20);
			this->textBox59->TabIndex = 65;
			this->textBox59->Text = L"$";
			// 
			// textBox61
			// 
			this->textBox61->Location = System::Drawing::Point(113, 58);
			this->textBox61->Name = L"textBox61";
			this->textBox61->Size = System::Drawing::Size(115, 20);
			this->textBox61->TabIndex = 64;
			// 
			// textBox77
			// 
			this->textBox77->Location = System::Drawing::Point(7, 58);
			this->textBox77->Name = L"textBox77";
			this->textBox77->Size = System::Drawing::Size(100, 20);
			this->textBox77->TabIndex = 63;
			this->textBox77->Text = L"Баланс: ";
			// 
			// textBox78
			// 
			this->textBox78->Location = System::Drawing::Point(112, 32);
			this->textBox78->Name = L"textBox78";
			this->textBox78->Size = System::Drawing::Size(115, 20);
			this->textBox78->TabIndex = 62;
			// 
			// textBox79
			// 
			this->textBox79->Location = System::Drawing::Point(6, 32);
			this->textBox79->Name = L"textBox79";
			this->textBox79->Size = System::Drawing::Size(100, 20);
			this->textBox79->TabIndex = 61;
			this->textBox79->Text = L"Номер карты: ";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(7, 110);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 25);
			this->button9->TabIndex = 46;
			this->button9->Text = L"Пополнить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// textBox62
			// 
			this->textBox62->Location = System::Drawing::Point(6, 6);
			this->textBox62->Name = L"textBox62";
			this->textBox62->Size = System::Drawing::Size(100, 20);
			this->textBox62->TabIndex = 42;
			this->textBox62->Text = L"Введите данные";
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl5);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(344, 229);
			this->tabPage6->TabIndex = 2;
			this->tabPage6->Text = L"Депозит";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage12);
			this->tabControl5->Controls->Add(this->tabPage14);
			this->tabControl5->Controls->Add(this->tabPage2);
			this->tabControl5->Controls->Add(this->tabPage13);
			this->tabControl5->Location = System::Drawing::Point(-2, -2);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(348, 233);
			this->tabControl5->TabIndex = 1;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->button5);
			this->tabPage12->Controls->Add(this->textBox63);
			this->tabPage12->Controls->Add(this->textBox64);
			this->tabPage12->Controls->Add(this->textBox65);
			this->tabPage12->Controls->Add(this->textBox66);
			this->tabPage12->Controls->Add(this->textBox67);
			this->tabPage12->Controls->Add(this->textBox68);
			this->tabPage12->Controls->Add(this->textBox69);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(340, 207);
			this->tabPage12->TabIndex = 0;
			this->tabPage12->Text = L"Добавить";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(6, 84);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 25);
			this->button5->TabIndex = 43;
			this->button5->Text = L"Добавить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// textBox63
			// 
			this->textBox63->Location = System::Drawing::Point(203, 33);
			this->textBox63->Name = L"textBox63";
			this->textBox63->Size = System::Drawing::Size(15, 20);
			this->textBox63->TabIndex = 42;
			this->textBox63->Text = L"%";
			// 
			// textBox64
			// 
			this->textBox64->Location = System::Drawing::Point(203, 59);
			this->textBox64->Name = L"textBox64";
			this->textBox64->Size = System::Drawing::Size(15, 20);
			this->textBox64->TabIndex = 41;
			this->textBox64->Text = L"$";
			// 
			// textBox65
			// 
			this->textBox65->Location = System::Drawing::Point(112, 32);
			this->textBox65->Name = L"textBox65";
			this->textBox65->Size = System::Drawing::Size(85, 20);
			this->textBox65->TabIndex = 40;
			// 
			// textBox66
			// 
			this->textBox66->Location = System::Drawing::Point(112, 58);
			this->textBox66->Name = L"textBox66";
			this->textBox66->Size = System::Drawing::Size(85, 20);
			this->textBox66->TabIndex = 39;
			// 
			// textBox67
			// 
			this->textBox67->Location = System::Drawing::Point(6, 32);
			this->textBox67->Name = L"textBox67";
			this->textBox67->Size = System::Drawing::Size(100, 20);
			this->textBox67->TabIndex = 38;
			this->textBox67->Text = L"Процент: ";
			// 
			// textBox68
			// 
			this->textBox68->Location = System::Drawing::Point(6, 58);
			this->textBox68->Name = L"textBox68";
			this->textBox68->Size = System::Drawing::Size(100, 20);
			this->textBox68->TabIndex = 37;
			this->textBox68->Text = L"Баланс: ";
			// 
			// textBox69
			// 
			this->textBox69->Location = System::Drawing::Point(6, 6);
			this->textBox69->Name = L"textBox69";
			this->textBox69->Size = System::Drawing::Size(100, 20);
			this->textBox69->TabIndex = 36;
			this->textBox69->Text = L"Введите данные";
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->textBox94);
			this->tabPage14->Controls->Add(this->textBox95);
			this->tabPage14->Controls->Add(this->textBox96);
			this->tabPage14->Controls->Add(this->button7);
			this->tabPage14->Controls->Add(this->textBox70);
			this->tabPage14->Controls->Add(this->textBox71);
			this->tabPage14->Controls->Add(this->textBox72);
			this->tabPage14->Controls->Add(this->textBox73);
			this->tabPage14->Location = System::Drawing::Point(4, 22);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(340, 207);
			this->tabPage14->TabIndex = 2;
			this->tabPage14->Text = L"Пополнить";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// textBox94
			// 
			this->textBox94->Location = System::Drawing::Point(203, 33);
			this->textBox94->Name = L"textBox94";
			this->textBox94->Size = System::Drawing::Size(15, 20);
			this->textBox94->TabIndex = 53;
			this->textBox94->Text = L"$";
			// 
			// textBox95
			// 
			this->textBox95->Location = System::Drawing::Point(112, 32);
			this->textBox95->Name = L"textBox95";
			this->textBox95->Size = System::Drawing::Size(85, 20);
			this->textBox95->TabIndex = 52;
			// 
			// textBox96
			// 
			this->textBox96->Location = System::Drawing::Point(6, 32);
			this->textBox96->Name = L"textBox96";
			this->textBox96->Size = System::Drawing::Size(100, 20);
			this->textBox96->TabIndex = 51;
			this->textBox96->Text = L"Баланс: ";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(6, 84);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 25);
			this->button7->TabIndex = 46;
			this->button7->Text = L"Пополнить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// textBox70
			// 
			this->textBox70->Location = System::Drawing::Point(203, 59);
			this->textBox70->Name = L"textBox70";
			this->textBox70->Size = System::Drawing::Size(15, 20);
			this->textBox70->TabIndex = 45;
			this->textBox70->Text = L"$";
			// 
			// textBox71
			// 
			this->textBox71->Location = System::Drawing::Point(112, 58);
			this->textBox71->Name = L"textBox71";
			this->textBox71->Size = System::Drawing::Size(85, 20);
			this->textBox71->TabIndex = 44;
			// 
			// textBox72
			// 
			this->textBox72->Location = System::Drawing::Point(6, 58);
			this->textBox72->Name = L"textBox72";
			this->textBox72->Size = System::Drawing::Size(100, 20);
			this->textBox72->TabIndex = 43;
			this->textBox72->Text = L"Пополнить на: ";
			// 
			// textBox73
			// 
			this->textBox73->Location = System::Drawing::Point(6, 6);
			this->textBox73->Name = L"textBox73";
			this->textBox73->Size = System::Drawing::Size(100, 20);
			this->textBox73->TabIndex = 42;
			this->textBox73->Text = L"Введите данные";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox91);
			this->tabPage2->Controls->Add(this->textBox92);
			this->tabPage2->Controls->Add(this->textBox93);
			this->tabPage2->Controls->Add(this->button11);
			this->tabPage2->Controls->Add(this->textBox80);
			this->tabPage2->Controls->Add(this->textBox81);
			this->tabPage2->Controls->Add(this->textBox82);
			this->tabPage2->Controls->Add(this->textBox90);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(340, 207);
			this->tabPage2->TabIndex = 3;
			this->tabPage2->Text = L"Частичное снятие";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox91
			// 
			this->textBox91->Location = System::Drawing::Point(203, 59);
			this->textBox91->Name = L"textBox91";
			this->textBox91->Size = System::Drawing::Size(15, 20);
			this->textBox91->TabIndex = 54;
			this->textBox91->Text = L"$";
			// 
			// textBox92
			// 
			this->textBox92->Location = System::Drawing::Point(112, 58);
			this->textBox92->Name = L"textBox92";
			this->textBox92->Size = System::Drawing::Size(85, 20);
			this->textBox92->TabIndex = 53;
			// 
			// textBox93
			// 
			this->textBox93->Location = System::Drawing::Point(6, 58);
			this->textBox93->Name = L"textBox93";
			this->textBox93->Size = System::Drawing::Size(100, 20);
			this->textBox93->TabIndex = 52;
			this->textBox93->Text = L"Снять:";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 84);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(100, 25);
			this->button11->TabIndex = 51;
			this->button11->Text = L"Снять";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// textBox80
			// 
			this->textBox80->Location = System::Drawing::Point(203, 33);
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(15, 20);
			this->textBox80->TabIndex = 50;
			this->textBox80->Text = L"$";
			// 
			// textBox81
			// 
			this->textBox81->Location = System::Drawing::Point(112, 32);
			this->textBox81->Name = L"textBox81";
			this->textBox81->Size = System::Drawing::Size(85, 20);
			this->textBox81->TabIndex = 49;
			// 
			// textBox82
			// 
			this->textBox82->Location = System::Drawing::Point(6, 32);
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(100, 20);
			this->textBox82->TabIndex = 48;
			this->textBox82->Text = L"Баланс: ";
			// 
			// textBox90
			// 
			this->textBox90->Location = System::Drawing::Point(6, 6);
			this->textBox90->Name = L"textBox90";
			this->textBox90->Size = System::Drawing::Size(100, 20);
			this->textBox90->TabIndex = 47;
			this->textBox90->Text = L"Введите данные";
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->textBox103);
			this->tabPage13->Controls->Add(this->textBox104);
			this->tabPage13->Controls->Add(this->textBox105);
			this->tabPage13->Controls->Add(this->textBox100);
			this->tabPage13->Controls->Add(this->textBox101);
			this->tabPage13->Controls->Add(this->textBox102);
			this->tabPage13->Controls->Add(this->textBox97);
			this->tabPage13->Controls->Add(this->textBox98);
			this->tabPage13->Controls->Add(this->textBox99);
			this->tabPage13->Controls->Add(this->button6);
			this->tabPage13->Location = System::Drawing::Point(4, 22);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(340, 207);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"Закрыть";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// textBox103
			// 
			this->textBox103->Location = System::Drawing::Point(203, 59);
			this->textBox103->Name = L"textBox103";
			this->textBox103->Size = System::Drawing::Size(15, 20);
			this->textBox103->TabIndex = 62;
			this->textBox103->Text = L"$";
			// 
			// textBox104
			// 
			this->textBox104->Location = System::Drawing::Point(112, 58);
			this->textBox104->Name = L"textBox104";
			this->textBox104->Size = System::Drawing::Size(85, 20);
			this->textBox104->TabIndex = 61;
			// 
			// textBox105
			// 
			this->textBox105->Location = System::Drawing::Point(6, 58);
			this->textBox105->Name = L"textBox105";
			this->textBox105->Size = System::Drawing::Size(100, 20);
			this->textBox105->TabIndex = 60;
			this->textBox105->Text = L"Итого: ";
			// 
			// textBox100
			// 
			this->textBox100->Location = System::Drawing::Point(203, 33);
			this->textBox100->Name = L"textBox100";
			this->textBox100->Size = System::Drawing::Size(15, 20);
			this->textBox100->TabIndex = 59;
			this->textBox100->Text = L"%";
			// 
			// textBox101
			// 
			this->textBox101->Location = System::Drawing::Point(112, 32);
			this->textBox101->Name = L"textBox101";
			this->textBox101->Size = System::Drawing::Size(85, 20);
			this->textBox101->TabIndex = 58;
			// 
			// textBox102
			// 
			this->textBox102->Location = System::Drawing::Point(6, 32);
			this->textBox102->Name = L"textBox102";
			this->textBox102->Size = System::Drawing::Size(100, 20);
			this->textBox102->TabIndex = 57;
			this->textBox102->Text = L"Процент: ";
			// 
			// textBox97
			// 
			this->textBox97->Location = System::Drawing::Point(203, 7);
			this->textBox97->Name = L"textBox97";
			this->textBox97->Size = System::Drawing::Size(15, 20);
			this->textBox97->TabIndex = 56;
			this->textBox97->Text = L"$";
			// 
			// textBox98
			// 
			this->textBox98->Location = System::Drawing::Point(112, 6);
			this->textBox98->Name = L"textBox98";
			this->textBox98->Size = System::Drawing::Size(85, 20);
			this->textBox98->TabIndex = 55;
			// 
			// textBox99
			// 
			this->textBox99->Location = System::Drawing::Point(6, 6);
			this->textBox99->Name = L"textBox99";
			this->textBox99->Size = System::Drawing::Size(100, 20);
			this->textBox99->TabIndex = 54;
			this->textBox99->Text = L"Баланс: ";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(7, 84);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 25);
			this->button6->TabIndex = 37;
			this->button6->Text = L"Закрыть";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->textBox39);
			this->groupBox5->Controls->Add(this->textBox34);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Location = System::Drawing::Point(8, 3);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(562, 256);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Клиент";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(446, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(58, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Поиск";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(446, 45);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(112, 20);
			this->textBox39->TabIndex = 5;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(446, 19);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(59, 20);
			this->textBox34->TabIndex = 2;
			this->textBox34->Text = L"Фамилия:";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->idcolumn, 
				this->fname1, this->sname1, this->lname1, this->age1});
			this->dataGridView2->Location = System::Drawing::Point(6, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->Size = System::Drawing::Size(434, 214);
			this->dataGridView2->TabIndex = 0;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView2_CellClick);
			// 
			// idcolumn
			// 
			this->idcolumn->HeaderText = L"ID";
			this->idcolumn->Name = L"idcolumn";
			this->idcolumn->ReadOnly = true;
			this->idcolumn->Width = 48;
			// 
			// fname1
			// 
			this->fname1->HeaderText = L"First name";
			this->fname1->Name = L"fname1";
			this->fname1->ReadOnly = true;
			// 
			// sname1
			// 
			this->sname1->HeaderText = L"Second name";
			this->sname1->Name = L"sname1";
			this->sname1->ReadOnly = true;
			// 
			// lname1
			// 
			this->lname1->HeaderText = L"Last name";
			this->lname1->Name = L"lname1";
			this->lname1->ReadOnly = true;
			// 
			// age1
			// 
			this->age1->HeaderText = L"Age";
			this->age1->Name = L"age1";
			this->age1->ReadOnly = true;
			this->age1->Width = 42;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->id4, this->balance4, 
				this->percent4});
			this->dataGridView5->Location = System::Drawing::Point(685, 265);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->Size = System::Drawing::Size(253, 175);
			this->dataGridView5->TabIndex = 3;
			this->dataGridView5->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView5_CellClick);
			// 
			// id4
			// 
			this->id4->HeaderText = L"ID deposit";
			this->id4->Name = L"id4";
			this->id4->ReadOnly = true;
			this->id4->Width = 50;
			// 
			// balance4
			// 
			this->balance4->HeaderText = L"Balance";
			this->balance4->Name = L"balance4";
			this->balance4->ReadOnly = true;
			// 
			// percent4
			// 
			this->percent4->HeaderText = L"Percent";
			this->percent4->Name = L"percent4";
			this->percent4->ReadOnly = true;
			this->percent4->Width = 60;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->id3, this->num3, 
				this->balance3});
			this->dataGridView4->Location = System::Drawing::Point(372, 265);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->Size = System::Drawing::Size(303, 175);
			this->dataGridView4->TabIndex = 2;
			this->dataGridView4->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView4_CellClick);
			// 
			// id3
			// 
			this->id3->HeaderText = L"ID card";
			this->id3->Name = L"id3";
			this->id3->ReadOnly = true;
			this->id3->Width = 60;
			// 
			// num3
			// 
			this->num3->HeaderText = L"Card number";
			this->num3->Name = L"num3";
			this->num3->ReadOnly = true;
			// 
			// balance3
			// 
			this->balance3->HeaderText = L"Balance";
			this->balance3->Name = L"balance3";
			this->balance3->ReadOnly = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->id2, this->percent2, 
				this->gotMoney2, this->returnedMoney3});
			this->dataGridView3->Location = System::Drawing::Point(8, 265);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->Size = System::Drawing::Size(353, 175);
			this->dataGridView3->TabIndex = 1;
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView3_CellClick);
			// 
			// id2
			// 
			this->id2->HeaderText = L"ID credit";
			this->id2->Name = L"id2";
			this->id2->ReadOnly = true;
			this->id2->Width = 60;
			// 
			// percent2
			// 
			this->percent2->HeaderText = L"Percent";
			this->percent2->Name = L"percent2";
			this->percent2->ReadOnly = true;
			this->percent2->Width = 50;
			// 
			// gotMoney2
			// 
			this->gotMoney2->HeaderText = L"Got money";
			this->gotMoney2->Name = L"gotMoney2";
			this->gotMoney2->ReadOnly = true;
			this->gotMoney2->Width = 90;
			// 
			// returnedMoney3
			// 
			this->returnedMoney3->HeaderText = L"Returned money";
			this->returnedMoney3->Name = L"returnedMoney3";
			this->returnedMoney3->ReadOnly = true;
			this->returnedMoney3->Width = 110;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(15) {this->count, 
				this->fname, this->sname, this->lname, this->age, this->CREDIT, this->percent, this->gotMoney, this->returnedMoney, this->CARD, 
				this->cardNumber, this->cardBalance, this->DEPOSIT, this->currentDepositSumm, this->depositPercent});
			this->dataGridView1->Location = System::Drawing::Point(3, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1339, 373);
			this->dataGridView1->TabIndex = 0;
			// 
			// count
			// 
			this->count->HeaderText = L"№";
			this->count->Name = L"count";
			this->count->Width = 20;
			// 
			// fname
			// 
			this->fname->HeaderText = L"First name";
			this->fname->Name = L"fname";
			this->fname->Width = 90;
			// 
			// sname
			// 
			this->sname->HeaderText = L"Second name";
			this->sname->Name = L"sname";
			// 
			// lname
			// 
			this->lname->HeaderText = L"Last name";
			this->lname->Name = L"lname";
			this->lname->Width = 90;
			// 
			// age
			// 
			this->age->HeaderText = L"Age";
			this->age->Name = L"age";
			this->age->Width = 32;
			// 
			// CREDIT
			// 
			this->CREDIT->HeaderText = L"CREDIT";
			this->CREDIT->Name = L"CREDIT";
			this->CREDIT->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CREDIT->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Programmatic;
			this->CREDIT->Width = 31;
			// 
			// percent
			// 
			this->percent->HeaderText = L"Credit percent";
			this->percent->Name = L"percent";
			this->percent->Width = 50;
			// 
			// gotMoney
			// 
			this->gotMoney->HeaderText = L"Got money";
			this->gotMoney->Name = L"gotMoney";
			this->gotMoney->Width = 90;
			// 
			// returnedMoney
			// 
			this->returnedMoney->HeaderText = L"Returned money";
			this->returnedMoney->Name = L"returnedMoney";
			this->returnedMoney->Width = 90;
			// 
			// CARD
			// 
			this->CARD->HeaderText = L"CARD";
			this->CARD->Name = L"CARD";
			this->CARD->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->CARD->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->CARD->Width = 31;
			// 
			// cardNumber
			// 
			this->cardNumber->HeaderText = L"Card number";
			this->cardNumber->Name = L"cardNumber";
			this->cardNumber->Width = 90;
			// 
			// cardBalance
			// 
			this->cardBalance->HeaderText = L"Balance";
			this->cardBalance->Name = L"cardBalance";
			// 
			// DEPOSIT
			// 
			this->DEPOSIT->HeaderText = L"DEPOSIT";
			this->DEPOSIT->Name = L"DEPOSIT";
			this->DEPOSIT->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->DEPOSIT->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->DEPOSIT->Width = 31;
			// 
			// currentDepositSumm
			// 
			this->currentDepositSumm->HeaderText = L"Balance";
			this->currentDepositSumm->Name = L"currentDepositSumm";
			// 
			// depositPercent
			// 
			this->depositPercent->HeaderText = L"Deposit percent";
			this->depositPercent->Name = L"depositPercent";
			this->depositPercent->Width = 50;
			// 
			// eventLog1
			// 
			this->eventLog1->SynchronizingObject = this;
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        TableBankClient.*\r\nFROM            TableBankClient";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection2;
			// 
			// oleDbConnection2
			// 
			this->oleDbConnection2->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=\"D:\\study\\(1) Учёба\\БарГУ Инж.Фак\\О" 
				L"бъектно-ориентированное программирование\\projects\\CourseProject(2)\\CourseProject" 
				L"(2)\\BankClient.accdb\"";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = resources->GetString(L"oleDbInsertCommand1.CommandText");
			this->oleDbInsertCommand1->Connection = this->oleDbConnection2;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(14) {(gcnew System::Data::OleDb::OleDbParameter(L"fname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"fname")), (gcnew System::Data::OleDb::OleDbParameter(L"lname", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"lname")), (gcnew System::Data::OleDb::OleDbParameter(L"sname", System::Data::OleDb::OleDbType::VarWChar, 0, L"sname")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"birthday", System::Data::OleDb::OleDbType::Date, 0, L"birthday")), (gcnew System::Data::OleDb::OleDbParameter(L"CREDIT", 
				System::Data::OleDb::OleDbType::Boolean, 0, L"CREDIT")), (gcnew System::Data::OleDb::OleDbParameter(L"percent", System::Data::OleDb::OleDbType::Integer, 
				0, L"percent")), (gcnew System::Data::OleDb::OleDbParameter(L"gotMoney", System::Data::OleDb::OleDbType::Integer, 0, L"gotMoney")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"returnedMoney", System::Data::OleDb::OleDbType::Integer, 0, L"returnedMoney")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"CARD", System::Data::OleDb::OleDbType::Boolean, 0, L"CARD")), (gcnew System::Data::OleDb::OleDbParameter(L"card_number", 
				System::Data::OleDb::OleDbType::Integer, 0, L"card number")), (gcnew System::Data::OleDb::OleDbParameter(L"cardBalance", 
				System::Data::OleDb::OleDbType::Integer, 0, L"cardBalance")), (gcnew System::Data::OleDb::OleDbParameter(L"DEPOSIT", System::Data::OleDb::OleDbType::Boolean, 
				0, L"DEPOSIT")), (gcnew System::Data::OleDb::OleDbParameter(L"curentDepositSumm", System::Data::OleDb::OleDbType::Integer, 
				0, L"curentDepositSumm")), (gcnew System::Data::OleDb::OleDbParameter(L"depositPersent", System::Data::OleDb::OleDbType::Integer, 
				0, L"depositPersent"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection2;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(43) {(gcnew System::Data::OleDb::OleDbParameter(L"fname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"fname")), (gcnew System::Data::OleDb::OleDbParameter(L"lname", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"lname")), (gcnew System::Data::OleDb::OleDbParameter(L"sname", System::Data::OleDb::OleDbType::VarWChar, 0, L"sname")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"birthday", System::Data::OleDb::OleDbType::Date, 0, L"birthday")), (gcnew System::Data::OleDb::OleDbParameter(L"CREDIT", 
				System::Data::OleDb::OleDbType::Boolean, 0, L"CREDIT")), (gcnew System::Data::OleDb::OleDbParameter(L"percent", System::Data::OleDb::OleDbType::Integer, 
				0, L"percent")), (gcnew System::Data::OleDb::OleDbParameter(L"gotMoney", System::Data::OleDb::OleDbType::Integer, 0, L"gotMoney")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"returnedMoney", System::Data::OleDb::OleDbType::Integer, 0, L"returnedMoney")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"CARD", System::Data::OleDb::OleDbType::Boolean, 0, L"CARD")), (gcnew System::Data::OleDb::OleDbParameter(L"card_number", 
				System::Data::OleDb::OleDbType::Integer, 0, L"card number")), (gcnew System::Data::OleDb::OleDbParameter(L"cardBalance", 
				System::Data::OleDb::OleDbType::Integer, 0, L"cardBalance")), (gcnew System::Data::OleDb::OleDbParameter(L"DEPOSIT", System::Data::OleDb::OleDbType::Boolean, 
				0, L"DEPOSIT")), (gcnew System::Data::OleDb::OleDbParameter(L"curentDepositSumm", System::Data::OleDb::OleDbType::Integer, 
				0, L"curentDepositSumm")), (gcnew System::Data::OleDb::OleDbParameter(L"depositPersent", System::Data::OleDb::OleDbType::Integer, 
				0, L"depositPersent")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Код", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Код", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_fname", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"fname", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_fname", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"fname", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_lname", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"lname", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_lname", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"lname", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sname", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sname", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_sname", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sname", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_birthday", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"birthday", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_birthday", System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"birthday", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CREDIT", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CREDIT", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_CREDIT", System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CREDIT", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_percent", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"percent", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_percent", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"percent", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_gotMoney", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"gotMoney", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_gotMoney", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"gotMoney", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_returnedMoney", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"returnedMoney", System::Data::DataRowVersion::Original, true, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_returnedMoney", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"returnedMoney", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CARD", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CARD", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CARD", System::Data::OleDb::OleDbType::Boolean, 0, 
				System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"CARD", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_card_number", System::Data::OleDb::OleDbType::Integer, 0, 
				System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"card number", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_card_number", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"card number", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_cardBalance", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"cardBalance", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_cardBalance", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"cardBalance", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_DEPOSIT", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DEPOSIT", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_DEPOSIT", System::Data::OleDb::OleDbType::Boolean, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"DEPOSIT", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_curentDepositSumm", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"curentDepositSumm", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_curentDepositSumm", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"curentDepositSumm", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_depositPersent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"depositPersent", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_depositPersent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"depositPersent", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection2;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(29) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_Код", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"Код", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_fname", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"fname", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_fname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"fname", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_lname", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"lname", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_lname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"lname", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sname", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"sname", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sname", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sname", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_birthday", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"birthday", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_birthday", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"birthday", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CREDIT", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CREDIT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CREDIT", 
				System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CREDIT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_percent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"percent", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_percent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"percent", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_gotMoney", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"gotMoney", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_gotMoney", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"gotMoney", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_returnedMoney", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"returnedMoney", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_returnedMoney", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"returnedMoney", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_CARD", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"CARD", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_CARD", 
				System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"CARD", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_card_number", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"card number", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_card_number", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"card number", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_cardBalance", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"cardBalance", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_cardBalance", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"cardBalance", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_DEPOSIT", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"DEPOSIT", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_DEPOSIT", 
				System::Data::OleDb::OleDbType::Boolean, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"DEPOSIT", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_curentDepositSumm", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"curentDepositSumm", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_curentDepositSumm", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"curentDepositSumm", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_depositPersent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"depositPersent", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_depositPersent", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"depositPersent", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(15) {(gcnew System::Data::Common::DataColumnMapping(L"Код", 
				L"Код")), (gcnew System::Data::Common::DataColumnMapping(L"fname", L"fname")), (gcnew System::Data::Common::DataColumnMapping(L"lname", 
				L"lname")), (gcnew System::Data::Common::DataColumnMapping(L"sname", L"sname")), (gcnew System::Data::Common::DataColumnMapping(L"birthday", 
				L"birthday")), (gcnew System::Data::Common::DataColumnMapping(L"CREDIT", L"CREDIT")), (gcnew System::Data::Common::DataColumnMapping(L"percent", 
				L"percent")), (gcnew System::Data::Common::DataColumnMapping(L"gotMoney", L"gotMoney")), (gcnew System::Data::Common::DataColumnMapping(L"returnedMoney", 
				L"returnedMoney")), (gcnew System::Data::Common::DataColumnMapping(L"CARD", L"CARD")), (gcnew System::Data::Common::DataColumnMapping(L"card number", 
				L"card number")), (gcnew System::Data::Common::DataColumnMapping(L"cardBalance", L"cardBalance")), (gcnew System::Data::Common::DataColumnMapping(L"DEPOSIT", 
				L"DEPOSIT")), (gcnew System::Data::Common::DataColumnMapping(L"curentDepositSumm", L"curentDepositSumm")), (gcnew System::Data::Common::DataColumnMapping(L"depositPersent", 
				L"depositPersent"))};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"TableBankClient", __mcTemp__1))});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 472);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"Bank";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->tabPage10->ResumeLayout(false);
			this->tabPage10->PerformLayout();
			this->tabPage11->ResumeLayout(false);
			this->tabPage11->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->tabPage14->ResumeLayout(false);
			this->tabPage14->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage13->ResumeLayout(false);
			this->tabPage13->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->eventLog1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: Void MainForm_Load(Object^  sender, EventArgs^  e) 
		 {
			 groupBox2->Enabled = false;
			 groupBox3->Enabled = false;
			 groupBox4->Enabled = false;
		 }
private: Void checkBox1_CheckedChanged(Object^  sender, EventArgs^  e) 
		 {
			 if(groupBox2->Enabled == false)
				groupBox2->Enabled = true;
			 else
			 {
				 textBox10->Text = "";
				 textBox12->Text = "";
				 groupBox2->Enabled = false;
			 }
		 }
private: Void checkBox2_CheckedChanged(Object^  sender, EventArgs^  e) 
		 {
			 if(groupBox3->Enabled == false)
				groupBox3->Enabled = true;
			 else
			 {
				 textBox17->Text = "";
				 textBox18->Text = "";
				 groupBox3->Enabled = false;
			 }
		 }
private: Void checkBox3_CheckedChanged(Object^  sender, EventArgs^  e) 
		 {
			 if(groupBox4->Enabled == false)
				groupBox4->Enabled = true;
			 else
			 {
				 textBox22->Text = "";
				 textBox23->Text = "";
				 groupBox4->Enabled = false;
			 }
		 }
// add client in database
private: Void button1_Click_1(Object^  sender, EventArgs^  e) 
	{
		if((textBox5->Text != "") && (textBox6->Text != "") && (textBox7->Text != "") && (textBox9->Text != ""))
		{			
			Person ^person = gcnew Person(textBox5->Text, textBox6->Text, textBox7->Text, System::Convert::ToUInt16(textBox9->Text));
			person->DBAddPerson(oleDbConnection2);

			person->setid(oleDbConnection2);

			if((checkBox1->Checked == true))
			{
				if((textBox10->Text != "") && (textBox12->Text != ""))
				{
					Credit ^credit = gcnew Credit(person->getid(),
												  System::Convert::ToUInt16(textBox10->Text), 
												  System::Convert::ToUInt64(textBox12->Text),
												  System::Convert::ToUInt64(0));
					credit->getCredit(oleDbConnection2);
				}
				else
					System::Windows::Forms::MessageBox::Show("Не все поля заполнены!");
			}

			if((checkBox2->Checked == true) )
			{
				if((textBox17->Text != "") && (textBox18->Text != ""))
				{
					Card ^card = gcnew Card(person->getid(),
											System::Convert::ToUInt64(textBox18->Text), 
											System::Convert::ToUInt64(textBox17->Text));
					card->takeCard(oleDbConnection2);
				}
				else
					System::Windows::Forms::MessageBox::Show("Не все поля заполнены!");
			}
			
			if(checkBox3->Checked == true)
			{	
				if((textBox22->Text != "") && (textBox23->Text != ""))
				{
					Deposit ^deposit = gcnew Deposit(person->getid(),
													 System::Convert::ToUInt64(textBox23->Text), 
													 System::Convert::ToUInt16(textBox22->Text));
					deposit->getDeposit(oleDbConnection2,deposit->getuserid());
				}
				else
					System::Windows::Forms::MessageBox::Show("Не все поля заполнены!");
			}
			delete person;
			System::Windows::Forms::MessageBox::Show("Запись добавлена");
		}
		else
			System::Windows::Forms::MessageBox::Show("Заполнены не все поля!");

		this->clearAddingTextBoxes();
	}
private: Void clearAddingTextBoxes()
		{
			textBox5->Text = "";
			textBox6->Text = "";
			textBox7->Text = "";
			textBox9->Text = "";
			textBox10->Text = "";
			textBox12->Text = "";
			checkBox1->Checked = false;
			textBox17->Text = "";
			textBox18->Text = "";
			checkBox2->Checked = false;
			textBox22->Text = "";
			textBox23->Text = "";
			checkBox3->Checked = false;
		}
// output all credits, cards, deposits for checked row(by id of person)
private: Void dataGridView2_CellClick(Object^  sender, Windows::Forms::DataGridViewCellEventArgs^  e) 
		 {
			 if(Convert::ToString(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value) != "")
			 {
				 String ^id = Convert::ToString(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value);
				 //Windows::Forms::MessageBox::Show("event cellclick " + "row=" + Convert::ToString(dataGridView2->CurrentCell->RowIndex) +" id="+ id);
			
				 oleDbConnection2->Open();
				String ^myQuery = "SELECT * FROM TableCredit WHERE userid = " + id;
				OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
				OleDbDataReader ^myReader = myCommand->ExecuteReader();
			
				dataGridView3->RowCount = 1;
				int i=0;			
				try
				{
					while(myReader->Read())
					{
						Credit ^credit = gcnew Credit(Convert::ToUInt64(myReader["creditid"]),
													  Convert::ToUInt64(myReader["userid"]),
													  Convert::ToUInt16(myReader["percent"]),
													  Convert::ToUInt64(myReader["gotMoney"]),
													  Convert::ToUInt64(myReader["returnedMoney"]));

						dataGridView3->Rows->Add();
						dataGridView3->Rows[i]->Cells[0]->Value=System::Convert::ToString(credit->getid());
						dataGridView3->Rows[i]->Cells[1]->Value=System::Convert::ToString(credit->getPercent());
						dataGridView3->Rows[i]->Cells[2]->Value=System::Convert::ToString(credit->getGotMoney());
						dataGridView3->Rows[i++]->Cells[3]->Value=System::Convert::ToString(credit->getReturnedMoney());
					}
				}
				__finally { myReader->Close(); }
			
				myQuery = "SELECT * FROM TableCard WHERE userid = " + id;
				myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
				myReader = myCommand->ExecuteReader();

				dataGridView4->RowCount = 1;
				i=0;
				try
				{
					while(myReader->Read())
					{
						Card ^card = gcnew Card(Convert::ToUInt64(myReader["cardid"]),
												Convert::ToUInt64(myReader["userid"]),
												Convert::ToUInt64(myReader["cardNumber"]),
												Convert::ToUInt64(myReader["cardBalance"]));

						dataGridView4->Rows->Add();
						dataGridView4->Rows[i]->Cells[0]->Value=card->getid();
						dataGridView4->Rows[i]->Cells[1]->Value=card->getNum();
						dataGridView4->Rows[i++]->Cells[2]->Value=card->getCardBalance();
					}
				}
				__finally { myReader->Close(); }
				 
				myQuery = "SELECT * FROM TableDeposit WHERE userid = " + id;
				myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
				myReader = myCommand->ExecuteReader();

				dataGridView5->RowCount = 1;
				i=0;
				try
				{
					while(myReader->Read())
					{
						Deposit ^deposit = gcnew Deposit(Convert::ToUInt64(myReader["depositid"]),
								 						 Convert::ToUInt64(myReader["userid"]),
														 Convert::ToUInt64(myReader["currentDepositSumm"]),
														 Convert::ToUInt16(myReader["depositPercent"]));

						dataGridView5->Rows->Add();
						dataGridView5->Rows[i]->Cells[0]->Value=deposit->getid();
						dataGridView5->Rows[i]->Cells[1]->Value=deposit->getCurrentDepositSumm();
						dataGridView5->Rows[i++]->Cells[2]->Value=deposit->getDepositPercent();
					}
				}
				__finally { myReader->Close(); }
			
				oleDbConnection2->Close();
			 }
			 else Windows::Forms::MessageBox::Show("Запись пуста!");
		 }
// output all TablePerson into DataGridView2
private: Void tabPage3_Enter(Object^  sender, EventArgs^  e) 
{
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM TablePerson";
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader;
	myReader = myCommand->ExecuteReader();

	this->dataGridView2->RowCount = 1;
	int i=0;
	try
	{
		while(myReader->Read())
		{
			Person ^person = gcnew Person(System::Convert::ToUInt64(myReader["personid"]), 
											System::Convert::ToString(myReader["fname"]), 
											System::Convert::ToString(myReader["sname"]), 
											System::Convert::ToString(myReader["lname"]), 
											System::Convert::ToUInt16(myReader["age"]));

			this->dataGridView2->Rows->Add();
			this->dataGridView2->Rows[i]->Cells[0]->Value=person->getid();
			this->dataGridView2->Rows[i]->Cells[1]->Value=person->getFirstName();
			this->dataGridView2->Rows[i]->Cells[2]->Value=person->getSecondName();
			this->dataGridView2->Rows[i]->Cells[3]->Value=person->getLastName();
			this->dataGridView2->Rows[i++]->Cells[4]->Value=person->getAge();
		}
	}
	__finally { myReader->Close(); }
				 
	oleDbConnection2->Close();
}
// add credit by active cell in DataGridView3
private: Void button10_Click(Object^  sender, EventArgs^  e) 
{
	if((textBox37->Text != "") && (textBox40->Text != ""))
	{
		Credit ^credit = gcnew Credit(Convert::ToUInt64(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value),
									Convert::ToUInt16(textBox37->Text), 
									Convert::ToUInt64(textBox40->Text),
									Convert::ToUInt64(0));
		credit->getCredit(oleDbConnection2);
		textBox37->Text = "";
		textBox40->Text = "";
	}
	else
		Windows::Forms::MessageBox::Show("Не все поля заполнены!");
}
// add card by active cell in DataGridView4
private: Void button4_Click(Object^  sender, EventArgs^  e) 
{
	if((textBox48->Text != "") && (textBox46->Text != ""))
	{
		Card ^card = gcnew Card(Convert::ToUInt64(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value),
								Convert::ToUInt64(textBox48->Text), 
								Convert::ToUInt64(textBox46->Text));
		card->takeCard(oleDbConnection2);
		textBox46->Text = "";
		textBox48->Text = "";
	}
	else
		Windows::Forms::MessageBox::Show("Не все поля заполнены!");
}
// add deposit by active cell in DataGridView5
private: Void button5_Click(Object^  sender, EventArgs^  e) 
		 {
			 if((textBox66->Text != "") && (textBox65->Text != ""))
			 {
				 Deposit ^deposit = gcnew Deposit(Convert::ToUInt64(dataGridView2->Rows[dataGridView2->CurrentCell->RowIndex]->Cells[0]->Value),
												  Convert::ToUInt64(textBox66->Text), 
												  Convert::ToUInt16(textBox65->Text));
				 deposit->getDeposit(oleDbConnection2, deposit->getuserid());
				 textBox65->Text = "";
				 textBox66->Text = "";
			 }
			 else
				 Windows::Forms::MessageBox::Show("Не все поля заполнены!");
		 }
// select credit in DataStringView3
private: Void dataGridView3_CellClick(Object^  sender, Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	if(Convert::ToString(dataGridView3->Rows[dataGridView3->CurrentCell->RowIndex]->Cells[0]->Value) != "")
	{
		tabControl2->SelectTab(0);
		tabControl3->SelectTab(1);
		String ^creditid = Convert::ToString(dataGridView3->Rows[dataGridView3->CurrentCell->RowIndex]->Cells[0]->Value);

		oleDbConnection2->Open();
		String ^myQuery = "SELECT * FROM [TableCredit] WHERE [creditid] = " + creditid;
		OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
		OleDbDataReader ^myReader = myCommand->ExecuteReader();

		try
		{
			while(myReader->Read())
			{
				Credit ^credit = gcnew Credit( Convert::ToUInt64(myReader["creditid"]),
											Convert::ToUInt64(myReader["userid"]),
											Convert::ToUInt16(myReader["percent"]),
											Convert::ToUInt64(myReader["gotMoney"]),
											Convert::ToUInt64(myReader["returnedMoney"]));
				// вставить данные в текстбоксы
				textBox14->Text = Convert::ToString(credit->getGotMoney());
				textBox38->Text = Convert::ToString(credit->getPercent());
				textBox75->Text = Convert::ToString(
					Convert::ToUInt64((*credit->getGotMoney() * Convert::ToDouble((Convert::ToDouble(*credit->getPercent()) / Convert::ToDouble(100) + 1.0)))
					- *credit->getReturnedMoney())
					);
			}
		}
	__finally { myReader->Close(); }
			 
		oleDbConnection2->Close();
	}
	else Windows::Forms::MessageBox::Show("Запись пуста!");
}
// select card in DataStringView4
private: Void dataGridView4_CellClick(Object^  sender, Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	if(Convert::ToString(dataGridView4->Rows[dataGridView4->CurrentCell->RowIndex]->Cells[0]->Value) != "")
	{
		tabControl2->SelectTab(1);
		tabControl4->SelectTab(1);
		String ^cardid = Convert::ToString(dataGridView4->Rows[dataGridView4->CurrentCell->RowIndex]->Cells[0]->Value);

		oleDbConnection2->Open();
		String ^myQuery = "SELECT * FROM [TableCard] WHERE [cardid] = " + cardid;
		OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
		OleDbDataReader ^myReader = myCommand->ExecuteReader();

		try
		{
			while(myReader->Read())
			{
				Card ^card = gcnew Card(Convert::ToUInt64(myReader["cardid"]),
	 									Convert::ToUInt64(myReader["userid"]),
										Convert::ToUInt64(myReader["cardNumber"]),
										Convert::ToUInt64(myReader["cardBalance"]));
				textBox88->Text = Convert::ToString(card->getNum());
				textBox86->Text = Convert::ToString(card->getCardBalance());
				textBox78->Text = Convert::ToString(card->getNum());
				textBox61->Text = Convert::ToString(card->getCardBalance());
			}
		}
	__finally { myReader->Close(); }

		oleDbConnection2->Close();
	}
	else Windows::Forms::MessageBox::Show("Запись пуста!");
}
// select deposit in DataStringView5
private: Void dataGridView5_CellClick(Object^  sender, Windows::Forms::DataGridViewCellEventArgs^  e) 
{
	if(Convert::ToString(dataGridView5->Rows[dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value) != "")
	{
		tabControl2->SelectTab(2);
		tabControl5->SelectTab(1);
		String ^depositid = Convert::ToString(dataGridView5->Rows[dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value);
		 
		oleDbConnection2->Open();
		String ^myQuery = "SELECT * FROM [TableDeposit] WHERE [depositid] = " + depositid;
		OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
		OleDbDataReader ^myReader = myCommand->ExecuteReader();

		System::UInt64 all_sum = 0;
		try
		{
			while(myReader->Read())
			{
				Deposit ^deposit = gcnew Deposit(Convert::ToUInt64(myReader["depositid"]),
										 		 Convert::ToUInt64(myReader["userid"]),
												 Convert::ToUInt64(myReader["currentDepositSumm"]),
												 Convert::ToUInt16(myReader["depositPercent"]));
				textBox81->Text =  Convert::ToString(deposit->getCurrentDepositSumm());
				textBox95->Text =  Convert::ToString(deposit->getCurrentDepositSumm());
				textBox98->Text =  Convert::ToString(deposit->getCurrentDepositSumm());
				textBox101->Text = Convert::ToString(deposit->getDepositPercent());
				all_sum = Convert::ToUInt64(
					Convert::ToUInt64(*deposit->getCurrentDepositSumm() * Convert::ToDouble(Convert::ToDouble(*deposit->getDepositPercent()) / Convert::ToDouble(100) + 1.0)));
				textBox104->Text = Convert::ToString(all_sum);
			}
		}
		__finally { myReader->Close(); }
 
		oleDbConnection2->Close();
	}
	else Windows::Forms::MessageBox::Show("Запись пуста!");
}
// pay credit
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	String ^creditid = Convert::ToString(this->dataGridView3->Rows[this->dataGridView3->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableCredit] WHERE [creditid] = " + creditid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Credit ^credit = nullptr;
	UInt64 need_pay = 0;
	try
	{
		while(myReader->Read())
		{
			credit = gcnew Credit(Convert::ToUInt64(myReader["creditid"]),
								  Convert::ToUInt64(myReader["userid"]),
								  Convert::ToUInt16(myReader["percent"]),
								  Convert::ToUInt64(myReader["gotMoney"]),
								  Convert::ToUInt64(myReader["returnedMoney"]));
			need_pay = Convert::ToUInt64(
				Convert::ToUInt64((*credit->getGotMoney() * Convert::ToDouble((Convert::ToDouble(*credit->getPercent()) / Convert::ToDouble(100) + 1.0)))
				- *credit->getReturnedMoney())
				); 	
		}
	}
	__finally { myReader->Close(); }

	credit->payCredit(oleDbConnection2, textBox50, Convert::ToUInt64(creditid), need_pay);

	textBox50->Text = "";
	oleDbConnection2->Close();		 
}
// take money from card
private: Void button8_Click(Object^  sender, EventArgs^  e) 
{
	String ^cardid = System::Convert::ToString(this->dataGridView4->Rows[this->dataGridView4->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableCard] WHERE [cardid] = " + cardid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Card ^card = nullptr;
	try
	{
		while(myReader->Read())
		{
			card = gcnew Card(  System::Convert::ToUInt64(myReader["cardid"]),
								System::Convert::ToUInt64(myReader["userid"]),
								System::Convert::ToUInt64(myReader["cardNumber"]),
								System::Convert::ToUInt64(myReader["cardBalance"])); 	
		}
	}
	__finally { myReader->Close(); }

	card->takeMoneyCard(oleDbConnection2, textBox83, Convert::ToUInt64(cardid));

	this->textBox83->Text = "";
	oleDbConnection2->Close();
}
// fill card
private: Void button9_Click(Object^  sender, EventArgs^  e) 
{
	String ^cardid = System::Convert::ToString(this->dataGridView4->Rows[this->dataGridView4->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableCard] WHERE [cardid] = " + cardid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Card ^card = nullptr;
	try
	{
		while(myReader->Read())
			card = gcnew Card(System::Convert::ToUInt64(myReader["cardid"]),
							  System::Convert::ToUInt64(myReader["userid"]),
							  System::Convert::ToUInt64(myReader["cardNumber"]),
							  System::Convert::ToUInt64(myReader["cardBalance"])); 	
	}
	__finally { myReader->Close(); }

	card->fillCard(oleDbConnection2, textBox56, Convert::ToUInt64(cardid));

	this->textBox56->Text = "";
	oleDbConnection2->Close();
}
// fill deposit
private: Void button7_Click(Object^  sender, EventArgs^  e) 
{
	String ^depositid = System::Convert::ToString(this->dataGridView5->Rows[this->dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableDeposit] WHERE [depositid] = " + depositid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Deposit ^deposit = nullptr;
	try
	{
		while(myReader->Read())
			deposit = gcnew Deposit(System::Convert::ToUInt64(myReader["depositid"]),
									System::Convert::ToUInt64(myReader["userid"]),
									System::Convert::ToUInt64(myReader["currentDepositSumm"]),
									System::Convert::ToUInt16(myReader["depositPercent"])); 	
	}
	__finally { myReader->Close(); }

	deposit->fillDeposit(oleDbConnection2, textBox71, Convert::ToUInt64(depositid));

	this->textBox71->Text = "";
	oleDbConnection2->Close();
}
// take money from deposit
private: Void button11_Click(Object^  sender, EventArgs^  e) 
{
	String ^depositid = System::Convert::ToString(this->dataGridView5->Rows[this->dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableDeposit] WHERE [depositid] = " + depositid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Deposit ^deposit = nullptr;
	try
	{
		while(myReader->Read())
			deposit = gcnew Deposit(System::Convert::ToUInt64(myReader["depositid"]),
									System::Convert::ToUInt64(myReader["userid"]),
									System::Convert::ToUInt64(myReader["currentDepositSumm"]),
									System::Convert::ToUInt16(myReader["depositPercent"])); 	
	}
	__finally { myReader->Close(); }

	deposit->reduceDeposit(oleDbConnection2, textBox92, Convert::ToUInt64(depositid));

	this->textBox92->Text = "";
	oleDbConnection2->Close();
}
// close deposit
private: Void button6_Click(Object^  sender, EventArgs^  e) 
{
	String ^depositid = Convert::ToString(dataGridView5->Rows[dataGridView5->CurrentCell->RowIndex]->Cells[0]->Value);
			 
	oleDbConnection2->Open();
	String ^myQuery = "SELECT * FROM [TableDeposit] WHERE [depositid] = " + depositid;
	OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
	OleDbDataReader ^myReader = myCommand->ExecuteReader();

	Deposit ^deposit = nullptr;
	try
	{
		while(myReader->Read())
			deposit = gcnew Deposit(Convert::ToUInt64(myReader["depositid"]),
									Convert::ToUInt64(myReader["userid"]),
									Convert::ToUInt64(myReader["currentDepositSumm"]),
									Convert::ToUInt16(myReader["depositPercent"])); 	
	}
	__finally { myReader->Close(); }

	deposit->closeDeposit(oleDbConnection2, textBox104, Convert::ToUInt64(depositid));

	textBox98->Text = "";
	textBox101->Text = "";
	textBox104->Text = "";
	oleDbConnection2->Close();
}
// search person by FIRST NAME in TablePerson and view in DatastringView2
private: Void button2_Click(Object^  sender, EventArgs^  e) 
{
	if(textBox39->Text != "")
	{
		oleDbConnection2->Open();
		String ^myQuery = "SELECT * FROM TablePerson WHERE fname ='" + textBox39->Text + "'";
		OleDbCommand ^myCommand = gcnew OleDbCommand(myQuery,oleDbConnection2);
		OleDbDataReader ^myReader;
		myReader = myCommand->ExecuteReader();

		this->dataGridView2->RowCount = 1;
		int i=0;
		try
		{
			while(myReader->Read())
			{
				Person ^person = gcnew Person(System::Convert::ToUInt64(myReader["personid"]), 
												System::Convert::ToString(myReader["fname"]), 
												System::Convert::ToString(myReader["sname"]), 
												System::Convert::ToString(myReader["lname"]), 
												System::Convert::ToUInt16(myReader["age"]));

				this->dataGridView2->Rows->Add();
				this->dataGridView2->Rows[i]->Cells[0]->Value=person->getid();
				this->dataGridView2->Rows[i]->Cells[1]->Value=person->getFirstName();
				this->dataGridView2->Rows[i]->Cells[2]->Value=person->getSecondName();
				this->dataGridView2->Rows[i]->Cells[3]->Value=person->getLastName();
				this->dataGridView2->Rows[i++]->Cells[4]->Value=person->getAge();
			}
		}
		__finally { myReader->Close(); }
				 
		oleDbConnection2->Close();
	}
}
};
}

