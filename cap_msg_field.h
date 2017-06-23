//
// Created by b.karjoo on 6/23/2017.
//

#ifndef SIMPLEBRIE_CAP_MSG_FIELD_H
#define SIMPLEBRIE_CAP_MSG_FIELD_H

#include "stdafx.h"

namespace brie {
    struct cap_msg_field {
        char field_exchange;
        char field_code;
        std::string field_code_value;
        std::string field_value;
    };
}
#endif //SIMPLEBRIE_CAP_MSG_FIELD_H
