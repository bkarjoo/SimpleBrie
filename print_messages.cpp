//
// Created by b.karjoo on 6/23/2017.
//

#include "print_messages.h"
#include "cap_message.h"
#include "SQLite.h"

using namespace std;

void brie::print_messages::on_packet_header(const std::string &string) {
    cout << string << endl;
}

void brie::print_messages::on_message(const brie::cap_message &message) {
    cout << message.to_string() << endl;
}

bool brie::print_messages::has_instrument(const std::string &string) {
    return string == "AAPL";
}
