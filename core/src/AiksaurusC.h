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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  
 * 02111-1307, USA.
 *
 */

#ifndef INCLUDED_AIKSAURUSC_H
#define INCLUDED_AIKSAURUSC_H

    #if defined (__cplusplus)
    extern "C" {
    #endif

        int  Aiksaurus_init();
        void Aiksaurus_destroy();

        const char* Aiksaurus_error();
        const char* Aiksaurus_word();

        int Aiksaurus_find(const char* word);
    
        const char* Aiksaurus_next(int* meaning);
        const char* Aiksaurus_similar();

    #if defined (__cplusplus)
    }
    #endif 

#endif

