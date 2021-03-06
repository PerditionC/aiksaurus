/*
 * Aiksaurus - An English-language thesaurus library
 * Copyright (C) 2001-2002 by Jared Davis
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 *
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 */

#include "AsciiCompare.h"
#include <cctype>           // for tolower()

namespace AiksaurusImpl
{
    int AsciiCompare(const char* lhs, const char* rhs)
    {
        register char a, b;

        for(; *lhs && *rhs; ++lhs, ++rhs)
        {
            a = tolower(*lhs);
            b = tolower(*rhs);

            if (a < b) 
                return -1;

            else if (a > b) 
                return 1;
        } 

        if (!*lhs && !*rhs) 
            return 0;

        else if (!*lhs) 
            return -1;

        else 
            return 1;
    }
}

