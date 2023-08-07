#include"Header.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Speech::Synthesis;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;


	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::PictureBox^ pictureBox22;

	public:
	private: System::Windows::Forms::Label^ label39;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::PictureBox^ pictureBox28;

	private: System::Windows::Forms::Panel^ panel3;
	public:
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label45;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
	public:
		user* CurrentUser;
	private: System::Windows::Forms::Panel^ panel2;
	public:
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox38;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::PictureBox^ pictureBox39;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::PictureBox^ pictureBox41;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label86;
	private: System::Windows::Forms::Label^ label87;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox50;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label88;
	private: System::Windows::Forms::Label^ label89;
	private: System::Windows::Forms::Label^ label90;
	private: System::Windows::Forms::PictureBox^ pictureBox51;
	private: System::Windows::Forms::Label^ label91;
	private: System::Windows::Forms::Label^ label92;
	private: System::Windows::Forms::PictureBox^ pictureBox52;
	private: System::Windows::Forms::Label^ label93;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label68;
	private: System::Windows::Forms::Label^ label69;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox42;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label70;
	private: System::Windows::Forms::Label^ label71;
	private: System::Windows::Forms::Label^ label72;
	private: System::Windows::Forms::PictureBox^ pictureBox43;
	private: System::Windows::Forms::Label^ label73;
	private: System::Windows::Forms::Label^ label74;
	private: System::Windows::Forms::PictureBox^ pictureBox44;
	private: System::Windows::Forms::Label^ label75;
	private: System::Windows::Forms::PictureBox^ pictureBox45;
	private: System::Windows::Forms::Label^ label76;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label77;
	private: System::Windows::Forms::Label^ label78;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox46;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label79;
	private: System::Windows::Forms::Label^ label80;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::PictureBox^ pictureBox47;
	private: System::Windows::Forms::Label^ label82;
	private: System::Windows::Forms::Label^ label83;
	private: System::Windows::Forms::PictureBox^ pictureBox48;
	private: System::Windows::Forms::Label^ label84;
	private: System::Windows::Forms::PictureBox^ pictureBox49;
	private: System::Windows::Forms::Label^ label85;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Label^ label94;
	private: System::Windows::Forms::Label^ label95;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox53;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label96;
	private: System::Windows::Forms::Label^ label97;
	private: System::Windows::Forms::Label^ label98;
	private: System::Windows::Forms::PictureBox^ pictureBox54;
	private: System::Windows::Forms::Label^ label99;
	private: System::Windows::Forms::Label^ label100;
	private: System::Windows::Forms::PictureBox^ pictureBox55;
	private: System::Windows::Forms::Label^ label101;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Label^ label102;
	private: System::Windows::Forms::Label^ label103;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox56;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Label^ label104;
	private: System::Windows::Forms::Label^ label105;
	private: System::Windows::Forms::Label^ label106;
	private: System::Windows::Forms::PictureBox^ pictureBox57;
	private: System::Windows::Forms::Label^ label107;
	private: System::Windows::Forms::Label^ label108;
	private: System::Windows::Forms::PictureBox^ pictureBox58;
	private: System::Windows::Forms::Label^ label109;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Label^ label110;
	private: System::Windows::Forms::Label^ label111;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox59;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Label^ label112;
	private: System::Windows::Forms::Label^ label113;
	private: System::Windows::Forms::Label^ label114;
	private: System::Windows::Forms::PictureBox^ pictureBox60;
	private: System::Windows::Forms::Label^ label115;
	private: System::Windows::Forms::Label^ label116;
	private: System::Windows::Forms::PictureBox^ pictureBox61;
	private: System::Windows::Forms::Label^ label117;
	private: System::Windows::Forms::PictureBox^ pictureBox62;
	private: System::Windows::Forms::Label^ label118;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::Label^ label119;
	private: System::Windows::Forms::Label^ label120;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox63;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Label^ label121;
	private: System::Windows::Forms::Label^ label122;
	private: System::Windows::Forms::Label^ label123;
	private: System::Windows::Forms::PictureBox^ pictureBox64;
	private: System::Windows::Forms::Label^ label124;
	private: System::Windows::Forms::Label^ label125;
	private: System::Windows::Forms::PictureBox^ pictureBox65;
	private: System::Windows::Forms::Label^ label126;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Label^ label127;
	private: System::Windows::Forms::Label^ label128;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::PictureBox^ pictureBox66;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Label^ label129;
	private: System::Windows::Forms::Label^ label130;
	private: System::Windows::Forms::Label^ label131;
	private: System::Windows::Forms::PictureBox^ pictureBox67;
	private: System::Windows::Forms::Label^ label132;
	private: System::Windows::Forms::Label^ label133;
	private: System::Windows::Forms::PictureBox^ pictureBox68;
	private: System::Windows::Forms::Label^ label134;
	private: System::Windows::Forms::PictureBox^ pictureBox69;
	private: System::Windows::Forms::Label^ label135;
	private: System::Windows::Forms::Label^ label147;
	private: System::Windows::Forms::Label^ label144;
	private: System::Windows::Forms::Label^ label145;
	private: System::Windows::Forms::Label^ label146;
	private: System::Windows::Forms::Label^ label148;
	private: System::Windows::Forms::Label^ label149;
	private: System::Windows::Forms::Label^ label150;
	private: System::Windows::Forms::Label^ label151;
	private: System::Windows::Forms::Label^ label152;
	private: System::Windows::Forms::Label^ label153;
	private: System::Windows::Forms::Label^ label154;
	private: System::Windows::Forms::Label^ label155;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::Label^ label136;
	private: System::Windows::Forms::Label^ label137;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::PictureBox^ pictureBox70;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Label^ label138;
	private: System::Windows::Forms::Label^ label139;
	private: System::Windows::Forms::Label^ label140;
	private: System::Windows::Forms::PictureBox^ pictureBox71;
	private: System::Windows::Forms::Label^ label141;
	private: System::Windows::Forms::Label^ label142;
	private: System::Windows::Forms::PictureBox^ pictureBox72;
	private: System::Windows::Forms::Label^ label143;
private: System::Windows::Forms::Label^ label156;
private: System::Windows::Forms::Label^ label157;
private: System::Windows::Forms::Label^ label158;
private: System::Windows::Forms::Label^ label159;
private: System::Windows::Forms::Label^ label160;
private: System::Windows::Forms::Label^ label161;
private: System::Windows::Forms::Label^ label162;
private: System::Windows::Forms::Label^ label163;
private: System::Windows::Forms::Label^ label164;
private: System::Windows::Forms::Label^ label165;
private: System::Windows::Forms::Label^ label166;
private: System::Windows::Forms::Label^ label167;
private: System::Windows::Forms::Label^ label168;
private: System::Windows::Forms::Label^ label169;
private: System::Windows::Forms::Label^ label170;
private: System::Windows::Forms::Label^ label171;
private: System::Windows::Forms::Label^ label172;
private: System::Windows::Forms::Label^ label173;
private: System::Windows::Forms::Label^ label174;
private: System::Windows::Forms::Label^ label175;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Label^ label176;

private: System::Windows::Forms::Label^ label177;
private: System::Windows::Forms::Label^ label184;
private: System::Windows::Forms::Label^ label178;
private: System::Windows::Forms::Label^ label185;
private: System::Windows::Forms::Label^ label179;
private: System::Windows::Forms::Label^ label187;
private: System::Windows::Forms::Label^ label180;
private: System::Windows::Forms::PictureBox^ pictureBox79;
private: System::Windows::Forms::Label^ label181;
private: System::Windows::Forms::Label^ label189;
private: System::Windows::Forms::Label^ label182;
private: System::Windows::Forms::PictureBox^ pictureBox78;
private: System::Windows::Forms::PictureBox^ pictureBox74;
private: System::Windows::Forms::Label^ label188;
private: System::Windows::Forms::Label^ label183;
private: System::Windows::Forms::PictureBox^ pictureBox77;
private: System::Windows::Forms::PictureBox^ pictureBox75;
private: System::Windows::Forms::PictureBox^ pictureBox76;
private: System::Windows::Forms::Label^ label186;
private: System::Windows::Forms::PictureBox^ pictureBox80;
private: System::Windows::Forms::Label^ label190;

