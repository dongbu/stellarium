/*
 * Stellarium
 * Copyright (C) 2007 Guillaume Chereau
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
 
#ifndef _GRID_HPP_
#define _GRID_HPP_

#include <list>

#include "StelObject.hpp"
#include "SphereGeometry.hpp"

class Navigator;

using namespace StelGeom;
 
class Grid : public std::list<StelObject*>
{
public:
    Grid(Navigator* nav) : navigator(nav) {}
    
    ~Grid() {}

    void filterIntersect(const Disk& s) {}
    
    void insert(StelObject* obj)
    {
        std::list<StelObject*>::push_back(obj);
    }
protected:    
    Navigator *navigator;
};

#endif // _GRID_HPP_

