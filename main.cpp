#include <iostream>
#include "brie_date_time.h"
#include "tick_filename_constructor.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    // find a file for a particular day
    // file finder - returns the path to a file
    brie::tick_filename_constructor tff;
    string date = "#2015-03-11#";
    auto a = tff.construct_file_name(date);
    cout << tff.construct_file_name(date) << endl;
    return 0;
}