private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button35;


















	public:
		app* AppObj;
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(app* AppObj, user* CurrentUser)
		{
			InitializeComponent();
			this->panel5->Hide();
			this->panel7->Hide();
			this->AppObj = AppObj;
			this->CurrentUser = CurrentUser;
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;




	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->label176 = (gcnew System::Windows::Forms::Label());
			this->label177 = (gcnew System::Windows::Forms::Label());
			this->label184 = (gcnew System::Windows::Forms::Label());
			this->label178 = (gcnew System::Windows::Forms::Label());
			this->label185 = (gcnew System::Windows::Forms::Label());
			this->label179 = (gcnew System::Windows::Forms::Label());
			this->label187 = (gcnew System::Windows::Forms::Label());
			this->label180 = (gcnew System::Windows::Forms::Label());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->label181 = (gcnew System::Windows::Forms::Label());
			this->label189 = (gcnew System::Windows::Forms::Label());
			this->label182 = (gcnew System::Windows::Forms::Label());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->label188 = (gcnew System::Windows::Forms::Label());
			this->label183 = (gcnew System::Windows::Forms::Label());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->label186 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label154 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->label119 = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->label122 = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->label124 = (gcnew System::Windows::Forms::Label());
			this->label125 = (gcnew System::Windows::Forms::Label());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->label126 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label127 = (gcnew System::Windows::Forms::Label());
			this->label128 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label129 = (gcnew System::Windows::Forms::Label());
			this->label130 = (gcnew System::Windows::Forms::Label());
			this->label131 = (gcnew System::Windows::Forms::Label());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->label132 = (gcnew System::Windows::Forms::Label());
			this->label133 = (gcnew System::Windows::Forms::Label());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->label135 = (gcnew System::Windows::Forms::Label());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label136 = (gcnew System::Windows::Forms::Label());
			this->label137 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label138 = (gcnew System::Windows::Forms::Label());
			this->label139 = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->label158 = (gcnew System::Windows::Forms::Label());
			this->label159 = (gcnew System::Windows::Forms::Label());
			this->label160 = (gcnew System::Windows::Forms::Label());
			this->label161 = (gcnew System::Windows::Forms::Label());
			this->label162 = (gcnew System::Windows::Forms::Label());
			this->label163 = (gcnew System::Windows::Forms::Label());
			this->label164 = (gcnew System::Windows::Forms::Label());
			this->label165 = (gcnew System::Windows::Forms::Label());
			this->label166 = (gcnew System::Windows::Forms::Label());
			this->label167 = (gcnew System::Windows::Forms::Label());
			this->label168 = (gcnew System::Windows::Forms::Label());
			this->label169 = (gcnew System::Windows::Forms::Label());
			this->label170 = (gcnew System::Windows::Forms::Label());
			this->label171 = (gcnew System::Windows::Forms::Label());
			this->label172 = (gcnew System::Windows::Forms::Label());
			this->label173 = (gcnew System::Windows::Forms::Label());
			this->label174 = (gcnew System::Windows::Forms::Label());
			this->label175 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label190 = (gcnew System::Windows::Forms::Label());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			this->panel15->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			this->panel16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			this->panel17->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			this->panel18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			this->panel23->SuspendLayout();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			this->panel27->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			this->panel30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			this->panel31->SuspendLayout();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(103)),
				static_cast<System::Int32>(static_cast<System::Byte>(178)));
			this->button1->Location = System::Drawing::Point(1283, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Log Out";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AccessibleRole = System::Windows::Forms::AccessibleRole::MenuBar;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(59)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
				static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1370, 53);
			this->panel1->TabIndex = 1;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel1_Paint);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(846, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 31);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Memories";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(601, 13);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 30);
			this->pictureBox13->TabIndex = 6;
			this->pictureBox13->TabStop = false;
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(732, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 31);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Timeline";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(617, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 31);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Home";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click_1);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(99, 10);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 30);
			this->pictureBox12->TabIndex = 3;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox12_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(39, 3);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(40, 40);
			this->pictureBox11->TabIndex = 2;
			this->pictureBox11->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox1->Location = System::Drawing::Point(128, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(350, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Search Facebook";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::White;
			this->panel33->Controls->Add(this->pictureBox80);
			this->panel33->Controls->Add(this->label176);
			this->panel33->Controls->Add(this->label177);
			this->panel33->Controls->Add(this->label184);
			this->panel33->Controls->Add(this->label178);
			this->panel33->Controls->Add(this->label185);
			this->panel33->Controls->Add(this->label179);
			this->panel33->Controls->Add(this->label187);
			this->panel33->Controls->Add(this->label180);
			this->panel33->Controls->Add(this->pictureBox79);
			this->panel33->Controls->Add(this->label181);
			this->panel33->Controls->Add(this->label189);
			this->panel33->Controls->Add(this->label182);
			this->panel33->Controls->Add(this->pictureBox78);
			this->panel33->Controls->Add(this->pictureBox74);
			this->panel33->Controls->Add(this->label188);
			this->panel33->Controls->Add(this->label183);
			this->panel33->Controls->Add(this->pictureBox77);
			this->panel33->Controls->Add(this->pictureBox75);
			this->panel33->Controls->Add(this->pictureBox76);
			this->panel33->Controls->Add(this->label186);
			this->panel33->Location = System::Drawing::Point(404, 138);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(356, 385);
			this->panel33->TabIndex = 30;
			// 
			// pictureBox80
			// 
			this->pictureBox80->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.Image")));
			this->pictureBox80->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox80.InitialImage")));
			this->pictureBox80->Location = System::Drawing::Point(307, 18);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(25, 25);
			this->pictureBox80->TabIndex = 87;
			this->pictureBox80->TabStop = false;
			this->pictureBox80->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox80_Click);
			// 
			// label176
			// 
			this->label176->AutoSize = true;
			this->label176->Location = System::Drawing::Point(251, 347);
			this->label176->Name = L"label176";
			this->label176->Size = System::Drawing::Size(47, 13);
			this->label176->TabIndex = 86;
			this->label176->Text = L"label176";
			this->label176->Visible = false;
			// 
			// label177
			// 
			this->label177->AutoSize = true;
			this->label177->Location = System::Drawing::Point(251, 286);
			this->label177->Name = L"label177";
			this->label177->Size = System::Drawing::Size(47, 13);
			this->label177->TabIndex = 85;
			this->label177->Text = L"label177";
			this->label177->Visible = false;
			// 
			// label184
			// 
			this->label184->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label184->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label184->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label184->Location = System::Drawing::Point(31, 13);
			this->label184->Name = L"label184";
			this->label184->Size = System::Drawing::Size(107, 30);
			this->label184->TabIndex = 15;
			this->label184->Text = L"Likes";
			this->label184->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label178
			// 
			this->label178->AutoSize = true;
			this->label178->Location = System::Drawing::Point(251, 233);
			this->label178->Name = L"label178";
			this->label178->Size = System::Drawing::Size(47, 13);
			this->label178->TabIndex = 84;
			this->label178->Text = L"label178";
			this->label178->Visible = false;
			// 
			// label185
			// 
			this->label185->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label185->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label185->Location = System::Drawing::Point(10, 14);
			this->label185->Name = L"label185";
			this->label185->Size = System::Drawing::Size(40, 30);
			this->label185->TabIndex = 14;
			this->label185->Text = L"11";
			this->label185->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label179
			// 
			this->label179->AutoSize = true;
			this->label179->Location = System::Drawing::Point(251, 168);
			this->label179->Name = L"label179";
			this->label179->Size = System::Drawing::Size(47, 13);
			this->label179->TabIndex = 83;
			this->label179->Text = L"label179";
			this->label179->Visible = false;
			// 
			// label187
			// 
			this->label187->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label187->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label187->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label187->Location = System::Drawing::Point(57, 155);
			this->label187->Name = L"label187";
			this->label187->Size = System::Drawing::Size(251, 32);
			this->label187->TabIndex = 74;
			this->label187->Text = L"Friend Name";
			this->label187->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label180
			// 
			this->label180->AutoSize = true;
			this->label180->Location = System::Drawing::Point(251, 114);
			this->label180->Name = L"label180";
			this->label180->Size = System::Drawing::Size(47, 13);
			this->label180->TabIndex = 82;
			this->label180->Text = L"label180";
			this->label180->Visible = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox79.Image")));
			this->pictureBox79->Location = System::Drawing::Point(20, 51);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(31, 32);
			this->pictureBox79->TabIndex = 69;
			this->pictureBox79->TabStop = false;
			// 
			// label181
			// 
			this->label181->AutoSize = true;
			this->label181->Location = System::Drawing::Point(251, 65);
			this->label181->Name = L"label181";
			this->label181->Size = System::Drawing::Size(47, 13);
			this->label181->TabIndex = 81;
			this->label181->Text = L"label181";
			this->label181->Visible = false;
			// 
			// label189
			// 
			this->label189->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label189->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label189->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label189->Location = System::Drawing::Point(57, 51);
			this->label189->Name = L"label189";
			this->label189->Size = System::Drawing::Size(251, 32);
			this->label189->TabIndex = 70;
			this->label189->Text = L"Friend Name";
			this->label189->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label182
			// 
			this->label182->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label182->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label182->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label182->Location = System::Drawing::Point(57, 328);
			this->label182->Name = L"label182";
			this->label182->Size = System::Drawing::Size(251, 32);
			this->label182->TabIndex = 80;
			this->label182->Text = L"Friend Name";
			this->label182->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox78
			// 
			this->pictureBox78->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox78.Image")));
			this->pictureBox78->Location = System::Drawing::Point(20, 100);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(31, 32);
			this->pictureBox78->TabIndex = 71;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox74.Image")));
			this->pictureBox74->Location = System::Drawing::Point(20, 328);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(31, 32);
			this->pictureBox74->TabIndex = 79;
			this->pictureBox74->TabStop = false;
			// 
			// label188
			// 
			this->label188->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label188->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label188->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label188->Location = System::Drawing::Point(57, 100);
			this->label188->Name = L"label188";
			this->label188->Size = System::Drawing::Size(251, 32);
			this->label188->TabIndex = 72;
			this->label188->Text = L"Friend Name";
			this->label188->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label183
			// 
			this->label183->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label183->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label183->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label183->Location = System::Drawing::Point(57, 272);
			this->label183->Name = L"label183";
			this->label183->Size = System::Drawing::Size(251, 32);
			this->label183->TabIndex = 78;
			this->label183->Text = L"Friend Name";
			this->label183->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox77
			// 
			this->pictureBox77->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox77.Image")));
			this->pictureBox77->Location = System::Drawing::Point(20, 155);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(31, 32);
			this->pictureBox77->TabIndex = 73;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox75.Image")));
			this->pictureBox75->Location = System::Drawing::Point(20, 272);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(31, 32);
			this->pictureBox75->TabIndex = 77;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox76.Image")));
			this->pictureBox76->Location = System::Drawing::Point(20, 214);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(31, 32);
			this->pictureBox76->TabIndex = 75;
			this->pictureBox76->TabStop = false;
			// 
			// label186
			// 
			this->label186->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label186->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label186->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label186->Location = System::Drawing::Point(57, 214);
			this->label186->Name = L"label186";
			this->label186->Size = System::Drawing::Size(251, 32);
			this->label186->TabIndex = 76;
			this->label186->Text = L"Friend Name";
			this->label186->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->pictureBox22);
			this->panel7->Controls->Add(this->panel11);
			this->panel7->Controls->Add(this->panel10);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->pictureBox20);
			this->panel7->Controls->Add(this->button9);
			this->panel7->Controls->Add(this->label31);
			this->panel7->Controls->Add(this->label32);
			this->panel7->Location = System::Drawing::Point(431, 95);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(562, 535);
			this->panel7->TabIndex = 29;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.InitialImage")));
			this->pictureBox22->Location = System::Drawing::Point(497, 13);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(25, 25);
			this->pictureBox22->TabIndex = 23;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox22_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::Control;
			this->panel11->Controls->Add(this->label37);
			this->panel11->Controls->Add(this->label38);
			this->panel11->Location = System::Drawing::Point(54, 434);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(482, 72);
			this->panel11->TabIndex = 22;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label37->ForeColor = System::Drawing::Color::Black;
			this->label37->Location = System::Drawing::Point(3, 26);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(470, 30);
			this->label37->TabIndex = 12;
			this->label37->Text = L"Comment Text";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(3, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(194, 26);
			this->label38->TabIndex = 6;
			this->label38->Text = L"Comment SharedBy";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::Control;
			this->panel10->Controls->Add(this->label35);
			this->panel10->Controls->Add(this->label36);
			this->panel10->Location = System::Drawing::Point(54, 335);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(482, 72);
			this->panel10->TabIndex = 21;
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(3, 26);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(470, 30);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Comment Text";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(3, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(194, 26);
			this->label36->TabIndex = 6;
			this->label36->Text = L"Comment SharedBy";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::Control;
			this->panel9->Controls->Add(this->label33);
			this->panel9->Controls->Add(this->label34);
			this->panel9->Location = System::Drawing::Point(54, 244);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(482, 72);
			this->panel9->TabIndex = 20;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label33->ForeColor = System::Drawing::Color::Black;
			this->label33->Location = System::Drawing::Point(3, 26);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(470, 30);
			this->label33->TabIndex = 12;
			this->label33->Text = L"Comment Text";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(3, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(194, 26);
			this->label34->TabIndex = 6;
			this->label34->Text = L"Comment SharedBy";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::Control;
			this->panel8->Controls->Add(this->label27);
			this->panel8->Controls->Add(this->label30);
			this->panel8->Location = System::Drawing::Point(55, 155);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(482, 72);
			this->panel8->TabIndex = 19;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label27->ForeColor = System::Drawing::Color::Black;
			this->label27->Location = System::Drawing::Point(3, 26);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(470, 30);
			this->label27->TabIndex = 12;
			this->label27->Text = L"Comment Text";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(3, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(194, 26);
			this->label30->TabIndex = 6;
			this->label30->Text = L"Comment SharedBy";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox4->Location = System::Drawing::Point(54, 92);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(482, 31);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"Write a comment...";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(15, 103);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(36, 30);
			this->pictureBox20->TabIndex = 18;
			this->pictureBox20->TabStop = false;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::Color::Gray;
			this->button9->Location = System::Drawing::Point(9, 48);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 33);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Comment";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label31
			// 
			this->label31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label31->Location = System::Drawing::Point(31, 13);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(107, 30);
			this->label31->TabIndex = 15;
			this->label31->Text = L"comments";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label32->Location = System::Drawing::Point(10, 14);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(40, 30);
			this->label32->TabIndex = 14;
			this->label32->Text = L"11";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::White;
			this->panel12->Controls->Add(this->label147);
			this->panel12->Controls->Add(this->panel13);
			this->panel12->Controls->Add(this->textBox5);
			this->panel12->Controls->Add(this->pictureBox35);
			this->panel12->Controls->Add(this->button10);
			this->panel12->Controls->Add(this->button11);
			this->panel12->Controls->Add(this->label53);
			this->panel12->Controls->Add(this->label54);
			this->panel12->Controls->Add(this->label55);
			this->panel12->Controls->Add(this->pictureBox36);
			this->panel12->Controls->Add(this->label56);
			this->panel12->Controls->Add(this->label57);
			this->panel12->Controls->Add(this->pictureBox37);
			this->panel12->Controls->Add(this->label58);
			this->panel12->Location = System::Drawing::Point(3, 4);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(554, 420);
			this->panel12->TabIndex = 21;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel12_Paint);
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->Location = System::Drawing::Point(364, 39);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(47, 13);
			this->label147->TabIndex = 21;
			this->label147->Text = L"label147";
			this->label147->Visible = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::Control;
			this->panel13->Controls->Add(this->label51);
			this->panel13->Controls->Add(this->label52);
			this->panel13->Location = System::Drawing::Point(55, 325);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(482, 72);
			this->panel13->TabIndex = 20;
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label51->ForeColor = System::Drawing::Color::Black;
			this->label51->Location = System::Drawing::Point(3, 26);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(470, 30);
			this->label51->TabIndex = 12;
			this->label51->Text = L"Comment Text";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(3, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(194, 26);
			this->label52->TabIndex = 6;
			this->label52->Text = L"Comment SharedBy";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox5->Location = System::Drawing::Point(55, 272);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(482, 31);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Write a comment...";
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(15, 273);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(36, 30);
			this->pictureBox35->TabIndex = 18;
			this->pictureBox35->TabStop = false;
			// 
			// button10
			// 
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::Gray;
			this->button10->Location = System::Drawing::Point(364, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(123, 33);
			this->button10->TabIndex = 17;
			this->button10->Text = L"Comment";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm2::button10_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::Gray;
			this->button11->Location = System::Drawing::Point(15, 210);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 33);
			this->button11->TabIndex = 16;
			this->button11->Text = L"Like";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm2::button11_Click);
			// 
			// label53
			// 
			this->label53->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label53->Location = System::Drawing::Point(380, 158);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(107, 30);
			this->label53->TabIndex = 15;
			this->label53->Text = L"comments";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label53->Click += gcnew System::EventHandler(this, &MyForm2::label53_Click);
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label54->Location = System::Drawing::Point(359, 159);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(40, 30);
			this->label54->TabIndex = 14;
			this->label54->Text = L"11";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label55
			// 
			this->label55->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label55->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label55->Location = System::Drawing::Point(50, 158);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(40, 30);
			this->label55->TabIndex = 13;
			this->label55->Text = L"11";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label55->Click += gcnew System::EventHandler(this, &MyForm2::label55_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(15, 159);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(30, 30);
			this->pictureBox36->TabIndex = 12;
			this->pictureBox36->TabStop = false;
			// 
			// label56
			// 
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(19, 85);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(487, 40);
			this->label56->TabIndex = 11;
			this->label56->Text = L"Waiting for weekend";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label57
			// 
			this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label57->Location = System::Drawing::Point(70, 37);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(210, 19);
			this->label57->TabIndex = 8;
			this->label57->Text = L"1d. ago";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(15, 11);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(48, 44);
			this->pictureBox37->TabIndex = 7;
			this->pictureBox37->TabStop = false;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(69, 11);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(194, 26);
			this->label58->TabIndex = 6;
			this->label58->Text = L"Friend Name";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Controls->Add(this->label144);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->pictureBox18);
			this->panel5->Controls->Add(this->button7);
			this->panel5->Controls->Add(this->button8);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->pictureBox19);
			this->panel5->Controls->Add(this->label26);
			this->panel5->Controls->Add(this->label28);
			this->panel5->Controls->Add(this->pictureBox21);
			this->panel5->Controls->Add(this->label29);
			this->panel5->Location = System::Drawing::Point(3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(554, 430);
			this->panel5->TabIndex = 20;
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->Location = System::Drawing::Point(458, 23);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(47, 13);
			this->label144->TabIndex = 20;
			this->label144->Text = L"label144";
			this->label144->Visible = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Location = System::Drawing::Point(55, 325);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(482, 72);
			this->panel6->TabIndex = 19;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel6_Paint);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(3, 26);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(470, 30);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Comment Text";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(3, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(194, 26);
			this->label22->TabIndex = 6;
			this->label22->Text = L"Comment SharedBy";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox3->Location = System::Drawing::Point(55, 272);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(482, 31);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Write a comment...";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(15, 273);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(36, 30);
			this->pictureBox18->TabIndex = 18;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox18_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::Gray;
			this->button7->Location = System::Drawing::Point(364, 210);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 33);
			this->button7->TabIndex = 17;
			this->button7->Text = L"Comment";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm2::button7_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::Gray;
			this->button8->Location = System::Drawing::Point(15, 210);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 33);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Like";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm2::button8_Click);
			// 
			// label23
			// 
			this->label23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label23->Location = System::Drawing::Point(380, 158);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(107, 30);
			this->label23->TabIndex = 15;
			this->label23->Text = L"comments";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label23->Click += gcnew System::EventHandler(this, &MyForm2::label23_Click);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label24->Location = System::Drawing::Point(359, 159);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(40, 30);
			this->label24->TabIndex = 14;
			this->label24->Text = L"11";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label24->Click += gcnew System::EventHandler(this, &MyForm2::label24_Click);
			// 
			// label25
			// 
			this->label25->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label25->Location = System::Drawing::Point(50, 158);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 30);
			this->label25->TabIndex = 13;
			this->label25->Text = L"11";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label25->Click += gcnew System::EventHandler(this, &MyForm2::label25_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(15, 159);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(30, 30);
			this->pictureBox19->TabIndex = 12;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox19_Click);
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(19, 85);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(487, 40);
			this->label26->TabIndex = 11;
			this->label26->Text = L"Waiting for weekend";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label26->Click += gcnew System::EventHandler(this, &MyForm2::label26_Click);
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label28->Location = System::Drawing::Point(70, 37);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(222, 19);
			this->label28->TabIndex = 8;
			this->label28->Text = L"1d. ago";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(15, 11);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(48, 44);
			this->pictureBox21->TabIndex = 7;
			this->pictureBox21->TabStop = false;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(69, 11);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(194, 26);
			this->label29->TabIndex = 6;
			this->label29->Text = L"Friend Name";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->label3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label3->Location = System::Drawing::Point(57, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(264, 44);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Abdullah Nadeem";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(48, 44);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm2::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(45, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(130, 40);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Friends";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(8, 211);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(31, 32);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label5->Location = System::Drawing::Point(45, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(251, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Friend Name";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm2::label5_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(1038, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 29);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Liked Pages";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1048, 189);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(31, 32);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label7
			// 
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label7->Location = System::Drawing::Point(1085, 189);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(278, 32);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Liked Pages";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm2::label7_Click);
			// 
			// label8
			// 
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label8->Location = System::Drawing::Point(45, 260);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(251, 32);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Friend Name";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label8->Click += gcnew System::EventHandler(this, &MyForm2::label8_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(8, 260);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(31, 32);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// label9
			// 
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label9->Location = System::Drawing::Point(45, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(251, 32);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Friend Name";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label9->Click += gcnew System::EventHandler(this, &MyForm2::label9_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(8, 315);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(31, 32);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// label10
			// 
			this->label10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label10->Location = System::Drawing::Point(45, 374);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(251, 32);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Friend Name";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm2::label10_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(8, 374);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(31, 32);
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// label11
			// 
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label11->Location = System::Drawing::Point(1085, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(278, 32);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Liked Pages";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label11->Click += gcnew System::EventHandler(this, &MyForm2::label11_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(1048, 242);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(31, 32);
			this->pictureBox7->TabIndex = 17;
			this->pictureBox7->TabStop = false;
			// 
			// label12
			// 
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label12->Location = System::Drawing::Point(1085, 299);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(278, 32);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Liked Pages";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label12->Click += gcnew System::EventHandler(this, &MyForm2::label12_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(1048, 299);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(31, 32);
			this->pictureBox8->TabIndex = 19;
			this->pictureBox8->TabStop = false;
			// 
			// label13
			// 
			this->label13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label13->Location = System::Drawing::Point(1091, 357);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(278, 32);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Liked Pages";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label13->Click += gcnew System::EventHandler(this, &MyForm2::label13_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(1048, 353);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(31, 32);
			this->pictureBox9->TabIndex = 21;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(8, 150);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->TabIndex = 23;
			this->pictureBox10->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label39
			// 
			this->label39->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label39->Location = System::Drawing::Point(45, 432);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(251, 32);
			this->label39->TabIndex = 25;
			this->label39->Text = L"Friend Name";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label39->Click += gcnew System::EventHandler(this, &MyForm2::label39_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(8, 432);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(31, 32);
			this->pictureBox23->TabIndex = 24;
			this->pictureBox23->TabStop = false;
			// 
			// label40
			// 
			this->label40->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label40->Location = System::Drawing::Point(45, 488);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(251, 32);
			this->label40->TabIndex = 27;
			this->label40->Text = L"Friend Name";
			this->label40->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label40->Click += gcnew System::EventHandler(this, &MyForm2::label40_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(8, 488);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(31, 32);
			this->pictureBox24->TabIndex = 26;
			this->pictureBox24->TabStop = false;
			// 
			// label41
			// 
			this->label41->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label41->Location = System::Drawing::Point(45, 547);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(251, 32);
			this->label41->TabIndex = 29;
			this->label41->Text = L"Friend Name";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label41->Click += gcnew System::EventHandler(this, &MyForm2::label41_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(8, 547);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(31, 32);
			this->pictureBox25->TabIndex = 28;
			this->pictureBox25->TabStop = false;
			// 
			// label42
			// 
			this->label42->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label42->Location = System::Drawing::Point(45, 605);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(251, 32);
			this->label42->TabIndex = 31;
			this->label42->Text = L"Friend Name";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label42->Click += gcnew System::EventHandler(this, &MyForm2::label42_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(8, 605);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(31, 32);
			this->pictureBox26->TabIndex = 30;
			this->pictureBox26->TabStop = false;
			// 
			// label43
			// 
			this->label43->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label43->Location = System::Drawing::Point(45, 662);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(251, 32);
			this->label43->TabIndex = 33;
			this->label43->Text = L"Friend Name";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label43->Click += gcnew System::EventHandler(this, &MyForm2::label43_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(8, 662);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(31, 32);
			this->pictureBox27->TabIndex = 32;
			this->pictureBox27->TabStop = false;
			// 
			// label44
			// 
			this->label44->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label44->Location = System::Drawing::Point(45, 720);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(251, 32);
			this->label44->TabIndex = 35;
			this->label44->Text = L"Friend Name";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label44->Click += gcnew System::EventHandler(this, &MyForm2::label44_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(8, 720);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(31, 32);
			this->pictureBox28->TabIndex = 34;
			this->pictureBox28->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Controls->Add(this->label145);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Controls->Add(this->pictureBox17);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->label18);
			this->panel3->Controls->Add(this->label17);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->pictureBox16);
			this->panel3->Controls->Add(this->label15);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->pictureBox15);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->pictureBox14);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(554, 466);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm2::panel3_Paint);
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->Location = System::Drawing::Point(462, 27);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(47, 13);
			this->label145->TabIndex = 21;
			this->label145->Text = L"label145";
			this->label145->Visible = false;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->Controls->Add(this->label20);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Location = System::Drawing::Point(55, 368);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(482, 72);
			this->panel4->TabIndex = 19;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(3, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(470, 30);
			this->label20->TabIndex = 12;
			this->label20->Text = L"Comment Text";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(3, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(194, 26);
			this->label19->TabIndex = 6;
			this->label19->Text = L"Comment SharedBy";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox2->Location = System::Drawing::Point(55, 315);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(482, 31);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"Write a comment...";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(15, 316);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(36, 30);
			this->pictureBox17->TabIndex = 18;
			this->pictureBox17->TabStop = false;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::Gray;
			this->button6->Location = System::Drawing::Point(364, 253);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 33);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Comment";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm2::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::Gray;
			this->button5->Location = System::Drawing::Point(15, 253);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 33);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Like";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm2::button5_Click);
			// 
			// label18
			// 
			this->label18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label18->Location = System::Drawing::Point(380, 201);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(107, 30);
			this->label18->TabIndex = 15;
			this->label18->Text = L"comments";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label18->Click += gcnew System::EventHandler(this, &MyForm2::label18_Click);
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label17->Location = System::Drawing::Point(359, 202);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 30);
			this->label17->TabIndex = 14;
			this->label17->Text = L"11";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label17->Click += gcnew System::EventHandler(this, &MyForm2::label17_Click);
			// 
			// label16
			// 
			this->label16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label16->Location = System::Drawing::Point(50, 201);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 30);
			this->label16->TabIndex = 13;
			this->label16->Text = L"11";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label16->Click += gcnew System::EventHandler(this, &MyForm2::label16_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(15, 202);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(30, 30);
			this->pictureBox16->TabIndex = 12;
			this->pictureBox16->TabStop = false;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(50, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(487, 40);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Waiting for weekend";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(51, 88);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(500, 30);
			this->label14->TabIndex = 10;
			this->label14->Text = L"User is celebrating birthday";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(15, 88);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 30);
			this->pictureBox15->TabIndex = 9;
			this->pictureBox15->TabStop = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label2->Location = System::Drawing::Point(70, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 19);
			this->label2->TabIndex = 8;
			this->label2->Text = L"1d. ago";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(15, 11);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(48, 44);
			this->pictureBox14->TabIndex = 7;
			this->pictureBox14->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 26);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Friend Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click_1);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel15);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel23);
			this->flowLayoutPanel1->Controls->Add(this->panel27);
			this->flowLayoutPanel1->Controls->Add(this->panel31);
			this->flowLayoutPanel1->Location = System::Drawing::Point(332, 147);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(577, 603);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->label146);
			this->panel2->Controls->Add(this->panel14);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->pictureBox38);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->panel12);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->label61);
			this->panel2->Controls->Add(this->label62);
			this->panel2->Controls->Add(this->label63);
			this->panel2->Controls->Add(this->pictureBox39);
			this->panel2->Controls->Add(this->label64);
			this->panel2->Controls->Add(this->label65);
			this->panel2->Controls->Add(this->pictureBox40);
			this->panel2->Controls->Add(this->label66);
			this->panel2->Controls->Add(this->pictureBox41);
			this->panel2->Controls->Add(this->label67);
			this->panel2->Location = System::Drawing::Point(3, 475);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(554, 466);
			this->panel2->TabIndex = 0;
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->Location = System::Drawing::Point(459, 29);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(47, 13);
			this->label146->TabIndex = 21;
			this->label146->Text = L"label146";
			this->label146->Visible = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::SystemColors::Control;
			this->panel14->Controls->Add(this->label59);
			this->panel14->Controls->Add(this->label60);
			this->panel14->Location = System::Drawing::Point(55, 368);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(482, 72);
			this->panel14->TabIndex = 0;
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label59->ForeColor = System::Drawing::Color::Black;
			this->label59->Location = System::Drawing::Point(3, 26);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(470, 30);
			this->label59->TabIndex = 12;
			this->label59->Text = L"Comment Text";
			this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(3, 0);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(194, 26);
			this->label60->TabIndex = 6;
			this->label60->Text = L"Comment SharedBy";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox6->Location = System::Drawing::Point(55, 315);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(482, 31);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"Write a comment...";
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(15, 316);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(36, 30);
			this->pictureBox38->TabIndex = 18;
			this->pictureBox38->TabStop = false;
			// 
			// button12
			// 
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::Gray;
			this->button12->Location = System::Drawing::Point(364, 253);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(123, 33);
			this->button12->TabIndex = 0;
			this->button12->Text = L"Comment";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm2::button12_Click);
			// 
			// button13
			// 
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button13->ForeColor = System::Drawing::Color::Gray;
			this->button13->Location = System::Drawing::Point(15, 253);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 33);
			this->button13->TabIndex = 0;
			this->button13->Text = L"Like";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm2::button13_Click);
			// 
			// label61
			// 
			this->label61->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label61->Location = System::Drawing::Point(380, 201);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(107, 30);
			this->label61->TabIndex = 15;
			this->label61->Text = L"comments";
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label61->Click += gcnew System::EventHandler(this, &MyForm2::label61_Click);
			// 
			// label62
			// 
			this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label62->Location = System::Drawing::Point(359, 202);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(40, 30);
			this->label62->TabIndex = 14;
			this->label62->Text = L"11";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label63
			// 
			this->label63->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label63->Location = System::Drawing::Point(50, 201);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(40, 30);
			this->label63->TabIndex = 0;
			this->label63->Text = L"11";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label63->Click += gcnew System::EventHandler(this, &MyForm2::label63_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(15, 202);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(30, 30);
			this->pictureBox39->TabIndex = 12;
			this->pictureBox39->TabStop = false;
			// 
			// label64
			// 
			this->label64->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(50, 138);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(487, 40);
			this->label64->TabIndex = 11;
			this->label64->Text = L"Waiting for weekend";
			this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label65
			// 
			this->label65->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(51, 88);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(500, 30);
			this->label65->TabIndex = 0;
			this->label65->Text = L"User is celebrating birthday";
			this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(15, 88);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 30);
			this->pictureBox40->TabIndex = 9;
			this->pictureBox40->TabStop = false;
			// 
			// label66
			// 
			this->label66->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label66->Location = System::Drawing::Point(70, 37);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(125, 19);
			this->label66->TabIndex = 8;
			this->label66->Text = L"1d. ago";
			this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(15, 11);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(48, 44);
			this->pictureBox41->TabIndex = 7;
			this->pictureBox41->TabStop = false;
			// 
			// label67
			// 
			this->label67->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(69, 11);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(194, 26);
			this->label67->TabIndex = 6;
			this->label67->Text = L"Friend Name";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::White;
			this->panel15->Controls->Add(this->label148);
			this->panel15->Controls->Add(this->panel19);
			this->panel15->Controls->Add(this->panel16);
			this->panel15->Controls->Add(this->textBox7);
			this->panel15->Controls->Add(this->pictureBox42);
			this->panel15->Controls->Add(this->button14);
			this->panel15->Controls->Add(this->button15);
			this->panel15->Controls->Add(this->label70);
			this->panel15->Controls->Add(this->label71);
			this->panel15->Controls->Add(this->label72);
			this->panel15->Controls->Add(this->pictureBox43);
			this->panel15->Controls->Add(this->label73);
			this->panel15->Controls->Add(this->label74);
			this->panel15->Controls->Add(this->pictureBox44);
			this->panel15->Controls->Add(this->label75);
			this->panel15->Controls->Add(this->pictureBox45);
			this->panel15->Controls->Add(this->label76);
			this->panel15->Location = System::Drawing::Point(3, 947);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(554, 466);
			this->panel15->TabIndex = 22;
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->Location = System::Drawing::Point(481, 19);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(47, 13);
			this->label148->TabIndex = 22;
			this->label148->Text = L"label148";
			this->label148->Visible = false;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::White;
			this->panel19->Controls->Add(this->label149);
			this->panel19->Controls->Add(this->panel20);
			this->panel19->Controls->Add(this->textBox9);
			this->panel19->Controls->Add(this->pictureBox50);
			this->panel19->Controls->Add(this->button18);
			this->panel19->Controls->Add(this->button19);
			this->panel19->Controls->Add(this->label88);
			this->panel19->Controls->Add(this->label89);
			this->panel19->Controls->Add(this->label90);
			this->panel19->Controls->Add(this->pictureBox51);
			this->panel19->Controls->Add(this->label91);
			this->panel19->Controls->Add(this->label92);
			this->panel19->Controls->Add(this->pictureBox52);
			this->panel19->Controls->Add(this->label93);
			this->panel19->Location = System::Drawing::Point(3, 3);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(554, 430);
			this->panel19->TabIndex = 23;
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->Location = System::Drawing::Point(453, 24);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(47, 13);
			this->label149->TabIndex = 21;
			this->label149->Text = L"label149";
			this->label149->Visible = false;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Control;
			this->panel20->Controls->Add(this->label86);
			this->panel20->Controls->Add(this->label87);
			this->panel20->Location = System::Drawing::Point(55, 325);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(482, 72);
			this->panel20->TabIndex = 19;
			// 
			// label86
			// 
			this->label86->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label86->ForeColor = System::Drawing::Color::Black;
			this->label86->Location = System::Drawing::Point(3, 26);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(470, 30);
			this->label86->TabIndex = 12;
			this->label86->Text = L"Comment Text";
			this->label86->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label87
			// 
			this->label87->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(3, 0);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(194, 26);
			this->label87->TabIndex = 6;
			this->label87->Text = L"Comment SharedBy";
			this->label87->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox9->Location = System::Drawing::Point(55, 272);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(482, 31);
			this->textBox9->TabIndex = 8;
			this->textBox9->Text = L"Write a comment...";
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(15, 273);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(36, 30);
			this->pictureBox50->TabIndex = 18;
			this->pictureBox50->TabStop = false;
			// 
			// button18
			// 
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button18->ForeColor = System::Drawing::Color::Gray;
			this->button18->Location = System::Drawing::Point(364, 210);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(123, 33);
			this->button18->TabIndex = 17;
			this->button18->Text = L"Comment";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm2::button18_Click);
			// 
			// button19
			// 
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button19->ForeColor = System::Drawing::Color::Gray;
			this->button19->Location = System::Drawing::Point(15, 210);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 33);
			this->button19->TabIndex = 16;
			this->button19->Text = L"Like";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm2::button19_Click);
			// 
			// label88
			// 
			this->label88->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label88->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label88->Location = System::Drawing::Point(380, 158);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(107, 30);
			this->label88->TabIndex = 15;
			this->label88->Text = L"comments";
			this->label88->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label88->Click += gcnew System::EventHandler(this, &MyForm2::label88_Click);
			// 
			// label89
			// 
			this->label89->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label89->Location = System::Drawing::Point(359, 159);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(40, 30);
			this->label89->TabIndex = 14;
			this->label89->Text = L"11";
			this->label89->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label90
			// 
			this->label90->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label90->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label90->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label90->Location = System::Drawing::Point(50, 158);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(40, 30);
			this->label90->TabIndex = 13;
			this->label90->Text = L"11";
			this->label90->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label90->Click += gcnew System::EventHandler(this, &MyForm2::label90_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(15, 159);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(30, 30);
			this->pictureBox51->TabIndex = 12;
			this->pictureBox51->TabStop = false;
			// 
			// label91
			// 
			this->label91->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->Location = System::Drawing::Point(19, 85);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(487, 40);
			this->label91->TabIndex = 11;
			this->label91->Text = L"Waiting for weekend";
			this->label91->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label92
			// 
			this->label92->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label92->Location = System::Drawing::Point(70, 37);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(222, 19);
			this->label92->TabIndex = 8;
			this->label92->Text = L"1d. ago";
			this->label92->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(15, 11);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(48, 44);
			this->pictureBox52->TabIndex = 7;
			this->pictureBox52->TabStop = false;
			// 
			// label93
			// 
			this->label93->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->Location = System::Drawing::Point(69, 11);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(194, 26);
			this->label93->TabIndex = 6;
			this->label93->Text = L"Friend Name";
			this->label93->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Control;
			this->panel16->Controls->Add(this->label68);
			this->panel16->Controls->Add(this->label69);
			this->panel16->Location = System::Drawing::Point(55, 368);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(482, 72);
			this->panel16->TabIndex = 19;
			// 
			// label68
			// 
			this->label68->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label68->ForeColor = System::Drawing::Color::Black;
			this->label68->Location = System::Drawing::Point(3, 26);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(470, 30);
			this->label68->TabIndex = 12;
			this->label68->Text = L"Comment Text";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label69
			// 
			this->label69->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(3, 0);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(194, 26);
			this->label69->TabIndex = 6;
			this->label69->Text = L"Comment SharedBy";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox7->Location = System::Drawing::Point(55, 315);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(482, 31);
			this->textBox7->TabIndex = 8;
			this->textBox7->Text = L"Write a comment...";
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(15, 316);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(36, 30);
			this->pictureBox42->TabIndex = 18;
			this->pictureBox42->TabStop = false;
			// 
			// button14
			// 
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button14->ForeColor = System::Drawing::Color::Gray;
			this->button14->Location = System::Drawing::Point(364, 253);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(123, 33);
			this->button14->TabIndex = 17;
			this->button14->Text = L"Comment";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm2::button14_Click);
			// 
			// button15
			// 
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button15->ForeColor = System::Drawing::Color::Gray;
			this->button15->Location = System::Drawing::Point(15, 253);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 33);
			this->button15->TabIndex = 16;
			this->button15->Text = L"Like";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm2::button15_Click);
			// 
			// label70
			// 
			this->label70->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label70->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label70->Location = System::Drawing::Point(380, 201);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(107, 30);
			this->label70->TabIndex = 15;
			this->label70->Text = L"comments";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label70->Click += gcnew System::EventHandler(this, &MyForm2::label70_Click);
			// 
			// label71
			// 
			this->label71->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label71->Location = System::Drawing::Point(359, 202);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(40, 30);
			this->label71->TabIndex = 14;
			this->label71->Text = L"11";
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label72
			// 
			this->label72->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label72->Location = System::Drawing::Point(50, 201);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(40, 30);
			this->label72->TabIndex = 13;
			this->label72->Text = L"11";
			this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label72->Click += gcnew System::EventHandler(this, &MyForm2::label72_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(15, 202);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 30);
			this->pictureBox43->TabIndex = 12;
			this->pictureBox43->TabStop = false;
			// 
			// label73
			// 
			this->label73->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(50, 138);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(487, 40);
			this->label73->TabIndex = 11;
			this->label73->Text = L"Waiting for weekend";
			this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label74
			// 
			this->label74->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(51, 88);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(500, 30);
			this->label74->TabIndex = 10;
			this->label74->Text = L"User is celebrating birthday";
			this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(15, 88);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(30, 30);
			this->pictureBox44->TabIndex = 9;
			this->pictureBox44->TabStop = false;
			// 
			// label75
			// 
			this->label75->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label75->Location = System::Drawing::Point(70, 37);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(125, 19);
			this->label75->TabIndex = 8;
			this->label75->Text = L"1d. ago";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(15, 11);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(48, 44);
			this->pictureBox45->TabIndex = 7;
			this->pictureBox45->TabStop = false;
			// 
			// label76
			// 
			this->label76->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(69, 11);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(194, 26);
			this->label76->TabIndex = 6;
			this->label76->Text = L"Friend Name";
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::White;
			this->panel17->Controls->Add(this->label150);
			this->panel17->Controls->Add(this->panel21);
			this->panel17->Controls->Add(this->panel18);
			this->panel17->Controls->Add(this->textBox8);
			this->panel17->Controls->Add(this->pictureBox46);
			this->panel17->Controls->Add(this->button16);
			this->panel17->Controls->Add(this->button17);
			this->panel17->Controls->Add(this->label79);
			this->panel17->Controls->Add(this->label80);
			this->panel17->Controls->Add(this->label81);
			this->panel17->Controls->Add(this->pictureBox47);
			this->panel17->Controls->Add(this->label82);
			this->panel17->Controls->Add(this->label83);
			this->panel17->Controls->Add(this->pictureBox48);
			this->panel17->Controls->Add(this->label84);
			this->panel17->Controls->Add(this->pictureBox49);
			this->panel17->Controls->Add(this->label85);
			this->panel17->Location = System::Drawing::Point(3, 1419);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(554, 466);
			this->panel17->TabIndex = 23;
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->Location = System::Drawing::Point(459, 17);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(47, 13);
			this->label150->TabIndex = 49;
			this->label150->Text = L"label150";
			this->label150->Visible = false;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::White;
			this->panel21->Controls->Add(this->label151);
			this->panel21->Controls->Add(this->panel22);
			this->panel21->Controls->Add(this->textBox10);
			this->panel21->Controls->Add(this->pictureBox53);
			this->panel21->Controls->Add(this->button20);
			this->panel21->Controls->Add(this->button21);
			this->panel21->Controls->Add(this->label96);
			this->panel21->Controls->Add(this->label97);
			this->panel21->Controls->Add(this->label98);
			this->panel21->Controls->Add(this->pictureBox54);
			this->panel21->Controls->Add(this->label99);
			this->panel21->Controls->Add(this->label100);
			this->panel21->Controls->Add(this->pictureBox55);
			this->panel21->Controls->Add(this->label101);
			this->panel21->Location = System::Drawing::Point(3, 3);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(554, 430);
			this->panel21->TabIndex = 48;
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->Location = System::Drawing::Point(440, 35);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(47, 13);
			this->label151->TabIndex = 21;
			this->label151->Text = L"label151";
			this->label151->Visible = false;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::SystemColors::Control;
			this->panel22->Controls->Add(this->label94);
			this->panel22->Controls->Add(this->label95);
			this->panel22->Location = System::Drawing::Point(55, 325);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(482, 72);
			this->panel22->TabIndex = 19;
			// 
			// label94
			// 
			this->label94->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label94->ForeColor = System::Drawing::Color::Black;
			this->label94->Location = System::Drawing::Point(3, 26);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(470, 30);
			this->label94->TabIndex = 12;
			this->label94->Text = L"Comment Text";
			this->label94->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label95
			// 
			this->label95->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->Location = System::Drawing::Point(3, 0);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(194, 26);
			this->label95->TabIndex = 6;
			this->label95->Text = L"Comment SharedBy";
			this->label95->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox10->Location = System::Drawing::Point(55, 272);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(482, 31);
			this->textBox10->TabIndex = 8;
			this->textBox10->Text = L"Write a comment...";
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(15, 273);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(36, 30);
			this->pictureBox53->TabIndex = 18;
			this->pictureBox53->TabStop = false;
			// 
			// button20
			// 
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button20->ForeColor = System::Drawing::Color::Gray;
			this->button20->Location = System::Drawing::Point(364, 210);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(123, 33);
			this->button20->TabIndex = 17;
			this->button20->Text = L"Comment";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm2::button20_Click);
			// 
			// button21
			// 
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button21->ForeColor = System::Drawing::Color::Gray;
			this->button21->Location = System::Drawing::Point(15, 210);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 33);
			this->button21->TabIndex = 16;
			this->button21->Text = L"Like";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm2::button21_Click);
			// 
			// label96
			// 
			this->label96->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label96->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label96->Location = System::Drawing::Point(380, 158);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(107, 30);
			this->label96->TabIndex = 15;
			this->label96->Text = L"comments";
			this->label96->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label96->Click += gcnew System::EventHandler(this, &MyForm2::label96_Click);
			// 
			// label97
			// 
			this->label97->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label97->Location = System::Drawing::Point(359, 159);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(40, 30);
			this->label97->TabIndex = 14;
			this->label97->Text = L"11";
			this->label97->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label98
			// 
			this->label98->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label98->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label98->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label98->Location = System::Drawing::Point(50, 158);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(40, 30);
			this->label98->TabIndex = 13;
			this->label98->Text = L"11";
			this->label98->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label98->Click += gcnew System::EventHandler(this, &MyForm2::label98_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(15, 159);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(30, 30);
			this->pictureBox54->TabIndex = 12;
			this->pictureBox54->TabStop = false;
			// 
			// label99
			// 
			this->label99->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->Location = System::Drawing::Point(19, 85);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(487, 40);
			this->label99->TabIndex = 11;
			this->label99->Text = L"Waiting for weekend";
			this->label99->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label100
			// 
			this->label100->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label100->Location = System::Drawing::Point(70, 37);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(249, 19);
			this->label100->TabIndex = 8;
			this->label100->Text = L"1d. ago";
			this->label100->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(15, 11);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(48, 44);
			this->pictureBox55->TabIndex = 7;
			this->pictureBox55->TabStop = false;
			// 
			// label101
			// 
			this->label101->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->Location = System::Drawing::Point(69, 11);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(194, 26);
			this->label101->TabIndex = 6;
			this->label101->Text = L"Friend Name";
			this->label101->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::Control;
			this->panel18->Controls->Add(this->label77);
			this->panel18->Controls->Add(this->label78);
			this->panel18->Location = System::Drawing::Point(55, 368);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(482, 72);
			this->panel18->TabIndex = 19;
			// 
			// label77
			// 
			this->label77->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label77->ForeColor = System::Drawing::Color::Black;
			this->label77->Location = System::Drawing::Point(3, 26);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(470, 30);
			this->label77->TabIndex = 12;
			this->label77->Text = L"Comment Text";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label78
			// 
			this->label78->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(3, 0);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(194, 26);
			this->label78->TabIndex = 6;
			this->label78->Text = L"Comment SharedBy";
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox8->Location = System::Drawing::Point(55, 315);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(482, 31);
			this->textBox8->TabIndex = 8;
			this->textBox8->Text = L"Write a comment...";
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(15, 316);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(36, 30);
			this->pictureBox46->TabIndex = 18;
			this->pictureBox46->TabStop = false;
			// 
			// button16
			// 
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button16->ForeColor = System::Drawing::Color::Gray;
			this->button16->Location = System::Drawing::Point(364, 253);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(123, 33);
			this->button16->TabIndex = 17;
			this->button16->Text = L"Comment";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm2::button16_Click);
			// 
			// button17
			// 
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button17->ForeColor = System::Drawing::Color::Gray;
			this->button17->Location = System::Drawing::Point(15, 253);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 33);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Like";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm2::button17_Click);
			// 
			// label79
			// 
			this->label79->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label79->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label79->Location = System::Drawing::Point(380, 201);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(107, 30);
			this->label79->TabIndex = 15;
			this->label79->Text = L"comments";
			this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label79->Click += gcnew System::EventHandler(this, &MyForm2::label79_Click);
			// 
			// label80
			// 
			this->label80->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label80->Location = System::Drawing::Point(359, 202);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(40, 30);
			this->label80->TabIndex = 14;
			this->label80->Text = L"11";
			this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label81
			// 
			this->label81->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label81->Location = System::Drawing::Point(50, 201);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(40, 30);
			this->label81->TabIndex = 13;
			this->label81->Text = L"11";
			this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label81->Click += gcnew System::EventHandler(this, &MyForm2::label81_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(15, 202);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(30, 30);
			this->pictureBox47->TabIndex = 12;
			this->pictureBox47->TabStop = false;
			// 
			// label82
			// 
			this->label82->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(50, 138);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(487, 40);
			this->label82->TabIndex = 11;
			this->label82->Text = L"Waiting for weekend";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label83
			// 
			this->label83->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(51, 88);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(500, 30);
			this->label83->TabIndex = 10;
			this->label83->Text = L"User is celebrating birthday";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(15, 88);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(30, 30);
			this->pictureBox48->TabIndex = 9;
			this->pictureBox48->TabStop = false;
			// 
			// label84
			// 
			this->label84->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label84->Location = System::Drawing::Point(70, 37);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(125, 19);
			this->label84->TabIndex = 8;
			this->label84->Text = L"1d. ago";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(15, 11);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(48, 44);
			this->pictureBox49->TabIndex = 7;
			this->pictureBox49->TabStop = false;
			// 
			// label85
			// 
			this->label85->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(69, 11);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(194, 26);
			this->label85->TabIndex = 6;
			this->label85->Text = L"Friend Name";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::White;
			this->panel23->Controls->Add(this->label152);
			this->panel23->Controls->Add(this->panel26);
			this->panel23->Controls->Add(this->textBox12);
			this->panel23->Controls->Add(this->pictureBox59);
			this->panel23->Controls->Add(this->button24);
			this->panel23->Controls->Add(this->button25);
			this->panel23->Controls->Add(this->label112);
			this->panel23->Controls->Add(this->panel24);
			this->panel23->Controls->Add(this->label113);
			this->panel23->Controls->Add(this->label114);
			this->panel23->Controls->Add(this->pictureBox60);
			this->panel23->Controls->Add(this->label115);
			this->panel23->Controls->Add(this->label116);
			this->panel23->Controls->Add(this->pictureBox61);
			this->panel23->Controls->Add(this->label117);
			this->panel23->Controls->Add(this->pictureBox62);
			this->panel23->Controls->Add(this->label118);
			this->panel23->Location = System::Drawing::Point(3, 1891);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(554, 466);
			this->panel23->TabIndex = 24;
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->Location = System::Drawing::Point(461, 22);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(47, 13);
			this->label152->TabIndex = 49;
			this->label152->Text = L"label152";
			this->label152->Visible = false;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::Control;
			this->panel26->Controls->Add(this->label110);
			this->panel26->Controls->Add(this->label111);
			this->panel26->Location = System::Drawing::Point(55, 368);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(482, 72);
			this->panel26->TabIndex = 19;
			// 
			// label110
			// 
			this->label110->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label110->ForeColor = System::Drawing::Color::Black;
			this->label110->Location = System::Drawing::Point(3, 26);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(470, 30);
			this->label110->TabIndex = 12;
			this->label110->Text = L"Comment Text";
			this->label110->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label111
			// 
			this->label111->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label111->Location = System::Drawing::Point(3, 0);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(194, 26);
			this->label111->TabIndex = 6;
			this->label111->Text = L"Comment SharedBy";
			this->label111->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox12->Location = System::Drawing::Point(55, 315);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(482, 31);
			this->textBox12->TabIndex = 8;
			this->textBox12->Text = L"Write a comment...";
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(15, 316);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(36, 30);
			this->pictureBox59->TabIndex = 18;
			this->pictureBox59->TabStop = false;
			// 
			// button24
			// 
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button24->ForeColor = System::Drawing::Color::Gray;
			this->button24->Location = System::Drawing::Point(364, 253);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(123, 33);
			this->button24->TabIndex = 17;
			this->button24->Text = L"Comment";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm2::button24_Click);
			// 
			// button25
			// 
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button25->ForeColor = System::Drawing::Color::Gray;
			this->button25->Location = System::Drawing::Point(15, 253);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 33);
			this->button25->TabIndex = 16;
			this->button25->Text = L"Like";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm2::button25_Click);
			// 
			// label112
			// 
			this->label112->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label112->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label112->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label112->Location = System::Drawing::Point(380, 201);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(107, 30);
			this->label112->TabIndex = 15;
			this->label112->Text = L"comments";
			this->label112->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label112->Click += gcnew System::EventHandler(this, &MyForm2::label112_Click);
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::White;
			this->panel24->Controls->Add(this->label153);
			this->panel24->Controls->Add(this->panel25);
			this->panel24->Controls->Add(this->textBox11);
			this->panel24->Controls->Add(this->pictureBox56);
			this->panel24->Controls->Add(this->button22);
			this->panel24->Controls->Add(this->button23);
			this->panel24->Controls->Add(this->label104);
			this->panel24->Controls->Add(this->label105);
			this->panel24->Controls->Add(this->label106);
			this->panel24->Controls->Add(this->pictureBox57);
			this->panel24->Controls->Add(this->label107);
			this->panel24->Controls->Add(this->label108);
			this->panel24->Controls->Add(this->pictureBox58);
			this->panel24->Controls->Add(this->label109);
			this->panel24->Location = System::Drawing::Point(3, 3);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(554, 430);
			this->panel24->TabIndex = 48;
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->Location = System::Drawing::Point(457, 20);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(47, 13);
			this->label153->TabIndex = 21;
			this->label153->Text = L"label153";
			this->label153->Visible = false;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::SystemColors::Control;
			this->panel25->Controls->Add(this->label102);
			this->panel25->Controls->Add(this->label103);
			this->panel25->Location = System::Drawing::Point(55, 325);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(482, 72);
			this->panel25->TabIndex = 19;
			// 
			// label102
			// 
			this->label102->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label102->ForeColor = System::Drawing::Color::Black;
			this->label102->Location = System::Drawing::Point(3, 26);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(470, 30);
			this->label102->TabIndex = 12;
			this->label102->Text = L"Comment Text";
			this->label102->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label103
			// 
			this->label103->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->Location = System::Drawing::Point(3, 0);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(194, 26);
			this->label103->TabIndex = 6;
			this->label103->Text = L"Comment SharedBy";
			this->label103->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox11->Location = System::Drawing::Point(55, 272);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(482, 31);
			this->textBox11->TabIndex = 8;
			this->textBox11->Text = L"Write a comment...";
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(15, 273);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(36, 30);
			this->pictureBox56->TabIndex = 18;
			this->pictureBox56->TabStop = false;
			// 
			// button22
			// 
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button22->ForeColor = System::Drawing::Color::Gray;
			this->button22->Location = System::Drawing::Point(364, 210);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(123, 33);
			this->button22->TabIndex = 17;
			this->button22->Text = L"Comment";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm2::button22_Click);
			// 
			// button23
			// 
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button23->ForeColor = System::Drawing::Color::Gray;
			this->button23->Location = System::Drawing::Point(15, 210);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 33);
			this->button23->TabIndex = 16;
			this->button23->Text = L"Like";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm2::button23_Click);
			// 
			// label104
			// 
			this->label104->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label104->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label104->Location = System::Drawing::Point(380, 158);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(107, 30);
			this->label104->TabIndex = 15;
			this->label104->Text = L"comments";
			this->label104->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label104->Click += gcnew System::EventHandler(this, &MyForm2::label104_Click);
			// 
			// label105
			// 
			this->label105->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label105->Location = System::Drawing::Point(359, 159);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(40, 30);
			this->label105->TabIndex = 14;
			this->label105->Text = L"11";
			this->label105->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label106
			// 
			this->label106->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label106->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label106->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label106->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label106->Location = System::Drawing::Point(50, 158);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(40, 30);
			this->label106->TabIndex = 13;
			this->label106->Text = L"11";
			this->label106->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label106->Click += gcnew System::EventHandler(this, &MyForm2::label106_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(15, 159);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(30, 30);
			this->pictureBox57->TabIndex = 12;
			this->pictureBox57->TabStop = false;
			// 
			// label107
			// 
			this->label107->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label107->Location = System::Drawing::Point(19, 85);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(487, 40);
			this->label107->TabIndex = 11;
			this->label107->Text = L"Waiting for weekend";
			this->label107->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label108
			// 
			this->label108->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label108->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label108->Location = System::Drawing::Point(70, 37);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(249, 19);
			this->label108->TabIndex = 8;
			this->label108->Text = L"1d. ago";
			this->label108->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(15, 11);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(48, 44);
			this->pictureBox58->TabIndex = 7;
			this->pictureBox58->TabStop = false;
			// 
			// label109
			// 
			this->label109->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label109->Location = System::Drawing::Point(69, 11);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(194, 26);
			this->label109->TabIndex = 6;
			this->label109->Text = L"Friend Name";
			this->label109->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label113
			// 
			this->label113->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label113->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label113->Location = System::Drawing::Point(359, 202);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(40, 30);
			this->label113->TabIndex = 14;
			this->label113->Text = L"11";
			this->label113->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label114
			// 
			this->label114->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label114->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label114->Location = System::Drawing::Point(50, 201);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(40, 30);
			this->label114->TabIndex = 13;
			this->label114->Text = L"11";
			this->label114->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label114->Click += gcnew System::EventHandler(this, &MyForm2::label114_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(15, 202);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(30, 30);
			this->pictureBox60->TabIndex = 12;
			this->pictureBox60->TabStop = false;
			// 
			// label115
			// 
			this->label115->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label115->Location = System::Drawing::Point(50, 138);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(487, 40);
			this->label115->TabIndex = 11;
			this->label115->Text = L"Waiting for weekend";
			this->label115->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label116
			// 
			this->label116->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label116->Location = System::Drawing::Point(51, 88);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(500, 30);
			this->label116->TabIndex = 10;
			this->label116->Text = L"User is celebrating birthday";
			this->label116->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox61
			// 
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(15, 88);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(30, 30);
			this->pictureBox61->TabIndex = 9;
			this->pictureBox61->TabStop = false;
			// 
			// label117
			// 
			this->label117->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label117->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label117->Location = System::Drawing::Point(70, 37);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(125, 19);
			this->label117->TabIndex = 8;
			this->label117->Text = L"1d. ago";
			this->label117->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox62
			// 
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(15, 11);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(48, 44);
			this->pictureBox62->TabIndex = 7;
			this->pictureBox62->TabStop = false;
			// 
			// label118
			// 
			this->label118->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label118->Location = System::Drawing::Point(69, 11);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(194, 26);
			this->label118->TabIndex = 6;
			this->label118->Text = L"Friend Name";
			this->label118->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::White;
			this->panel27->Controls->Add(this->label154);
			this->panel27->Controls->Add(this->panel28);
			this->panel27->Controls->Add(this->panel30);
			this->panel27->Controls->Add(this->textBox14);
			this->panel27->Controls->Add(this->pictureBox66);
			this->panel27->Controls->Add(this->button28);
			this->panel27->Controls->Add(this->button29);
			this->panel27->Controls->Add(this->label129);
			this->panel27->Controls->Add(this->label130);
			this->panel27->Controls->Add(this->label131);
			this->panel27->Controls->Add(this->pictureBox67);
			this->panel27->Controls->Add(this->label132);
			this->panel27->Controls->Add(this->label133);
			this->panel27->Controls->Add(this->pictureBox68);
			this->panel27->Controls->Add(this->label134);
			this->panel27->Controls->Add(this->pictureBox69);
			this->panel27->Controls->Add(this->label135);
			this->panel27->Location = System::Drawing::Point(3, 2363);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(554, 466);
			this->panel27->TabIndex = 48;
			// 
			// label154
			// 
			this->label154->AutoSize = true;
			this->label154->Location = System::Drawing::Point(440, 27);
			this->label154->Name = L"label154";
			this->label154->Size = System::Drawing::Size(47, 13);
			this->label154->TabIndex = 49;
			this->label154->Text = L"label154";
			this->label154->Visible = false;
			this->label154->Click += gcnew System::EventHandler(this, &MyForm2::label154_Click);
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::White;
			this->panel28->Controls->Add(this->label155);
			this->panel28->Controls->Add(this->panel29);
			this->panel28->Controls->Add(this->textBox13);
			this->panel28->Controls->Add(this->pictureBox63);
			this->panel28->Controls->Add(this->button26);
			this->panel28->Controls->Add(this->button27);
			this->panel28->Controls->Add(this->label121);
			this->panel28->Controls->Add(this->label122);
			this->panel28->Controls->Add(this->label123);
			this->panel28->Controls->Add(this->pictureBox64);
			this->panel28->Controls->Add(this->label124);
			this->panel28->Controls->Add(this->label125);
			this->panel28->Controls->Add(this->pictureBox65);
			this->panel28->Controls->Add(this->label126);
			this->panel28->Location = System::Drawing::Point(3, 3);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(554, 430);
			this->panel28->TabIndex = 49;
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->Location = System::Drawing::Point(254, 209);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(47, 13);
			this->label155->TabIndex = 21;
			this->label155->Text = L"label155";
			this->label155->Visible = false;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::SystemColors::Control;
			this->panel29->Controls->Add(this->label119);
			this->panel29->Controls->Add(this->label120);
			this->panel29->Location = System::Drawing::Point(55, 325);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(482, 72);
			this->panel29->TabIndex = 19;
			// 
			// label119
			// 
			this->label119->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label119->ForeColor = System::Drawing::Color::Black;
			this->label119->Location = System::Drawing::Point(3, 26);
			this->label119->Name = L"label119";
			this->label119->Size = System::Drawing::Size(470, 30);
			this->label119->TabIndex = 12;
			this->label119->Text = L"Comment Text";
			this->label119->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label120
			// 
			this->label120->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label120->Location = System::Drawing::Point(3, 0);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(194, 26);
			this->label120->TabIndex = 6;
			this->label120->Text = L"Comment SharedBy";
			this->label120->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox13->Location = System::Drawing::Point(55, 272);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(482, 31);
			this->textBox13->TabIndex = 8;
			this->textBox13->Text = L"Write a comment...";
			// 
			// pictureBox63
			// 
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(15, 273);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(36, 30);
			this->pictureBox63->TabIndex = 18;
			this->pictureBox63->TabStop = false;
			// 
			// button26
			// 
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button26->ForeColor = System::Drawing::Color::Gray;
			this->button26->Location = System::Drawing::Point(364, 210);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(123, 33);
			this->button26->TabIndex = 17;
			this->button26->Text = L"Comment";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm2::button26_Click);
			// 
			// button27
			// 
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button27->ForeColor = System::Drawing::Color::Gray;
			this->button27->Location = System::Drawing::Point(15, 210);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 33);
			this->button27->TabIndex = 16;
			this->button27->Text = L"Like";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm2::button27_Click);
			// 
			// label121
			// 
			this->label121->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label121->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label121->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label121->Location = System::Drawing::Point(380, 158);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(107, 30);
			this->label121->TabIndex = 15;
			this->label121->Text = L"comments";
			this->label121->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label121->Click += gcnew System::EventHandler(this, &MyForm2::label121_Click);
			// 
			// label122
			// 
			this->label122->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label122->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label122->Location = System::Drawing::Point(359, 159);
			this->label122->Name = L"label122";
			this->label122->Size = System::Drawing::Size(40, 30);
			this->label122->TabIndex = 14;
			this->label122->Text = L"11";
			this->label122->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label123
			// 
			this->label123->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label123->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label123->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label123->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label123->Location = System::Drawing::Point(50, 158);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(40, 30);
			this->label123->TabIndex = 13;
			this->label123->Text = L"11";
			this->label123->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label123->Click += gcnew System::EventHandler(this, &MyForm2::label123_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(15, 159);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(30, 30);
			this->pictureBox64->TabIndex = 12;
			this->pictureBox64->TabStop = false;
			// 
			// label124
			// 
			this->label124->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label124->Location = System::Drawing::Point(19, 85);
			this->label124->Name = L"label124";
			this->label124->Size = System::Drawing::Size(487, 40);
			this->label124->TabIndex = 11;
			this->label124->Text = L"Waiting for weekend";
			this->label124->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label124->Click += gcnew System::EventHandler(this, &MyForm2::label124_Click);
			// 
			// label125
			// 
			this->label125->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label125->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label125->Location = System::Drawing::Point(70, 37);
			this->label125->Name = L"label125";
			this->label125->Size = System::Drawing::Size(283, 19);
			this->label125->TabIndex = 8;
			this->label125->Text = L"1d. ago";
			this->label125->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox65
			// 
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(15, 11);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(48, 44);
			this->pictureBox65->TabIndex = 7;
			this->pictureBox65->TabStop = false;
			// 
			// label126
			// 
			this->label126->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label126->Location = System::Drawing::Point(69, 11);
			this->label126->Name = L"label126";
			this->label126->Size = System::Drawing::Size(194, 26);
			this->label126->TabIndex = 6;
			this->label126->Text = L"Friend Name";
			this->label126->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::SystemColors::Control;
			this->panel30->Controls->Add(this->label127);
			this->panel30->Controls->Add(this->label128);
			this->panel30->Location = System::Drawing::Point(55, 368);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(482, 72);
			this->panel30->TabIndex = 19;
			// 
			// label127
			// 
			this->label127->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label127->ForeColor = System::Drawing::Color::Black;
			this->label127->Location = System::Drawing::Point(3, 26);
			this->label127->Name = L"label127";
			this->label127->Size = System::Drawing::Size(470, 30);
			this->label127->TabIndex = 12;
			this->label127->Text = L"Comment Text";
			this->label127->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label128
			// 
			this->label128->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label128->Location = System::Drawing::Point(3, 0);
			this->label128->Name = L"label128";
			this->label128->Size = System::Drawing::Size(194, 26);
			this->label128->TabIndex = 6;
			this->label128->Text = L"Comment SharedBy";
			this->label128->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox14->Location = System::Drawing::Point(55, 315);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(482, 31);
			this->textBox14->TabIndex = 8;
			this->textBox14->Text = L"Write a comment...";
			// 
			// pictureBox66
			// 
			this->pictureBox66->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.Image")));
			this->pictureBox66->Location = System::Drawing::Point(15, 316);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(36, 30);
			this->pictureBox66->TabIndex = 18;
			this->pictureBox66->TabStop = false;
			// 
			// button28
			// 
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button28->ForeColor = System::Drawing::Color::Gray;
			this->button28->Location = System::Drawing::Point(364, 253);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(123, 33);
			this->button28->TabIndex = 17;
			this->button28->Text = L"Comment";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm2::button28_Click);
			// 
			// button29
			// 
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button29->ForeColor = System::Drawing::Color::Gray;
			this->button29->Location = System::Drawing::Point(15, 253);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 33);
			this->button29->TabIndex = 16;
			this->button29->Text = L"Like";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm2::button29_Click);
			// 
			// label129
			// 
			this->label129->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label129->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label129->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label129->Location = System::Drawing::Point(380, 201);
			this->label129->Name = L"label129";
			this->label129->Size = System::Drawing::Size(107, 30);
			this->label129->TabIndex = 15;
			this->label129->Text = L"comments";
			this->label129->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label130
			// 
			this->label130->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label130->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label130->Location = System::Drawing::Point(359, 202);
			this->label130->Name = L"label130";
			this->label130->Size = System::Drawing::Size(40, 30);
			this->label130->TabIndex = 14;
			this->label130->Text = L"11";
			this->label130->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label131
			// 
			this->label131->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label131->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label131->Location = System::Drawing::Point(50, 201);
			this->label131->Name = L"label131";
			this->label131->Size = System::Drawing::Size(40, 30);
			this->label131->TabIndex = 13;
			this->label131->Text = L"11";
			this->label131->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label131->Click += gcnew System::EventHandler(this, &MyForm2::label131_Click);
			// 
			// pictureBox67
			// 
			this->pictureBox67->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox67.Image")));
			this->pictureBox67->Location = System::Drawing::Point(15, 202);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(30, 30);
			this->pictureBox67->TabIndex = 12;
			this->pictureBox67->TabStop = false;
			// 
			// label132
			// 
			this->label132->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label132->Location = System::Drawing::Point(50, 138);
			this->label132->Name = L"label132";
			this->label132->Size = System::Drawing::Size(487, 40);
			this->label132->TabIndex = 11;
			this->label132->Text = L"Waiting for weekend";
			this->label132->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label133
			// 
			this->label133->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label133->Location = System::Drawing::Point(51, 88);
			this->label133->Name = L"label133";
			this->label133->Size = System::Drawing::Size(500, 30);
			this->label133->TabIndex = 10;
			this->label133->Text = L"User is celebrating birthday";
			this->label133->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox68
			// 
			this->pictureBox68->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox68.Image")));
			this->pictureBox68->Location = System::Drawing::Point(15, 88);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(30, 30);
			this->pictureBox68->TabIndex = 9;
			this->pictureBox68->TabStop = false;
			// 
			// label134
			// 
			this->label134->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label134->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label134->Location = System::Drawing::Point(70, 37);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(125, 19);
			this->label134->TabIndex = 8;
			this->label134->Text = L"1d. ago";
			this->label134->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox69
			// 
			this->pictureBox69->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox69.Image")));
			this->pictureBox69->Location = System::Drawing::Point(15, 11);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(48, 44);
			this->pictureBox69->TabIndex = 7;
			this->pictureBox69->TabStop = false;
			// 
			// label135
			// 
			this->label135->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label135->Location = System::Drawing::Point(69, 11);
			this->label135->Name = L"label135";
			this->label135->Size = System::Drawing::Size(194, 26);
			this->label135->TabIndex = 6;
			this->label135->Text = L"Friend Name";
			this->label135->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::White;
			this->panel31->Controls->Add(this->panel32);
			this->panel31->Controls->Add(this->textBox15);
			this->panel31->Controls->Add(this->pictureBox70);
			this->panel31->Controls->Add(this->button30);
			this->panel31->Controls->Add(this->button31);
			this->panel31->Controls->Add(this->label138);
			this->panel31->Controls->Add(this->label139);
			this->panel31->Controls->Add(this->label140);
			this->panel31->Controls->Add(this->pictureBox71);
			this->panel31->Controls->Add(this->label141);
			this->panel31->Controls->Add(this->label142);
			this->panel31->Controls->Add(this->pictureBox72);
			this->panel31->Controls->Add(this->label143);
			this->panel31->Location = System::Drawing::Point(3, 2835);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(554, 430);
			this->panel31->TabIndex = 49;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::SystemColors::Control;
			this->panel32->Controls->Add(this->label136);
			this->panel32->Controls->Add(this->label137);
			this->panel32->Location = System::Drawing::Point(55, 325);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(482, 72);
			this->panel32->TabIndex = 19;
			// 
			// label136
			// 
			this->label136->Font = (gcnew System::Drawing::Font(L"Segoe UI Light", 14));
			this->label136->ForeColor = System::Drawing::Color::Black;
			this->label136->Location = System::Drawing::Point(3, 26);
			this->label136->Name = L"label136";
			this->label136->Size = System::Drawing::Size(470, 30);
			this->label136->TabIndex = 12;
			this->label136->Text = L"Comment Text";
			this->label136->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label137
			// 
			this->label137->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label137->Location = System::Drawing::Point(3, 0);
			this->label137->Name = L"label137";
			this->label137->Size = System::Drawing::Size(194, 26);
			this->label137->TabIndex = 6;
			this->label137->Text = L"Comment SharedBy";
			this->label137->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13));
			this->textBox15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->textBox15->Location = System::Drawing::Point(55, 272);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(482, 31);
			this->textBox15->TabIndex = 8;
			this->textBox15->Text = L"Write a comment...";
			// 
			// pictureBox70
			// 
			this->pictureBox70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox70.Image")));
			this->pictureBox70->Location = System::Drawing::Point(15, 273);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(36, 30);
			this->pictureBox70->TabIndex = 18;
			this->pictureBox70->TabStop = false;
			// 
			// button30
			// 
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button30->ForeColor = System::Drawing::Color::Gray;
			this->button30->Location = System::Drawing::Point(364, 210);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(123, 33);
			this->button30->TabIndex = 17;
			this->button30->Text = L"Comment";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold));
			this->button31->ForeColor = System::Drawing::Color::Gray;
			this->button31->Location = System::Drawing::Point(15, 210);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 33);
			this->button31->TabIndex = 16;
			this->button31->Text = L"Like";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// label138
			// 
			this->label138->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label138->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label138->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label138->Location = System::Drawing::Point(380, 158);
			this->label138->Name = L"label138";
			this->label138->Size = System::Drawing::Size(107, 30);
			this->label138->TabIndex = 15;
			this->label138->Text = L"comments";
			this->label138->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label139
			// 
			this->label139->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label139->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label139->Location = System::Drawing::Point(359, 159);
			this->label139->Name = L"label139";
			this->label139->Size = System::Drawing::Size(40, 30);
			this->label139->TabIndex = 14;
			this->label139->Text = L"11";
			this->label139->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label140
			// 
			this->label140->AccessibleRole = System::Windows::Forms::AccessibleRole::PushButton;
			this->label140->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label140->Font = (gcnew System::Drawing::Font(L"Segoe UI Semilight", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label140->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label140->Location = System::Drawing::Point(50, 158);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(40, 30);
			this->label140->TabIndex = 13;
			this->label140->Text = L"11";
			this->label140->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox71
			// 
			this->pictureBox71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox71.Image")));
			this->pictureBox71->Location = System::Drawing::Point(15, 159);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(30, 30);
			this->pictureBox71->TabIndex = 12;
			this->pictureBox71->TabStop = false;
			// 
			// label141
			// 
			this->label141->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label141->Location = System::Drawing::Point(19, 85);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(487, 40);
			this->label141->TabIndex = 11;
			this->label141->Text = L"Waiting for weekend";
			this->label141->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label142
			// 
			this->label142->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label142->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label142->Location = System::Drawing::Point(70, 37);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(305, 19);
			this->label142->TabIndex = 8;
			this->label142->Text = L"1d. ago";
			this->label142->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox72
			// 
			this->pictureBox72->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox72.Image")));
			this->pictureBox72->Location = System::Drawing::Point(15, 11);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(48, 44);
			this->pictureBox72->TabIndex = 7;
			this->pictureBox72->TabStop = false;
			// 
			// label143
			// 
			this->label143->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label143->Location = System::Drawing::Point(69, 11);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(194, 26);
			this->label143->TabIndex = 6;
			this->label143->Text = L"Friend Name";
			this->label143->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label45
			// 
			this->label45->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label45->Location = System::Drawing::Point(1085, 572);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(278, 32);
			this->label45->TabIndex = 43;
			this->label45->Text = L"Liked Pages";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label45->Click += gcnew System::EventHandler(this, &MyForm2::label45_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(1048, 572);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(31, 32);
			this->pictureBox29->TabIndex = 42;
			this->pictureBox29->TabStop = false;
			// 
			// label46
			// 
			this->label46->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label46->Location = System::Drawing::Point(1085, 518);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(278, 32);
			this->label46->TabIndex = 41;
			this->label46->Text = L"Liked Pages";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label46->Click += gcnew System::EventHandler(this, &MyForm2::label46_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(1048, 518);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(31, 32);
			this->pictureBox30->TabIndex = 40;
			this->pictureBox30->TabStop = false;
			// 
			// label47
			// 
			this->label47->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label47->Location = System::Drawing::Point(1085, 461);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(278, 32);
			this->label47->TabIndex = 39;
			this->label47->Text = L"Liked Pages";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label47->Click += gcnew System::EventHandler(this, &MyForm2::label47_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1048, 461);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(31, 32);
			this->pictureBox31->TabIndex = 38;
			this->pictureBox31->TabStop = false;
			// 
			// label48
			// 
			this->label48->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label48->Location = System::Drawing::Point(1085, 408);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(278, 32);
			this->label48->TabIndex = 37;
			this->label48->Text = L"Liked Pages";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label48->Click += gcnew System::EventHandler(this, &MyForm2::label48_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(1048, 408);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(31, 32);
			this->pictureBox32->TabIndex = 36;
			this->pictureBox32->TabStop = false;
			// 
			// label49
			// 
			this->label49->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label49->Location = System::Drawing::Point(1085, 687);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(278, 32);
			this->label49->TabIndex = 47;
			this->label49->Text = L"Liked Pages";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label49->Click += gcnew System::EventHandler(this, &MyForm2::label49_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(1048, 687);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(31, 32);
			this->pictureBox33->TabIndex = 46;
			this->pictureBox33->TabStop = false;
			// 
			// label50
			// 
			this->label50->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(137)), static_cast<System::Int32>(static_cast<System::Byte>(143)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label50->Location = System::Drawing::Point(1085, 633);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(278, 32);
			this->label50->TabIndex = 45;
			this->label50->Text = L"Liked Pages";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label50->Click += gcnew System::EventHandler(this, &MyForm2::label50_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(1048, 633);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(31, 32);
			this->pictureBox34->TabIndex = 44;
			this->pictureBox34->TabStop = false;
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(239, 225);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(47, 13);
			this->label156->TabIndex = 48;
			this->label156->Text = L"label156";
			this->label156->Visible = false;
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Location = System::Drawing::Point(239, 274);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(47, 13);
			this->label157->TabIndex = 49;
			this->label157->Text = L"label157";
			this->label157->Visible = false;
			// 
			// label158
			// 
			this->label158->AutoSize = true;
			this->label158->Location = System::Drawing::Point(239, 328);
			this->label158->Name = L"label158";
			this->label158->Size = System::Drawing::Size(47, 13);
			this->label158->TabIndex = 50;
			this->label158->Text = L"label158";
			this->label158->Visible = false;
			// 
			// label159
			// 
			this->label159->AutoSize = true;
			this->label159->Location = System::Drawing::Point(239, 393);
			this->label159->Name = L"label159";
			this->label159->Size = System::Drawing::Size(47, 13);
			this->label159->TabIndex = 51;
			this->label159->Text = L"label159";
			this->label159->Visible = false;
			// 
			// label160
			// 
			this->label160->AutoSize = true;
			this->label160->Location = System::Drawing::Point(239, 446);
			this->label160->Name = L"label160";
			this->label160->Size = System::Drawing::Size(47, 13);
			this->label160->TabIndex = 52;
			this->label160->Text = L"label160";
			this->label160->Visible = false;
			// 
			// label161
			// 
			this->label161->AutoSize = true;
			this->label161->Location = System::Drawing::Point(239, 507);
			this->label161->Name = L"label161";
			this->label161->Size = System::Drawing::Size(47, 13);
			this->label161->TabIndex = 53;
			this->label161->Text = L"label161";
			this->label161->Visible = false;
			// 
			// label162
			// 
			this->label162->AutoSize = true;
			this->label162->Location = System::Drawing::Point(239, 567);
			this->label162->Name = L"label162";
			this->label162->Size = System::Drawing::Size(47, 13);
			this->label162->TabIndex = 54;
			this->label162->Text = L"label162";
			this->label162->Visible = false;
			// 
			// label163
			// 
			this->label163->AutoSize = true;
			this->label163->Location = System::Drawing::Point(239, 619);
			this->label163->Name = L"label163";
			this->label163->Size = System::Drawing::Size(47, 13);
			this->label163->TabIndex = 55;
			this->label163->Text = L"label163";
			this->label163->Visible = false;
			// 
			// label164
			// 
			this->label164->AutoSize = true;
			this->label164->Location = System::Drawing::Point(239, 676);
			this->label164->Name = L"label164";
			this->label164->Size = System::Drawing::Size(47, 13);
			this->label164->TabIndex = 56;
			this->label164->Text = L"label164";
			this->label164->Visible = false;
			// 
			// label165
			// 
			this->label165->AutoSize = true;
			this->label165->Location = System::Drawing::Point(239, 734);
			this->label165->Name = L"label165";
			this->label165->Size = System::Drawing::Size(47, 13);
			this->label165->TabIndex = 57;
			this->label165->Text = L"label165";
			this->label165->Visible = false;
			// 
			// label166
			// 
			this->label166->AutoSize = true;
			this->label166->Location = System::Drawing::Point(1298, 208);
			this->label166->Name = L"label166";
			this->label166->Size = System::Drawing::Size(47, 13);
			this->label166->TabIndex = 58;
			this->label166->Text = L"label166";
			this->label166->Visible = false;
			// 
			// label167
			// 
			this->label167->AutoSize = true;
			this->label167->Location = System::Drawing::Point(1298, 261);
			this->label167->Name = L"label167";
			this->label167->Size = System::Drawing::Size(47, 13);
			this->label167->TabIndex = 59;
			this->label167->Text = L"label167";
			this->label167->Visible = false;
			// 
			// label168
			// 
			this->label168->AutoSize = true;
			this->label168->Location = System::Drawing::Point(1298, 315);
			this->label168->Name = L"label168";
			this->label168->Size = System::Drawing::Size(47, 13);
			this->label168->TabIndex = 60;
			this->label168->Text = L"label168";
			this->label168->Visible = false;
			// 
			// label169
			// 
			this->label169->AutoSize = true;
			this->label169->Location = System::Drawing::Point(1298, 372);
			this->label169->Name = L"label169";
			this->label169->Size = System::Drawing::Size(47, 13);
			this->label169->TabIndex = 61;
			this->label169->Text = L"label169";
			this->label169->Visible = false;
			// 
			// label170
			// 
			this->label170->AutoSize = true;
			this->label170->Location = System::Drawing::Point(1298, 422);
			this->label170->Name = L"label170";
			this->label170->Size = System::Drawing::Size(47, 13);
			this->label170->TabIndex = 62;
			this->label170->Text = L"label170";
			this->label170->Visible = false;
			// 
			// label171
			// 
			this->label171->AutoSize = true;
			this->label171->Location = System::Drawing::Point(1298, 475);
			this->label171->Name = L"label171";
			this->label171->Size = System::Drawing::Size(47, 13);
			this->label171->TabIndex = 63;
			this->label171->Text = L"label171";
			this->label171->Visible = false;
			// 
			// label172
			// 
			this->label172->AutoSize = true;
			this->label172->Location = System::Drawing::Point(1298, 537);
			this->label172->Name = L"label172";
			this->label172->Size = System::Drawing::Size(47, 13);
			this->label172->TabIndex = 64;
			this->label172->Text = L"label172";
			this->label172->Visible = false;
			// 
			// label173
			// 
			this->label173->AutoSize = true;
			this->label173->Location = System::Drawing::Point(1298, 588);
			this->label173->Name = L"label173";
			this->label173->Size = System::Drawing::Size(47, 13);
			this->label173->TabIndex = 65;
			this->label173->Text = L"label173";
			this->label173->Visible = false;
			// 
			// label174
			// 
			this->label174->AutoSize = true;
			this->label174->Location = System::Drawing::Point(1298, 652);
			this->label174->Name = L"label174";
			this->label174->Size = System::Drawing::Size(47, 13);
			this->label174->TabIndex = 66;
			this->label174->Text = L"label174";
			this->label174->Visible = false;
			// 
			// label175
			// 
			this->label175->AutoSize = true;
			this->label175->Location = System::Drawing::Point(1298, 701);
			this->label175->Name = L"label175";
			this->label175->Size = System::Drawing::Size(47, 13);
			this->label175->TabIndex = 67;
			this->label175->Text = L"label175";
			this->label175->Visible = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::White;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Segoe UI Historic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(127, 35);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(350, 35);
			this->button32->TabIndex = 68;
			this->button32->Text = L"Not Found";
			this->button32->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm2::button32_Click_1);
			// 
			// label190
			// 
			this->label190->AutoSize = true;
			this->label190->Location = System::Drawing::Point(80, 112);
			this->label190->Name = L"label190";
			this->label190->Size = System::Drawing::Size(47, 13);
			this->label190->TabIndex = 69;
			this->label190->Text = L"label190";
			this->label190->Visible = false;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.BackgroundImage")));
			this->button34->Location = System::Drawing::Point(1048, 64);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(132, 44);
			this->button34->TabIndex = 71;
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm2::button34_Click);
			// 
			// button35
			// 
			this->button35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.BackgroundImage")));
			this->button35->Location = System::Drawing::Point(1183, 64);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(180, 44);
			this->button35->TabIndex = 72;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm2::button35_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1369, 788);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->label190);
			this->Controls->Add(this->panel33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->label175);
			this->Controls->Add(this->label174);
			this->Controls->Add(this->label173);
			this->Controls->Add(this->label172);
			this->Controls->Add(this->label171);
			this->Controls->Add(this->label170);
			this->Controls->Add(this->label169);
			this->Controls->Add(this->label168);
			this->Controls->Add(this->label167);
			this->Controls->Add(this->label166);
			this->Controls->Add(this->label165);
			this->Controls->Add(this->label164);
			this->Controls->Add(this->label163);
			this->Controls->Add(this->label162);
			this->Controls->Add(this->label161);
			this->Controls->Add(this->label160);
			this->Controls->Add(this->label159);
			this->Controls->Add(this->label158);
			this->Controls->Add(this->label157);
			this->Controls->Add(this->label156);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			this->panel16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			this->panel18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel29->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			this->panel30->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			this->panel32->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		
		char* SystemStringToChar(String^ str)
		{
			int size = str->Length;
			char* CharArr = new char[size + 1];
			for (int i = 0; i < size; i++)
				CharArr[i] = str[i];
			CharArr[size] = '\0';
			return CharArr;
		}
		String^ ConvertMonthToChar(int m)
		{
			switch (m)
			{
			case 1:  return "January";
			case 2:  return "February";
			case 3:  return "March";
			case 4:  return "April";
			case 5:  return "May";
			case 6:  return "June";
			case 7:  return "July";
			case 8:  return "August";
			case 9:  return "September";
			case 10: return "October";
			case 11: return "November";
			case 12: return  "December";
			Default: return "\0";
			}
		}
		void HideAllPostPanels()
		{
			button32->Hide();  //Hiding SearchBar Button
			flowLayoutPanel1->Hide();
			panel3->Hide();   //Post with activity panel
			panel5->Hide();   //Post without activity panel
			panel7->Hide();   //Comments panel
			panel2->Hide();   //Post with activity panel
			panel12->Hide();  //Post without acitivity panel
			panel15->Hide();
			panel19->Hide();
			panel17->Hide();
			panel21->Hide();
			panel23->Hide();
			panel24->Hide();
			panel27->Hide();
			panel28->Hide();    //post without acitivity panel
			panel31->Hide();   //post without acitivity panel
		}
		void HideAllLikeBy()
		{
			panel33->Hide();
			pictureBox79->Hide();
			label189->Hide();
			pictureBox78->Hide();
			label188->Hide();
			pictureBox77->Hide();
			label187->Hide();
			pictureBox76->Hide();
			label186->Hide();
			pictureBox75->Hide();
			label183->Hide();
			pictureBox74->Hide();
			label182->Hide();
		}
		void HideAllFriends()
		{
			this->pictureBox2->Hide();
			this->pictureBox4->Hide();
			this->pictureBox5->Hide();
			this->pictureBox6->Hide();
			this->pictureBox23->Hide();
			this->pictureBox24->Hide();
			this->pictureBox25->Hide();
			this->pictureBox26->Hide();
			this->pictureBox27->Hide();
			this->pictureBox28->Hide();
			this->label5->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label39->Hide();
			this->label40->Hide();
			this->label41->Hide();
			this->label42->Hide();
			this->label43->Hide();
			this->label44->Hide();
		}
		void HideAllLikedPages()
		{
			pictureBox3->Hide();
			pictureBox7->Hide();
			pictureBox8->Hide();
			pictureBox9->Hide();
			pictureBox32->Hide();
			pictureBox31->Hide();
			pictureBox30->Hide();
			pictureBox29->Hide();
			pictureBox34->Hide();
			pictureBox33->Hide();
			label7->Hide();
			label11->Hide();
			label12->Hide();
			label13->Hide();
			label48->Hide();
			label47->Hide();
			label46->Hide();
			label45->Hide();
			label50->Hide();
			label49->Hide();
		}
		void HideAllComments()
		{
			this->panel7->Hide();
			this->panel9->Hide();
			this->panel10->Hide();
			this->panel11->Hide();
		}
		void OutputFriendsData(user**& Friends, int& TotalNoOfFriends)
		{
			HideAllFriends();
			char* TempBuffer = NULL;
			char* ID = NULL;
			String^ Temp = "\0";
			String^ FriendID = "\0";
			if (TotalNoOfFriends == 0)
			{
				label5->Text = "No Friends";
				label5->Show();
			}
			else
			{
				for (int i = 0; i < TotalNoOfFriends; i++)
				{
					TempBuffer = Friends[i]->getName();
					ID = Friends[i]->getID();
					FriendID = gcnew String(ID);
				    Temp = gcnew String(TempBuffer);
					if (i == 0)
					{
						label5->Text = Temp;
						label156->Text = FriendID;
						pictureBox2->Show();
						label5->Show();
					}
					else if (i == 1)
					{
						label8->Text = Temp;
						label157->Text = FriendID;
						pictureBox4->Show();
						label8->Show();
					}
					else if (i == 2)
					{
						label9->Text = Temp;
						label158->Text = FriendID;
						pictureBox5->Show();
						label9->Show();
					}
					else if (i == 3)
					{
						label10->Text = Temp;
						label159->Text = FriendID;
						pictureBox6->Show();
						label10->Show();
					}
					else if (i == 4)
					{
						label39->Text = Temp;
						label160->Text = FriendID;
						pictureBox23->Show();
						label39->Show();
					}
					else if (i == 5)
					{
						label40->Text = Temp;
						label161->Text = FriendID;
						pictureBox24->Show();
						label40->Show();
					}
					else if (i == 6)
					{
						label41->Text = Temp;
						label162->Text = FriendID;
						pictureBox25->Show();
						label41->Show();
					}
					else if (i == 7)
					{
						label42->Text = Temp;
						label163->Text = FriendID;
						pictureBox26->Show();
						label42->Show();
					}
					else if (i == 8)
					{
						label43->Text = Temp;
						label164->Text = FriendID;
						pictureBox27->Show();
						label43->Show();
					}
					else if (i == 9)
					{
						label44->Text = Temp;
						label165->Text = FriendID;
						pictureBox28->Show();
						label44->Show();
					}

					delete[] Temp;
					Temp = "\0";
				}
			}
		}
		void OutputLikedPagesData(page**& LikedPages, int& TotalNoOfLikedPages)
		{
			HideAllLikedPages();
			char* TempBuffer = NULL;
			char* ID = NULL;
			String^ Temp = "\0";
			String^ LikePageID = "\0";
			if (TotalNoOfLikedPages == 0)
			{
				label7->Text = "No Liked Page";
				label7->Show();
			}
			else
			{
				for (int i = 0; i < TotalNoOfLikedPages; i++)
				{
					TempBuffer = LikedPages[i]->getName();
					ID = LikedPages[i]->getID();
					Temp = gcnew String(TempBuffer);
					LikePageID = gcnew String(ID);
					if (i == 0)
					{
						label7->Text = Temp;
						label166->Text = LikePageID;
						pictureBox3->Show();
						label7->Show();
						label166->Text = LikePageID;
					}
					else if (i == 1)
					{
						label11->Text = Temp;
						label167->Text = LikePageID;
						pictureBox7->Show();
						label11->Show();
					}
					else if (i == 2)
					{
						label12->Text = Temp;
						label168->Text = LikePageID;
						pictureBox8->Show();
						label12->Show();
					}
					else if (i == 3)
					{
						label13->Text = Temp;
						label169->Text = LikePageID;
						pictureBox9->Show();
						label13->Show();
					}
					else if (i == 4)
					{
						label48->Text = Temp;
						label170->Text = LikePageID;
						pictureBox32->Show();
						label48->Show();
					}
					else if (i == 5)
					{
						label47->Text = Temp;
						label171->Text = LikePageID;
						pictureBox31->Show();
						label47->Show();
					}
					else if (i == 6)
					{
						label46->Text = Temp;
						label172->Text = LikePageID;
						pictureBox30->Show();
						label46->Show();
					}
					else if (i == 7)
					{
						label45->Text = Temp;
						label173->Text = LikePageID;
						pictureBox29->Show();
						label45->Show();
					}
					else if (i == 8)
					{
						label50->Text = Temp;
						label174->Text = LikePageID;
						pictureBox34->Show();
						label50->Show();
					}
					else if (i == 9)
					{
						label49->Text = Temp;
						label175->Text = LikePageID;
						pictureBox33->Show();
						label49->Show();
					}
					delete[] Temp;
					Temp = "\0";
				}
			}
		}
		void AddToLabel(String^& Temp, string TempBuffer, Label^ label)
		{
			Temp = gcnew String(TempBuffer.c_str());
			label->Text = Temp;     //Setting Text of Label
			delete[] Temp;
			Temp = "\0";
		}
		void AddTolabel(string TempBuffer, Label^ label)
		{
			String^ Temp = gcnew String(TempBuffer.c_str());
			label->Text = Temp;     //Setting Text of Label
			delete[] Temp;
			Temp = "\0";
		}
		void UpdatePosts(String^& Temp,  string& TempBuffer, char* name, int m, int d, int y, char* ActivityText, char* PostText,
			int NoOfLikes, int NoOfComments, Label^ Namelabel, Label^ Datelabel, Label^ Activitylabel, Label^ Postlabel, Label^ Likelabel,
			Label^ Commentslabel, Panel^ Panel, bool SetActivity, bool HomePage)
		{
			TempBuffer = "\0";
			char date[] = "1d. ago";
			char space[] = " ";
			TempBuffer = name;
			if (ActivityText!=NULL)
			{
				TempBuffer = TempBuffer + " " + ActivityText;
				AddToLabel(Temp, TempBuffer, Activitylabel);    //Set Activity Text
			}
			TempBuffer = name;
			AddToLabel(Temp, TempBuffer, Namelabel);    //Set Name
			if (!HomePage)
			{
				Datelabel->Text = ConvertMonthToChar(m) + " " + Convert::ToString(d) + "," + Convert::ToString(y); //Set Date
			}
			else
			{
				TempBuffer = date;
				AddToLabel(Temp, TempBuffer, Datelabel);
			}
			
			TempBuffer = PostText;
			AddToLabel(Temp, TempBuffer, Postlabel);        //Set Post Text
			Likelabel->Text = Convert::ToString(NoOfLikes);
			Commentslabel->Text = Convert::ToString(NoOfComments);
			//Panel->Show();
		}
		void UpdateComments(comments*& Comments, string& TempBuffer, String^ Temp, Label^ Name, Label^ Comment) 
		{
				TempBuffer = Comments->getCommentSharedBy();
				AddToLabel(Temp, TempBuffer, Name);
				TempBuffer = Comments->getCommentText();
				AddToLabel(Temp, TempBuffer, Comment);
		}
		void AddCommentsToPanel(post* Post) 
		{
			HideAllComments();
			int NoOfComments = 0;
			comments** Comments = NULL;
			Post->OutputPostComments(NoOfComments, Comments);
			char* TempBuffer = "\0";
			String^ Temp = "\0";
			for (int i = 0; i < NoOfComments; i++)
			{
				TempBuffer = Comments[0]->getCommentSharedBy();
				AddToLabel(Temp, TempBuffer, label30);
				TempBuffer = Comments[0]->getCommentText();
				AddToLabel(Temp, TempBuffer, label27);
				label32->Text = Convert::ToString(NoOfComments);
				panel8->Show();
				if (NoOfComments > 1)
				{
					if (i == 1)
					{
						TempBuffer = Comments[i]->getCommentSharedBy();
						AddToLabel(Temp, TempBuffer, label34);
						TempBuffer = Comments[i]->getCommentText();
						AddToLabel(Temp, TempBuffer, label33);
						panel9->Show();
					}
					else if (i == 2)
					{
						TempBuffer = Comments[i]->getCommentSharedBy();
						AddToLabel(Temp, TempBuffer, label36);
						TempBuffer = Comments[i]->getCommentText();
						AddToLabel(Temp, TempBuffer, label35);
						panel10->Show();
					}
					else if (i == 3)
					{
						TempBuffer = Comments[i]->getCommentSharedBy();
						AddToLabel(Temp, TempBuffer, label38);
						TempBuffer = Comments[i]->getCommentText();
						AddToLabel(Temp, TempBuffer, label37);
						panel11->Show();
					}
				}
			}

		}
		void OutputAllPosts(post**& Timeline,int NoOfPostInTimeline, bool HomePage)
		 {
			
			char** ActivityText = NULL;
			char** PostText = NULL;
			comments*** Comments = NULL;
			int* NoOfLikes = 0;
			int* NoOfComments = 0;
			string TempBuffer = "\0";
			char** SharedByName = NULL;
			String^ Temp;

			int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 =0;
			if(NoOfPostInTimeline)
			flowLayoutPanel1->Show();
			for (int i = 0; i < NoOfPostInTimeline; i++)
			{
				
				int d = 0, m = 0, y = 0;
				Timeline[i]->OutputPostData(SharedByName,ActivityText, PostText, NoOfLikes, NoOfComments, d, m, y, Comments, n1, n2, n3, n4, n5,n6);
				char* PostID = Timeline[i]->getID();
				if (i == 0)
				{
					if (ActivityText[i] != NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label1
							, this->label2, this->label14, this->label15, this->label16, this->label17, this->panel3, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label19, label20);
						}
						AddToLabel(Temp, PostID, label145);// Adding Hidden PostID
						this->panel3->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label29
							, this->label28, this->label14, this->label26, this->label25, this->label24, this->panel5, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label22, label21);
						}
						AddToLabel(Temp, PostID, label144); // Adding Hidden PostID
						this->panel3->Show();
						this->panel5->Show();
						
					}
				}
				else if (i == 1)
				{
					if (ActivityText[i]!=NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label67
							, this->label66, this->label65, this->label64, this->label63, this->label62, this->panel2, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label60, label59);
						}
						AddToLabel(Temp, PostID, label146); 
						this->button12->Show();
						this->textBox6->Show();
						this->pictureBox38->Show();
						this->panel14->Show();
						this->panel2->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label58
							, this->label57, this->label14, this->label56, this->label55, this->label54, this->panel12, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label52, label51);
						}
						AddToLabel(Temp, PostID, label147);
						this->button12->Hide();
						this->textBox6->Hide();
						this->pictureBox38->Hide();
						this->panel14->Hide();
						this->panel2->Show();
						this->panel12->Show();
						
					}
				}
				else if (i == 2)
				{
					if (ActivityText[i]!=NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label76
							, this->label75, this->label74, this->label73, this->label72, this->label71, this->panel15, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label69, label68);
						}
						AddToLabel(Temp, PostID, label148);
						this->panel15->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label93
							, this->label92, this->label74, this->label91, this->label90, this->label89, this->panel19, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label87, label86);
						}
						AddToLabel(Temp, PostID, label149);
						this->panel15->Show();
						this->panel19->Show();
						
					}
				}
				else if (i == 3)
				{
					if (ActivityText[i] != NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label85
							, this->label84, this->label83, this->label82, this->label81, this->label80, this->panel17, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label78, label77);
						}
						AddToLabel(Temp, PostID, label150);
						this->panel17->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label101
							, this->label100, this->label74, this->label99, this->label98, this->label97, this->panel21, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label95, label94);
						}
						AddToLabel(Temp, PostID, label151);
						this->panel17->Show();
						this->panel21->Show();

					}
				}
				else if (i == 4)
				{
					if (ActivityText[i] != NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label118
							, this->label117, this->label116, this->label115, this->label114, this->label113, this->panel23, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label111, label110);
						}
						AddToLabel(Temp, PostID, label152);
						this->button25->Show();
						this->label112->Show();
						this->button24->Show();
						this->textBox12->Show();
						this->pictureBox59->Show();
						this->panel26->Show();
						this->panel23->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label109
							, this->label108, this->label74, this->label107, this->label106, this->label105, this->panel24, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label103, label102);
						}
						AddToLabel(Temp, PostID, label153);
						this->button25->Hide();
						this->label112->Hide();
						this->button24->Hide();
						this->textBox12->Hide();
						this->pictureBox59->Hide();
						this->panel26->Hide();
						this->panel23->Show();
						this->panel24->Show();

					}
				}
				else if (i == 5)
				{
					if (ActivityText[i] != NULL)
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label135
							, this->label134, this->label133, this->label132, this->label131, this->label130, this->panel27, true, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label128, label127);
						}
						AddToLabel(Temp, PostID, label154);
						this->panel27->Show();
					}
					else
					{
						UpdatePosts(Temp, TempBuffer, SharedByName[i], m, d, y, ActivityText[i], PostText[i], NoOfLikes[i], NoOfComments[i], this->label126
							, this->label125, this->label74, this->label124, this->label123, this->label122, this->panel28, false, HomePage);
						if (NoOfComments[i])
						{
							UpdateComments(Comments[i][0], TempBuffer, Temp, label120, label119);
						}
						AddToLabel(Temp, PostID, label155);
						this->panel27->Show();
						this->panel28->Show();

					}
				}
			}

		}
		void OutputTimeline(user* User)
		{
			post** Timeline = User->getTimeline();
			int NoOfPostInTimeline = User->getNoOfPostsInTimeline();
			OutputAllPosts(Timeline,NoOfPostInTimeline,false);
		}
		void OutputPostTimeline(page* Page)
		{
			HideAllPostPanels();
			post** Timeline = Page->getTimeline();
			int NoOfPostInTimeline = Page->getNoOfPostsInTimeline();
			OutputAllPosts(Timeline, NoOfPostInTimeline, false);
		}
		void OutputHomePage(user** Friends, int TotalNoOfFriends,page** LikedPages,int TotalNoOfLikedPages)
		{
			HideAllComments();
			HideAllLikeBy();
			OutputFriendsData(Friends, TotalNoOfFriends);
			OutputLikedPagesData(LikedPages, TotalNoOfLikedPages);
			button34->Hide();   //Follow button
			button35->Hide();
			char* TempBuffer = CurrentUser->getName();
			AddTolabel(TempBuffer, this->label3);
			post** HomePosts = NULL;
			int NoOfPosts = 0;
			CurrentUser->OuputHomePagePosts(HomePosts,NoOfPosts);
			OutputAllPosts(HomePosts, NoOfPosts, true);
		}
		void ShowCommentPanel(Label^ IdLabel)
		{
			this->flowLayoutPanel1->Hide();
			char* PostID = SystemStringToChar(IdLabel->Text);
			post* Post = AppObj->SearchPost(PostID);
			AddCommentsToPanel(Post);
			this->panel7->Show();
			helper::DeleteCharArray(PostID);
		}
		void AddNewComment(Label^ PostIDLabel, TextBox^ textbox, Label^ TotalComments, Label^ SharedBy, Label^ CommText)
		{
			char* PostID = SystemStringToChar(PostIDLabel->Text);
			post* Post = AppObj->SearchPost(PostID);
			char* CommentText = SystemStringToChar(textbox->Text);
			AppObj->PostComment(Post, CommentText, CurrentUser);
			TotalComments->Text = Convert::ToString(Post->getPostTotalComments());
			char* TempBuffer = CurrentUser->getName();
			String^ Temp = "\0";
			AddToLabel(Temp, TempBuffer, SharedBy);
			CommText->Text = textbox->Text;
			helper::DeleteCharArray(PostID);
			helper::DeleteCharArray(CommentText);
		}
		void AddLike(Label^ ID, Label^ TotalLikesLabel)
		{
			char* PostID = SystemStringToChar(ID->Text);
			post* Post = AppObj->SearchPost(PostID);
			AppObj->LikePost(Post, CurrentUser);
			TotalLikesLabel->Text = Convert::ToString(Post->getPostTotalLikes());
			delete[] PostID;
		}
		void SearchAndShowFriendsTimeline(Label^ ID)
		{ 
			HideAllPostPanels();
			char* FriendID = SystemStringToChar(ID->Text);
			user* Friend = AppObj->SearchUser(FriendID);
			if (Friend != NULL)
			{
				string TempBuffer = Friend->getName();
				AddTolabel(TempBuffer, this->label3);
				OutputTimeline(Friend);
			}
			delete[] FriendID;
		}
		void SearchAndShowLikedPagesTimeline(Label^ ID)
		{
			HideAllPostPanels();
			char* LikedPageID = SystemStringToChar(ID->Text);
			page* LikedPage = AppObj->SearchPage(LikedPageID);
			if (LikedPage != NULL)
			{
				string Temp = LikedPage->getName();
				AddTolabel(Temp, this->label3);
				OutputPostTimeline(LikedPage);
			}
		}
		void SEARCH(String^ id)
		{
			char* ID = SystemStringToChar(id);
			char Hyphen[] = " -   ";
			char* Name = NULL;
			String^ SearchResult;
			bool found = false; 
			String^ FoundID = "\0";
			if (ID[0] == 'u')
			{
			    user* User = AppObj->SearchUser(ID);
				
				if (User)
				{
					AddTolabel(ID, this->label190);
					Name = User->getName();
					helper::Concate(ID, Hyphen);
					helper::Concate(ID, Name);
					found = true;
					FoundID = gcnew String(ID);
					this->button32->Text = FoundID;
					this->button32->Show();
					delete[] FoundID;
				}
			}
			else if (ID[0] == 'p')
			{
				page* Page = AppObj->SearchPage(ID);

				if (Page)
				{
					AddTolabel(ID, this->label190);
					Name = Page->getName();
					helper::Concate(ID, Hyphen);
					helper::Concate(ID, Name);
					found = true;
					FoundID = gcnew String(ID);
					this->button32->Text = FoundID;
					this->button32->Show();
					delete[] FoundID;
				}
			}
			if (!found)
			{
				this->button32->Text = "Not Found";
				this->button32->Show();
			}
			delete[] ID;
		}
		void ShowSearchedData(String^ id)
		{
			char* SearchedID = SystemStringToChar(id);
			if (SearchedID[0] == 'p')
			{
				HideAllPostPanels();
				this->button35->Show();
				page* Page = AppObj->SearchPage(SearchedID);
				string Temp = Page->getName();
				AddTolabel(Temp, this->label3);
				OutputPostTimeline(Page);
		    }
			else if (SearchedID[0] == 'u')
			{
				HideAllPostPanels();
				this->button34->Show();
				user* User = AppObj->SearchUser(SearchedID);
				char* TempBuffer = User->getName();
				AddTolabel(TempBuffer, this->label3);
				OutputTimeline(User);
			}
			delete [] SearchedID;
		}
		void ViewLikedBy(String^ PostID)
		{
			HideAllLikeBy();
			string TempBuffer = "\0";
			char* ID = SystemStringToChar(PostID);
			post* Post = AppObj->SearchPost(ID);
			int noOfLikes = Post->getPostTotalLikes();
			if (noOfLikes) {
				this->panel33->Show();
				id** Users = Post->getLikeBy();
				this->label185->Text = Convert::ToString(noOfLikes);
				for (int i = 0; i < noOfLikes; i++)
				{
					if (i == 0)
					{
						AddTolabel(Users[i]->getName(), this->label189);
						AddTolabel(Users[i]->getID(), this->label181);
						pictureBox79->Show();
						label189->Show();
					}
					else if (i == 1)
					{
						AddTolabel(Users[i]->getName(), this->label188);
						AddTolabel(Users[i]->getID(), this->label180);
						pictureBox78->Show();
						label188->Show();
					}
					else if (i == 2)
					{
						AddTolabel(Users[i]->getName(), this->label187);
						AddTolabel(Users[i]->getID(), this->label179);
						pictureBox77->Show();
						label187->Show();
					}
					else if (i == 3)
					{
						AddTolabel(Users[i]->getName(), this->label186);
						AddTolabel(Users[i]->getID(), this->label178);
						pictureBox76->Show();
						label186->Show();
					}
					else if (i == 4)
					{
						AddTolabel(Users[i]->getName(), this->label183);
						AddTolabel(Users[i]->getID(), this->label177);
						pictureBox75->Show();
						label183->Show();
					}
					else if (i == 5)
					{
						AddTolabel(Users[i]->getName(), this->label182);
						AddTolabel(Users[i]->getID(), this->label176);
						pictureBox74->Show();
						label182->Show();
					}
				}
			}
			delete[] ID;
		}
		void startProgram()
		{
			char* TempBuffer = CurrentUser->getName();
			AddTolabel(TempBuffer, this->label3);
			int TotalNoOfFriends = this->CurrentUser->getNoOfFriends();
			user** Friends = CurrentUser->getFriends();
			int TotalNoOfLikedPages = this->CurrentUser->getNoOfLikedPages();
			page** LikedPages = this->CurrentUser->getLikedPages();
			HideAllPostPanels();
			HideAllComments();
			HideAllLikeBy();
			OutputHomePage(Friends, TotalNoOfFriends, LikedPages, TotalNoOfLikedPages);
		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		startProgram();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//OutputHomePage();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label144, textBox3, label24, label22, label21);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label144, label25);
	//	button8->Enabled = false;
	}
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label144);
	}
	private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
		ViewLikedBy(this->label144->Text);
	}
	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label145);
	}
	private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel7->Hide();
		this->panel3->Show();
		this->flowLayoutPanel1->Show();
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		startProgram();
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
		SearchAndShowFriendsTimeline(label159);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label145, label16);
		//button5->Enabled = false;
	}
	private: System::Void label51_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label124_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label145, textBox2, label17, label19, label20);
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label53_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label147);
	}
	private: System::Void label61_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label146);
	}
	private: System::Void label70_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label148);
	}
	private: System::Void label88_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label149);
	}
	private: System::Void label79_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label150);
	}
	private: System::Void label96_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label151);
	}
	private: System::Void label112_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label152);
	}
	private: System::Void label104_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label153);
	}
	private: System::Void label154_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label154);
	}
	private: System::Void label121_Click(System::Object^ sender, System::EventArgs^ e) {
		ShowCommentPanel(this->label155);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label146, textBox6, label62, label60, label59);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label147, textBox5, label54, label52, label51);
	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label148, textBox7, label71, label69, label68);
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label149, textBox9, label89, label87, label86);
	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label150, textBox8, label80, label78, label77);
	}
	private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label151, textBox10, label97, label95, label94);
	}
	private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label152, textBox12, label113, label111, label110);
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label153, textBox11, label105, label103, label102);
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label154, textBox14, label130, label128, label127);
	}
	private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		AddNewComment(label155, textBox13, label122, label120, label119);
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label147, label55);
		//button11->Enabled = false;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label146, label63);
		//button13->Enabled = false;
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label148, label72);
		//button15->Enabled = false;
	}
	private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label149, label90);
		//button19->Enabled = false;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label150, label81);
		//button17->Enabled = false;
	}
	private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label151, label98);
		//button21->Enabled = false;
	}
	private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label154, label131);
		//button29->Enabled = false;
	}

	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label155, label123);
		//button27->Enabled = false;
	}
	private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label152, label114);
		//button25->Enabled = false;
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		AddLike(label153, label106);
		//button23->Enabled = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		HideAllPostPanels();
		HideAllComments();
		OutputTimeline(CurrentUser);
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label156);
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label157);
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label158);
}
private: System::Void label39_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label160);
}
private: System::Void label40_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label161);
}

