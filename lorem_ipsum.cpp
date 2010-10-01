// Implementation of the lorem ipsum primitive

#include "lorem_ipsum.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>

XL::Text_p lorem_ipsum(Tree_p self, Integer_p nwords)
// ----------------------------------------------------------------------------
//    Generate arbitrary length dummy text based on the well-known sequence
// ----------------------------------------------------------------------------
{
    (void*)self;

    if (!nwords)
        return new XL::Text("");

    static struct LoremWords {
        LoremWords()
        {
            using namespace std;
            string lorem =
            "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do "
            "eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut "
            "enim ad minim veniam, quis nostrud exercitation ullamco laboris "
            "nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor "
            "in reprehenderit in voluptate velit esse cillum dolore eu fugiat "
            "nulla pariatur. Excepteur sint occaecat cupidatat non proident, "
            "sunt in culpa qui officia deserunt mollit anim id est laborum.";
            istringstream iss(lorem);
            std::copy(istream_iterator<string>(iss),
                      istream_iterator<string>(),
                      back_inserter<vector<string> >(words));
        }
        std::vector<std::string> words;
    } lorem;

    std::string ret = lorem.words[0];
    int size = lorem.words.size();
    for (int i = 1; i < nwords; i++)
        ret += " " + lorem.words[i % size];

    std::string::reverse_iterator i = ret.rbegin();
    if (!ispunct(*i))
        ret += ".";
    else if (*i != '.')
        *i = '.';

    return new XL::Text(ret);
}

