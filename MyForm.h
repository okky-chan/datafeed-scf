#pragma once
#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

namespace signformcpp {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(417, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(771, 786);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel5->Location = System::Drawing::Point(0, 611);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(771, 175);
			this->panel5->TabIndex = 8;
			this->panel5->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(46, 69);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(720, 76);
			this->label10->TabIndex = 9;
			this->label10->Text = resources->GetString(L"label10.Text");
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 20, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(134, 31);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(162, 36);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Market Info";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label7->ForeColor = System::Drawing::Color::Crimson;
			this->label7->Location = System::Drawing::Point(87, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 28);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Plus";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 27, System::Drawing::FontStyle::Bold));
			this->label8->ForeColor = System::Drawing::Color::Aqua;
			this->label8->Location = System::Drawing::Point(44, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 48);
			this->label8->TabIndex = 6;
			this->label8->Text = L"IQ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(255, 482);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(236, 42);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 10.25F, System::Drawing::FontStyle::Bold));
			this->checkBox1->Location = System::Drawing::Point(255, 428);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(241, 23);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I agree to the terms and conditions";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::SlateGray;
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(107, 349);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(565, 61);
			this->panel4->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::SlateGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(22, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(527, 26);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SlateGray;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(107, 282);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(565, 61);
			this->panel3->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::SlateGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Small Semibol", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(22, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(527, 26);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 17, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(101, 221);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(649, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Sign in to your account so that we can provide the data stock";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 37, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(95, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 67);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sign In";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->richTextBox1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(417, 786);
			this->panel2->TabIndex = 1;
			this->panel2->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 17.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(97, 657);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(236, 42);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Run";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Brush Script MT", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Location = System::Drawing::Point(212, 298);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 28);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Plus";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(178, 298);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 36);
			this->label5->TabIndex = 4;
			this->label5->Text = L"IQ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display Semib", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(132, 262);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 72);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Market Info\r\n by";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(88, 145);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(245, 93);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::othersclick);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(40, 368);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(355, 265);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1188, 786);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login | Market Info";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Username") {
		textBox1->Text = "";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password") {
		textBox2->Text = "";
	}
}
private: System::Void othersclick(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		button2->Enabled = true;
	}
	else {
		button2->Enabled = false;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
	}
	System::Diagnostics::Process::Start("https://web.whatsapp.com/send?phone=6283871981030&");
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//TODO in client-side perharps?
	string ipAddress = "202.72.211.179";
	int port = 8888;

	WSAData data;
	WORD ver = MAKEWORD(2, 2);
	int wsResult = WSAStartup(ver, &data);
	if (wsResult != 0) {
		cerr << "Can't start Winsock, Error #" << wsResult << endl;
		return;
	}

	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	if (sock == INVALID_SOCKET) {
		cerr << "Can't create a Socket, Error #" << WSAGetLastError() << endl;
		WSACleanup();
		return;
	}

	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(port);
	inet_pton(AF_INET, ipAddress.c_str(), &hint.sin_addr);

	int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
	if (connResult == SOCKET_ERROR) {
		cerr << "Can't connect to Server, Error #" << WSAGetLastError() << endl;
		closesocket(sock);
		WSACleanup();
		return;
	}

	string command = "Account IQP";
	command.append("\r\n");
	wsResult = send(sock, command.c_str(), (u_int)command.length(), 0);
	//cout << "Output result : " << wsResult;


	/*char buf[4096];
	string userInput;
	do {
		cout << "> ";
		getline(cin, userInput);
		if (userInput.size() > 0) {
			int sendResult = send(sock, userInput.c_str(), userInput.size() + 1, 0);
			if (sendResult != SOCKET_ERROR) {
				ZeroMemory(buf, 4096);
				int bytesReceived = recv(sock, buf, 4096, 0);
				if (bytesReceived > 0) {
					cout << "Server> " << string(buf, 0, bytesReceived) << endl;
				}
			}
		}
	} while (userInput.size() > 0);
	closesocket(sock);
	WSACleanup(); */
	while (1) {
		char buf[4096];
		fgets(buf, sizeof(buf), stdin);
		int a = recv(sock, buf, sizeof(buf), 0);

		if (a == -1) {
			OutputDebugStringA("Error");
			break;
		}
		else if (a == 0) {
			OutputDebugStringA("Error");
			break;
		}
		else {
			String^ result = gcnew String(buf);
			OutputDebugStringA(buf);
			richTextBox1->Text += result;
			richTextBox1->SelectionStart = richTextBox1->Text->Length;
			richTextBox1->ScrollToCaret();
		}
	}
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
