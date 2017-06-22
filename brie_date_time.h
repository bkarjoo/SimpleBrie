//
// Created by b.karjoo on 6/21/2017.
//

#ifndef SIMPLEBRIE_BRIE_DATE_TIME_H
#define SIMPLEBRIE_BRIE_DATE_TIME_H
#include <string>
#include <boost/date_time/gregorian/gregorian.hpp>

namespace brie {
/*
 * include converting back and forth from brie date to boost gregorian
 * and to julian days
 */
    class brie_date_time {
    public:
        static int get_date_int(std::string);

        static int get_date_int(boost::gregorian::date);

        static std::string get_date_string(boost::gregorian::date, bool includeSharpSigns);

        static std::string get_date_string(boost::gregorian::date);

        static boost::gregorian::date get_date(std::string);
    };
}

#endif //SIMPLEBRIE_BRIE_DATE_TIME_H