private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label162);
}
private: System::Void label42_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label163);
}
private: System::Void label43_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label164);
}
private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowFriendsTimeline(label165);
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label166);
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label167);
}

private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label168);
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label169);
}
private: System::Void label48_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label170);
}
private: System::Void label47_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label171);
}
private: System::Void label46_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label172);
}
private: System::Void label45_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label173);
}
private: System::Void label50_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label174);
}
private: System::Void label49_Click(System::Object^ sender, System::EventArgs^ e) {
	SearchAndShowLikedPagesTimeline(label175);
}
private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ SearchID = textBox1->Text;
	SEARCH(SearchID);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//this->button32->Hide();
}
private: System::Void button32_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->button32->Hide();
	String^ SearchID = textBox1->Text;
	ShowSearchedData(SearchID);
}
private: System::Void pictureBox80_Click(System::Object^ sender, System::EventArgs^ e) {
	this->panel33->Hide();
}
private: System::Void label55_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label147->Text);
}
private: System::Void label90_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label149->Text);
}
private: System::Void label98_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label151->Text);
}
private: System::Void label106_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label153->Text);
}
private: System::Void label123_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label155->Text);
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label145->Text);
}
private: System::Void label63_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label146->Text);
}
private: System::Void label72_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label148->Text);
}
private: System::Void label81_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label150->Text);
}
private: System::Void label114_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label152->Text);
}

private: System::Void label131_Click(System::Object^ sender, System::EventArgs^ e) {
	ViewLikedBy(this->label154->Text);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	char* FriendID = SystemStringToChar(this->label190->Text);
	user* Friend = AppObj->SearchUser(FriendID);
	if (Friend)
		if (!CurrentUser->checkFriends(Friend))
		CurrentUser->SetFriend(Friend);
	delete[] FriendID;
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	char* pageID = SystemStringToChar(this->label190->Text);
	page* LikePage = AppObj->SearchPage(pageID);
	if (LikePage)
		if(!CurrentUser->checkLikePages(LikePage))
		CurrentUser->SetLikedPages(LikePage);
	delete[]pageID;
}
};
}
