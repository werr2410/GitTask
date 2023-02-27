#pragma once
#include <string>

namespace Git {
	using std::string;
//	��������(get, set)
//	�����(get, set)
//	��� �������(get, set)
//	������������ ��������()

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

