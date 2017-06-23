cmake_minimum_required(VERSION 3.6)
project(SimpleBrie)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} C:/Users/b.karjoo/Documents/boost_1_63_0/lib64-msvc-14.0)
set(Boost_INCLUDE_DIR C:/Users/b.karjoo/Documents/boost_1_63_0)
set(BOOST_LIBRARYDIR C:/Users/b.karjoo/Documents/boost_1_63_0/lib64-msvc-14.0)

#set(BOOST_ROOT /Users/SuperMac/devel/cpp/boost_1_63_0/build)
#set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} /Users/SuperMac/devel/cpp/boost_1_63_0/build/lib)
#set(Boost_INCLUDE_DIR /Users/SuperMac/devel/cpp/boost_1_63_0/build/include)
#set(BOOST_LIBRARYDIR /Users/SuperMac/devel/cpp/boost_1_63_0/build/lib)

set (Boost_USE_STATIC_LIBS OFF)
find_package(Boost 1.63.0 COMPONENTS program_options system filesystem thread REQUIRED)


set(SOURCE_FILES main.cpp tick_filename_constructor.cpp tick_filename_constructor.h brie_date_time.cpp brie_date_time.h cap_file_reader.cpp cap_file_reader.h stdafx.h IMessageReceiver.h cap_message.cpp cap_message.h cap_msg_field.h print_messages.cpp print_messages.h sqlite3.c sqlite3.h SQLite.h Handle.h)
add_executable(SimpleBrie ${SOURCE_FILES} )

include_directories(${Boost_INCLUDE_DIR})

target_link_libraries(SimpleBrie ${Boost_FILESYSTEM_LIBRARY} ${Boost_LIBRARIES})
