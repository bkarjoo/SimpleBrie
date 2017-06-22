//
// Created by b.karjoo on 6/21/2017.
//

#include "tick_filename_constructor.h"

using namespace std;
using namespace brie;

std::string tick_filename_constructor::construct_file_name(boost::gregorian::date date) {
    string dateStr = brie_date_time::get_date_string(date, false);
    if (dateStr == "") return "";
    string fileName;
    fileName += dateStr;
    fileName += ' ';
    fileName += "Daily.CAP";
    return fileName;
}

std::string tick_filename_constructor::construct_file_name(std::string dateStr) {
    boost::gregorian::date date = brie_date_time::get_date(dateStr);
    return construct_file_name(date);
}
