#include "Beaker.h"
#include "Pirozhnoe.h"
#include "Tort.h"
#include "Karavay.h"
#include "Chiabatta.h"
#include "Baget.h"
#include "Hleb.h"

#include <fstream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	Beaker beaker;
	while (true) {
		cout << "\n1. Создать\n2. Считать из файла\n3. Вывести\n4. Вывести в файл\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "1. Пирожное\n2. Торт\n3. Каравай\n4. Чиабатта\n5. Багет\n6. Хлеб\n";
			cin >> c;
			switch (c) {
			case 1:
				beaker.beak(new Pirozhnoe);
				break;
			case 2:
				beaker.beak(new Tort);
				break;
			case 3:
				beaker.beak(new Karavay);
				break;
			case 4:
				beaker.beak(new Chiabatta);
				break;
			case 5:
				beaker.beak(new Baget);
				break;
			case 6:
				beaker.beak(new Hleb);
				break;
			}
		}
		else if (c == 2) {
			string ss;
			cout << "Название файла: "; cin >> ss;
			ifstream in(ss);
			in >> ss >> ss;
			if (ss == "Pirozhnoe") {
				beaker.beak(new Pirozhnoe);
			}
			else if (ss == "Tort") {
				beaker.beak(new Tort);
			}
			else if (ss == "Karavay") {
				beaker.beak(new Karavay);
			}
			else if (ss == "Chiabatta") {
				beaker.beak(new Chiabatta);
			}
			else if (ss == "Baget") {
				beaker.beak(new Baget);
			}
			else if (ss == "Hleb") {
				beaker.beak(new Hleb);
			}
		}
		else if (c == 3) {
			cout << beaker;
		}
		else if (c == 4) {
			string ss;
			cout << "Название файла: "; cin >> ss;
			ofstream out(ss);
			out << beaker;
		}
	}
}