//
// Created by b.karjoo on 6/23/2017.
//

#ifndef SIMPLEBRIE_IMESSAGERECEIVER_H
#define SIMPLEBRIE_IMESSAGERECEIVER_H

namespace brie {
    class cap_message;

    class IMessageReceiver
    {

    public:
        virtual void on_packet_header(const std::string&) = 0;
        virtual void on_message(const cap_message&) = 0;
        virtual bool has_instrument(const std::string&) = 0;
    };
}

#endif //SIMPLEBRIE_IMESSAGERECEIVER_H
