//
// Created by b.karjoo on 6/23/2017.
//

#ifndef SIMPLEBRIE_CAP_FILE_READER_H
#define SIMPLEBRIE_CAP_FILE_READER_H

#include "stdafx.h"
#include "cap_msg_field.h"

namespace brie {
    class IMessageReceiver;

    enum class capfile_read_mode {
        PACKET_HEADER,
        MSG_HEADER,
        FIELD,
        IGNORE_MSG,
        IGNORE_PACKET
    };

    class cap_file_reader {
    public:
        cap_file_reader(cap_file_reader&) = delete;
        void operator=(cap_file_reader const&) = delete;
        static cap_file_reader& get_instance() { static cap_file_reader cfr; return cfr; }
        void run(const std::vector<std::string> &file_paths);
        int getStart_time_seconds() const;
        void setStart_time_seconds(int start_time_seconds);
        int getEnd_time_seconds() const;
        void setEnd_time_seconds(int end_time_seconds);
        void setImr(std::unique_ptr<IMessageReceiver>);
    private:
        cap_file_reader() {}
        ~cap_file_reader() {}
        int start_time_seconds = 0;
        int end_time_seconds = 86399;
        capfile_read_mode mode = capfile_read_mode::PACKET_HEADER;
        bool is_packet_delimiter(const char &c);
        bool is_msg_delimiter(const char &c, const char &prev);
        bool is_upper_case(const char &c);
        bool is_field_delimiter(const char &c, const char &prev);
        bool is_lower_case(const char &c);
        std::unique_ptr<IMessageReceiver> imr;
    };

}

#endif //SIMPLEBRIE_CAP_FILE_READER_H
