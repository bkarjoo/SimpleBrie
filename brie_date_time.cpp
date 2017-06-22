//
// Created by b.karjoo on 6/21/2017.
//

#include "brie_date_time.h"
using namespace brie;

std::string brie_date_time::get_date_string(boost::gregorian::date date, bool includeSharpSigns) {
    std::string s;
    if (includeSharpSigns) s += '#';
    s += std::to_string(date.year());
    s += '-';
    if (date.month() < 10) s += '0';
    s += std::to_string(date.month());
    s += '-';
    if (date.day() < 10) s += '0';
    s += std::to_string(date.day());
    if (includeSharpSigns) s += '#';
    return s;
}


boost::gregorian::date brie_date_time::get_date(std::string brieDate) {
    using namespace std;
    typedef boost::gregorian::date bdate ;
    int i = 0;
    char c = brieDate[i++];
    string year,month,day;
    bool monthSet = false, daySet = false;
    if (c != '#') throw new std::invalid_argument("launch rule format error");
    while (i<brieDate.size()){
        c=brieDate[i++];
        if (c == '-') if (month.size() == 1) monthSet = true;
        if (c == '#') if (day.size() == 1) daySet = true;
        if (year.size() < 4)
            year += c;
        else if(month.size() < 2 && !monthSet && c != '-') {
            month += c;
        } else if(day.size() < 2 && !daySet && c != '-') {
            day += c;
        }
    }
    try {
        bdate dd(
                (unsigned short)stoi(year),
                (unsigned short)stoi(month),
                (unsigned short)stoi(day));
        return dd;
    } catch (...) {
        return {};
    }
}

int brie_date_time::get_date_int(boost::gregorian::date date) {
    return date.julian_day();
}

int brie_date_time::get_date_int(std::string brieDate) {
    auto date = get_date(brieDate);

    // TODO : what if it's null?
    return date.julian_day();
}

std::string brie_date_time::get_date_string(boost::gregorian::date date) {
    std::string s;
    s += '#';
    s += std::to_string(date.year());
    s += '-';
    if (date.month() < 10) s += '0';
    s += std::to_string(date.month());
    s += '-';
    if (date.day() < 10) s += '0';
    s += std::to_string(date.day());
    s += '#';
}

