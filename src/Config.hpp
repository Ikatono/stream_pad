#ifndef H_AE095F749CEA4FC29AC38902BC5FD5D1
#define H_AE095F749CEA4FC29AC38902BC5FD5D1

#include <vector>
#include "Page.hpp"

class Config
{
    std::vector<Page> pages;
    public:
        Page& page(size_t index)
        {
            return pages[index];
        }
};

#endif //H_AE095F749CEA4FC29AC38902BC5FD5D1
