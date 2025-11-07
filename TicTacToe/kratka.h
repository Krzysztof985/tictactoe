#pragma once
namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
 

	/// <summary>
	/// Podsumowanie informacji o kratka
	/// </summary>
	public ref class kratka : public System::Windows::Forms::Form
	{
		bool tura = true; // Zmienna informujaca czyja jest tura
		bool zwyciestwo = false; // Zmienna informuj¹ca czy ktoœ wygra³
		int licznikX = 0; // Licznik zwyciêstw krzy¿yków
		int licznikO = 0; // Licznik zwyciêstw kó³ek
		String^ wygrany; // Zwyciêzca gry (nazwa)
		bool zapelniona = false; // Zmienna informujaca czy plansza jest zapelniona
	private: System::Windows::Forms::Button^ button3;
		   bool czyPostawiono = false; // Zmienna informuj¹ca czy komputer wykona³ ruch
	public:
		kratka(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~kratka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Wygrane2;
	protected:
	private: System::Windows::Forms::Label^ licznik2;
	private: System::Windows::Forms::Label^ Wygrane1;
	private: System::Windows::Forms::Label^ licznik1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ A1;
	private: System::Windows::Forms::PictureBox^ B1;
	private: System::Windows::Forms::PictureBox^ C1;
	private: System::Windows::Forms::PictureBox^ B2;




	private: System::Windows::Forms::PictureBox^ A2;
	private: System::Windows::Forms::PictureBox^ C2;
	private: System::Windows::Forms::PictureBox^ B3;
	private: System::Windows::Forms::PictureBox^ C3;




	private: System::Windows::Forms::PictureBox^ A3;

	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(kratka::typeid));
			this->Wygrane2 = (gcnew System::Windows::Forms::Label());
			this->licznik2 = (gcnew System::Windows::Forms::Label());
			this->Wygrane1 = (gcnew System::Windows::Forms::Label());
			this->licznik1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->A1 = (gcnew System::Windows::Forms::PictureBox());
			this->B1 = (gcnew System::Windows::Forms::PictureBox());
			this->C1 = (gcnew System::Windows::Forms::PictureBox());
			this->B2 = (gcnew System::Windows::Forms::PictureBox());
			this->A2 = (gcnew System::Windows::Forms::PictureBox());
			this->C2 = (gcnew System::Windows::Forms::PictureBox());
			this->B3 = (gcnew System::Windows::Forms::PictureBox());
			this->C3 = (gcnew System::Windows::Forms::PictureBox());
			this->A3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->BeginInit();
			this->SuspendLayout();
			// 
			// Wygrane2
			// 
			this->Wygrane2->AutoSize = true;
			this->Wygrane2->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wygrane2->Location = System::Drawing::Point(330, 404);
			this->Wygrane2->Name = L"Wygrane2";
			this->Wygrane2->Size = System::Drawing::Size(144, 20);
			this->Wygrane2->TabIndex = 0;
			this->Wygrane2->Text = L"Wygrane krzy¿yków";
			// 
			// licznik2
			// 
			this->licznik2->AutoSize = true;
			this->licznik2->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->licznik2->Location = System::Drawing::Point(389, 428);
			this->licznik2->Name = L"licznik2";
			this->licznik2->Size = System::Drawing::Size(20, 20);
			this->licznik2->TabIndex = 1;
			this->licznik2->Text = L"0";
			// 
			// Wygrane1
			// 
			this->Wygrane1->AutoSize = true;
			this->Wygrane1->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Wygrane1->Location = System::Drawing::Point(12, 404);
			this->Wygrane1->Name = L"Wygrane1";
			this->Wygrane1->Size = System::Drawing::Size(105, 20);
			this->Wygrane1->TabIndex = 2;
			this->Wygrane1->Text = L"Wygrane kó³ek";
			// 
			// licznik1
			// 
			this->licznik1->AutoSize = true;
			this->licznik1->Font = (gcnew System::Drawing::Font(L"MV Boli", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->licznik1->Location = System::Drawing::Point(42, 428);
			this->licznik1->Name = L"licznik1";
			this->licznik1->Size = System::Drawing::Size(20, 20);
			this->licznik1->TabIndex = 3;
			this->licznik1->Text = L"0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(386, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Reset";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &kratka::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(196, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Nowa gra";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &kratka::button2_Click);
			// 
			// A1
			// 
			this->A1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1.Image")));
			this->A1->Location = System::Drawing::Point(56, 41);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(105, 110);
			this->A1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A1->TabIndex = 6;
			this->A1->TabStop = false;
			this->A1->Tag = L"\?";
			this->A1->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// B1
			// 
			this->B1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1.Image")));
			this->B1->Location = System::Drawing::Point(184, 41);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(105, 110);
			this->B1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B1->TabIndex = 7;
			this->B1->TabStop = false;
			this->B1->Tag = L"\?";
			this->B1->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// C1
			// 
			this->C1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1.Image")));
			this->C1->Location = System::Drawing::Point(317, 41);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(105, 110);
			this->C1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C1->TabIndex = 8;
			this->C1->TabStop = false;
			this->C1->Tag = L"\?";
			this->C1->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// B2
			// 
			this->B2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2.Image")));
			this->B2->Location = System::Drawing::Point(184, 167);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(105, 110);
			this->B2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B2->TabIndex = 9;
			this->B2->TabStop = false;
			this->B2->Tag = L"\?";
			this->B2->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// A2
			// 
			this->A2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2.Image")));
			this->A2->Location = System::Drawing::Point(56, 167);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(105, 110);
			this->A2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A2->TabIndex = 10;
			this->A2->TabStop = false;
			this->A2->Tag = L"\?";
			this->A2->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// C2
			// 
			this->C2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2.Image")));
			this->C2->Location = System::Drawing::Point(317, 167);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(105, 110);
			this->C2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C2->TabIndex = 11;
			this->C2->TabStop = false;
			this->C2->Tag = L"\?";
			this->C2->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// B3
			// 
			this->B3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3.Image")));
			this->B3->Location = System::Drawing::Point(184, 295);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(105, 110);
			this->B3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->B3->TabIndex = 12;
			this->B3->TabStop = false;
			this->B3->Tag = L"\?";
			this->B3->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// C3
			// 
			this->C3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3.Image")));
			this->C3->Location = System::Drawing::Point(317, 295);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(105, 110);
			this->C3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->C3->TabIndex = 13;
			this->C3->TabStop = false;
			this->C3->Tag = L"\?";
			this->C3->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// A3
			// 
			this->A3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3.Image")));
			this->A3->Location = System::Drawing::Point(56, 295);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(105, 110);
			this->A3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->A3->TabIndex = 14;
			this->A3->TabStop = false;
			this->A3->Tag = L"\?";
			this->A3->Click += gcnew System::EventHandler(this, &kratka::ruch);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"O.png");
			this->imageList1->Images->SetKeyName(1, L"pytajnik.jpg");
			this->imageList1->Images->SetKeyName(2, L"X.jpg");
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Ruch komputera";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &kratka::button3_Click);
			// 
			// kratka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(473, 444);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->licznik1);
			this->Controls->Add(this->Wygrane1);
			this->Controls->Add(this->licznik2);
			this->Controls->Add(this->Wygrane2);
			this->Name = L"kratka";
			this->Tag = L"\?";
			this->Text = L"kratka";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Zastosowanie: sprawdzenie, czy plansza jest zape³niona
private: Void zapelnienie() {
	zapelniona = true;
	array<PictureBox^>^ tab;
	tab = gcnew array<PictureBox^>(9);
	tab[0] = A1;
	tab[1] = B1;
	tab[2] = C1;
	tab[3] = A2;
	tab[4] = B2;
	tab[5] = C2;
	tab[6] = A3;
	tab[7] = B3;
	tab[8] = C3;
	for (int i = 0; i < 9; ++i)
		if (tab[i]->Tag == "?") zapelniona = false;
	if (zapelniona && !zwyciestwo) 
		MessageBox::Show("Remis", "Kó³ko i krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

// Zastosowanie: umieszczenie kó³ka w podanym miejscu
// Parametry: obrazek - uchwyt do zdjecia, ktore ma byc podmienione
private: Void umiesc(PictureBox^ obrazek, String^ znak) {
	if(znak == "O")
		obrazek->Image = imageList1->Images[0];
	else
		obrazek->Image = imageList1->Images[2];
	obrazek->Tag = znak;
	obrazek->Enabled = false;
	czyPostawiono = true;
}

// Zastosowanie: wybranie jak najbardziej op³acalnego pola przez komputer
// Parametry: symbol - uchwyt do symbolu, pod k¹tem którego sprawdzana jest plansza
private: Void sprawdz(String^ symbol, String^ znak) {
	array<PictureBox^>^ tab;
	tab = gcnew array<PictureBox^>(9);
	tab[0] = A1;
	tab[1] = B1;
	tab[2] = C1;
	tab[3] = A2;
	tab[4] = B2;
	tab[5] = C2;
	tab[6] = A3;
	tab[7] = B3;
	tab[8] = C3;
	for (int i = 0; i < 9; ++i) {
		if (tab[i]->Tag != "?")
			continue;
		// Skrypty dla A1, A2, A3
		if (i == 0 || i == 3 || i == 6) {
			if (tab[i + 1]->Tag == symbol && tab[i + 2]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			int j = i + 3 == 9 ? j = 0 : j = i + 3; // Pierwszy indeks pomocniczy tablicy
			int k = i + 6; // Drugi indeks pomocniczy tablicy
			if (k == 9)
				k = 0;
			else if (k == 12)
				k = 3;
			if (tab[j]->Tag == symbol && tab[k]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			if (i == 0) {
				if (tab[4]->Tag == symbol && tab[8]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
			}
			if (i == 6) {
				if (tab[4]->Tag == symbol && tab[2]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
			}
		} // Koniec skryptów dla A1, A2, A3
		// Skrypty dla B1, B2, B3
		if (i == 1 || i == 4 || i == 7) {
			if (tab[i - 1]->Tag == symbol && tab[i + 1]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			int j = i + 3 == 10 ? j = 1 : j = i + 3; // Pierwszy indeks pomocniczy tablicy
			int k = i + 6; // Drugi indeks pomocniczy tablicy
			if (k == 10)
				k = 1;
			else if (k == 13)
				k = 4;
			if (tab[j]->Tag == symbol && tab[k]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			if (i == 4) {
				if (tab[0]->Tag == symbol && tab[8]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
				if (tab[6]->Tag == symbol && tab[2]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
			}
		} // Koniec skryptów dla B1, B2, B3
		// Skrypty dla C1, C2, C3
		if (i == 2 || i == 5 || i == 8) {
			if (tab[i - 1]->Tag == symbol && tab[i - 2]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			int j = i + 3 == 11 ? j = 2 : j = i + 3; // Pierwszy indeks pomocniczy tablicy
			int k = i + 6; // Drugi indeks pomocniczy tablicy
			if (k == 11)
				k = 2;
			else if (k == 14)
				k = 5;
			if (tab[j]->Tag == symbol && tab[k]->Tag == symbol) {
				umiesc(tab[i], znak);
				return;
			}
			if (i == 2) {
				if (tab[6]->Tag == symbol && tab[4]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
			}
			if (i == 8) {
				if (tab[4]->Tag == symbol && tab[0]->Tag == symbol) {
					umiesc(tab[i], znak);
					return;
				}
			}
		}
	} // Koniec for
}

// Zastosowanie: wykonanie ruchu przez komputer
private: Void komputer(String^ znak) {
	if (B2->Tag == "?")
		umiesc(B2, znak);
	String^ symbol = znak;
	sprawdz(symbol, znak);
	if (czyPostawiono) return;
	symbol = symbol == "X" ? "O" : "X";
	sprawdz(symbol, znak);
	if (czyPostawiono) return;
	array<PictureBox^>^ tab;
	tab = gcnew array<PictureBox^>(9);
	tab[0] = A1;
	tab[1] = B1;
	tab[2] = C1;
	tab[3] = A2;
	tab[4] = B2;
	tab[5] = C2;
	tab[6] = A3;
	tab[7] = B3;
	tab[8] = C3;
	Random^ losuj = gcnew Random();
	int licznik = 0; // Licznik wykonañ pêtli
	while (1) {
		licznik++;
		if (licznik > 10) {
			awaryjna(znak);
			return;
		}
		int kwadracik; // Kwadracik wybrany przez komputer
		kwadracik = losuj->Next(0, 8);
		if (tab[kwadracik]->Tag != "?")
			continue;
		umiesc(tab[kwadracik], znak);
		return;
	}
}

// Zastosowanie: Umieszczenie znaczka w razie, gdyby popsu³a siê pêtla
// Parametry: znak - znak do umieszczenia (kó³ko lub krzy¿yk)
private: Void awaryjna(String^ znak) {
	array<PictureBox^>^ tab;
	tab = gcnew array<PictureBox^>(9);
	tab[0] = A1;
	tab[1] = B1;
	tab[2] = C1;
	tab[3] = A2;
	tab[4] = B2;
	tab[5] = C2;
	tab[6] = A3;
	tab[7] = B3;
	tab[8] = C3;
	for (int i = 0; i < 9; ++i) {
		if (tab[i]->Tag == "?")
			umiesc(tab[i], znak);
	}
}

private: System::Void ruch(System::Object^ sender, System::EventArgs^ e) {
	PictureBox^ obrazek = (PictureBox^)sender;
	if (tura) {
		obrazek->Image = imageList1->Images[2];
		obrazek->Tag = "X";
		wygrana('X');
	}
	else {
		obrazek->Image = imageList1->Images[0];
		obrazek->Tag = "O";
		wygrana('O');
	}
	obrazek->Enabled = false;
	tura = !tura;
	zapelnienie();
}
	
	private: Void wygrana(char symbol) {
		// Sprawdzenie w poziomie
		if ((A1->Tag == B1->Tag) && (B1->Tag == C1->Tag) && (A1->Tag != "?"))
			zwyciestwo = true;
		if ((A2->Tag == B2->Tag) && (B2->Tag == C2->Tag) && (A2->Tag != "?"))
			zwyciestwo = true;
		if ((A3->Tag == B3->Tag) && (B3->Tag == C3->Tag) && (A3->Tag != "?"))
			zwyciestwo = true;
		// Sprawdzenie w pionie
		if ((A1->Tag == A2->Tag) && (A2->Tag == A3->Tag) && (A1->Tag != "?"))
			zwyciestwo = true;
		if ((B1->Tag == B2->Tag) && (B2->Tag == B3->Tag) && (B2->Tag != "?"))
			zwyciestwo = true;
		if ((C1->Tag == C2->Tag) && (C2->Tag == C3->Tag) && (C3->Tag != "?"))
			zwyciestwo = true;
		// Sprawdzenie przekatnych
		if ((A1->Tag == B2->Tag) && (B2->Tag == C3->Tag) && (C3->Tag != "?"))
			zwyciestwo = true;
		if ((C1->Tag == B2->Tag) && (B2->Tag == A3->Tag) && (A3->Tag != "?"))
			zwyciestwo = true;
		// Wyœwietlenie odpowiedniej informacji
		if (zwyciestwo) {
			for each (Control ^ element in this->Controls) {
				if(element->GetType() == PictureBox::typeid)
				element->Enabled = false;
			}
			if (symbol == 'O') {
				licznikO++;
				licznik1->Text = Convert::ToString(licznikO);
				wygrany = "gracza kó³ek";
			}
			else{
				licznikX++;
				licznik2->Text = Convert::ToString(licznikX);
				wygrany = "gracza krzy¿yków";
			}
			MessageBox::Show("Wygrana " + wygrany, "Kó³ko i krzy¿yk", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: Void wyczysc() {
	// Obs³uga wyj¹tków
	for each (Control ^ element in this->Controls) {
		try {
			PictureBox^ obrazek = (PictureBox^)element;
			obrazek->Enabled = true;
			obrazek->Tag = "?";
			obrazek->Image = imageList1->Images[1];
		}
		catch (...) {

		}
		zwyciestwo = false;
		zapelniona = false;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	wyczysc();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	wyczysc();
	licznikO = 0;
	licznikX = 0;
	licznik1->Text = "0";
	licznik2->Text = "0";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!zwyciestwo && !zapelniona) {
		czyPostawiono = false;
		String^ znak;
		char symbol;
		if (tura) {
			symbol = 'X';
			znak = "X";
		}
		else {
			symbol = 'O';
			znak = "O";
		}
		komputer(znak);
		wygrana(symbol);
		zapelnienie();
		tura = !tura;
	}
}
};
}
