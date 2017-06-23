#include <iostream>
#include "brie_date_time.h"


#include "print_messages.h"
#include "cap_file_reader.h"

using namespace std;
using namespace brie;

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto pm = make_unique<print_messages>();

    auto& cfr = cap_file_reader::get_instance();
    cfr.setImr(move(pm));

    vector<string> v = {"f:\\2013-02-04 Daily.CAP"};
    cfr.run(v);

    return 0;
}
