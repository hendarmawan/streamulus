//
//  const.h
//
// Streamulus Copyright (c) 2012 Irit Katriel. All rights reserved.
//
// This file is part of Streamulus.
// 
// Streamulus is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Streamulus is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Streamulus.  If not, see <http://www.gnu.org/licenses/>.
//

#pragma once

#include <sstream>

#include "strop.h"

namespace streamulus
{    
        
    template<typename T>
    class Const : public Strop<T()> 
    {
    public:
        
        Const(const T& v)
		: mValue(v)
        {
        }
        
        virtual ~Const()
        {
        }
                
        bool Compute(T& result)
        {
            result = mValue;
            return true;
        }
        
        virtual std::string DisplayName() const
        {
            std::stringstream ss;
            ss << "Const" << mValue;
            return ss.str();
        }
        
        

    private:
        T mValue;
    };
    
} // ns streamulus