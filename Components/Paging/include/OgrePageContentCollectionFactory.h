/*
-----------------------------------------------------------------------------
This source file is part of OGRE-Next
(Object-oriented Graphics Rendering Engine)
For the latest info, see http://www.ogre3d.org/

Copyright (c) 2000-2014 Torus Knot Software Ltd

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/

#ifndef __Ogre_PageContentCollectionFactory_H__
#define __Ogre_PageContentCollectionFactory_H__

#include "OgrePagingPrerequisites.h"

namespace Ogre
{
    /** \addtogroup Optional Components
    *  @{
    */
    /** \addtogroup Paging
    *  Some details on paging component
    *  @{
    */

    /** Define the interface to a factory class that will create subclasses
        of PageContentCollection. 
    */
    class PageContentCollectionFactory
    {
    public:
        PageContentCollectionFactory() {}
        virtual ~PageContentCollectionFactory() {}

        virtual const String& getName() const = 0;
        virtual PageContentCollection* createInstance() = 0;
        virtual void destroyInstance(PageContentCollection*) = 0;
    };

    /** @} */
    /** @} */
}

#endif
