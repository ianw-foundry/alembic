//-*****************************************************************************
//
// Copyright (c) 2012-2013,
//  Sony Pictures Imageworks Inc. and
//  Industrial Light & Magic, a division of Lucasfilm Entertainment Company Ltd.
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Sony Pictures Imageworks, nor
// Industrial Light & Magic, nor the names of their contributors may be used
// to endorse or promote products derived from this software without specific
// prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//-*****************************************************************************

#include <Foundation.h>
#include <PyIGeomParam.h>

void register_igeomparam_matrix_quad_color_normal()
{
    register_<AbcG::IM33fGeomParam>        ( "IM33fGeomParam" );
    register_<AbcG::IM33dGeomParam>        ( "IM33dGeomParam" );
    register_<AbcG::IM44fGeomParam>        ( "IM44fGeomParam" );
    register_<AbcG::IM44dGeomParam>        ( "IM44dGeomParam" );

    register_<AbcG::IQuatfGeomParam>       ( "IQuatfGeomParam" );
    register_<AbcG::IQuatdGeomParam>       ( "IQuatdGeomParam" );

    register_<AbcG::IC3hGeomParam>         ( "IC3hGeomParam" );
    register_<AbcG::IC3fGeomParam>         ( "IC3fGeomParam" );
    register_<AbcG::IC3cGeomParam>         ( "IC3cGeomParam" );

    register_<AbcG::IC4hGeomParam>         ( "IC4hGeomParam" );
    register_<AbcG::IC4fGeomParam>         ( "IC4fGeomParam" );
    register_<AbcG::IC4cGeomParam>         ( "IC4cGeomParam" );

    register_<AbcG::IN2fGeomParam>         ( "IN2fGeomParam" );
    register_<AbcG::IN2dGeomParam>         ( "IN2dGeomParam" );

    register_<AbcG::IN3fGeomParam>         ( "IN3fGeomParam" );
    register_<AbcG::IN3dGeomParam>         ( "IN3dGeomParam" );
}
