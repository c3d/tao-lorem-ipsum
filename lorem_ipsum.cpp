// *****************************************************************************
// lorem_ipsum.cpp                                                 Tao3D project
// *****************************************************************************
//
// File description:
//
//
//
//
//
//
//
//
// *****************************************************************************
// This software is licensed under the GNU General Public License v3
// (C) 2010, Catherine Burvelle <catherine@taodyne.com>
// (C) 2019, Christophe de Dinechin <christophe@dinechin.org>
// (C) 2010, Jérôme Forissier <jerome@taodyne.com>
// *****************************************************************************
// This file is part of Tao3D
//
// Tao3D is free software: you can r redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Tao3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Tao3D, in a file named COPYING.
// If not, see <https://www.gnu.org/licenses/>.
// *****************************************************************************
// Implementation of the lorem ipsum primitive

#include "lorem_ipsum.h"
#include "main.h"
#include "runtime.h"
#include "base.h"

#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace XL;


XL_DEFINE_TRACES

std::string _lorem_ipsum(longlong nwords, int offset)
// ----------------------------------------------------------------------------
//    Generate arbitrary length dummy text based on the well-known sequence
// ----------------------------------------------------------------------------
{
    if (!nwords)
        return "";

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

    int size = lorem.words.size();
    std::string ret = lorem.words[offset % size];
    for (int i = 1; i < nwords; i++)
        ret += " " + lorem.words[i % size];

    std::string::reverse_iterator i = ret.rbegin();
    if (!ispunct(*i))
        ret += ".";
    else if (*i != '.')
        *i = '.';

    return ret;
}


Text_p lorem_ipsum(Tree_p /* self */, Integer_p nwords)
// ----------------------------------------------------------------------------
//    Generate arbitrary length dummy text based on the well-known sequence
// ----------------------------------------------------------------------------
{
    if (!nwords || !nwords->value)
        return new Text("");

    IFTRACE(lorem)
        std::cerr << "Lorem Ipsum: " << nwords->value << " words\n";

    return new Text(_lorem_ipsum(nwords->value, 0));
}


Text_p lorem_ipsum(Tree_p /* self */, Integer_p nwords, Integer_p npara)
// ----------------------------------------------------------------------------
//    Generate words in paragraphs of similar size (separated with "\n\n")
// ----------------------------------------------------------------------------
{
    if (!nwords || !nwords->value || !npara || !npara->value)
        return new Text("");

    std::string ret;
    longlong nw = nwords->value, np = npara->value;

    IFTRACE(lorem)
        std::cerr << "Lorem Ipsum: " << nw << " words, "
                                     << np << " paragraphs\n";

    longlong count = 0;
    longlong wpp = nw/np;
    if (wpp == 0)
        wpp = 1;

    std::string t;
    for (int i = 0 ; i < np - 1; i++)
    {
        t = _lorem_ipsum(wpp, count);
        std::transform(t.begin(), t.begin() + 1, t.begin(), toupper);
        ret += t + "\n\n";
        count += wpp;
    }
    t = _lorem_ipsum(nw - count, count);
    std::transform(t.begin(), t.begin() + 1, t.begin(), toupper);
    ret += t;

    return new Text(ret);
}
