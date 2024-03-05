// Program kelulusan
// Buatlah program dimana pengguna memasukkan nilai mtk dan bahasa
// Jika nilai rerata lebih dari 60 atau mtk lebih dari 70 maka dinyatakan lulus
// jika nilai Fisika Lebih dari sama dengan 90 maka dinyatakan lulusan terbaik
// selain itu tidak lulus

#include <iostream>
using namespace std;

int main()
{
	int NilaiMTK, NilaiBahasa, NilFis;
	string status;
	float Rerata;

	cout << "Nilai Matematika" << endl;
	cin >> NilaiMTK;
	cout << "Nilai Bahasa" << endl;
	cin >> NilaiBahasa;
	cout << "Nilai Fisika" << endl;
	cin >> NilFis;

	Rerata = (NilaiMTK + NilaiBahasa + NilFis) / 3;

	if (NilaiMTK > 70 || Rerata > 60)
	{
		status = "Lulus";
		if (NilFis >= 90)
			status = "Lulusan Terbaik";
	}
	else
	{
		status = "Tidak Lulus";
	}
	cout << "Nilai Matematika: " << NilaiMTK << endl;
	cout << "Nilai Bahasa" << NilaiBahasa << endl;
	cout << "Nilai Fisika" << NilFis << endl;
	cout << "Status kelulusan : " << status;
}
