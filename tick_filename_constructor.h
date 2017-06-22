//
// Created by b.karjoo on 6/21/2017.
//

#ifndef SIMPLEBRIE_TICKFILEFINDER_H
#define SIMPLEBRIE_TICKFILEFINDER_H
#include <string>
#include <boost/date_time/gregorian/gregorian.hpp>
#include "brie_date_time.h"

namespace brie {
    class tick_filename_constructor {

    public:
        // using #YYYY-MM-DD# format date string
        std::string construct_file_name(std::string);

        // using actual date
        std::string construct_file_name(boost::gregorian::date);
    };
}

#endif //SIMPLEBRIE_TICKFILEFINDER_H
