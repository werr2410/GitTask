#pragma once
#include <string>

namespace Git {
	using std::string;
//	название(get, set)
//	автор(get, set)
//	год издания(get, set)
//	сформировать описание()

	class Publication {
		string title;
		string manufactur;
		int year;

	public:
		Publication(string title, string manufactur, int year);
		Publication();

		void setTitle(string title);
		void setManufactur(string manufactur);
		int setYear(int year);

		string getTitle() const;
		string getManufactur() const;
		string getYear() const;

		string toString() const;
	};
}

