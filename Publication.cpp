#include "Publication.h"

Git::Publication::Publication(string title, string manufactur, int year)
{
    setTitle(title);
    setManufactur(manufactur);
    setYear(year);
}

Git::Publication::Publication()
    : Publication("", "", 1)
{
}

void Git::Publication::setTitle(string title)
{
    this->title = title;
}

void Git::Publication::setManufactur(string manufactur)
{
    this->manufactur = manufactur;
}

int Git::Publication::setYear(int year)
{
    this->year = year;
}

std::string Git::Publication::getTitle() const
{
    return title;
}

std::string Git::Publication::getManufactur() const
{
    return manufactur;
}

int Git::Publication::getYear() const
{
    return year;
}

std::string Git::Publication::toString() const
{
    return title + " " + manufactur + " " + std::to_string(year);
}
