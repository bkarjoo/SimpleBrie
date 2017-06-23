//
// Created by b.karjoo on 6/23/2017.
//

#ifndef SIMPLEBRIE_PRINT_MESSAGES_H
#define SIMPLEBRIE_PRINT_MESSAGES_H

#include "stdafx.h"
#include "IMessageReceiver.h"

namespace brie {
    class print_messages : public IMessageReceiver {
    public:
        void on_packet_header(const std::string &string) override;

        void on_message(const cap_message &message) override;

        bool has_instrument(const std::string &string) override;
    };
}

#endif //SIMPLEBRIE_PRINT_MESSAGES_H
