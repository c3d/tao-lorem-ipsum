# ******************************************************************************
# lorem_ipsum.pro                                                  Tao3D project
# ******************************************************************************
#
# File description:
# Qt build file for the Lorem ipsum module
#
#
#
#
#
#
#
# ******************************************************************************
# This software is licensed under the GNU General Public License v3
# (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
# (C) 2010-2012, Catherine Burvelle <catherine@taodyne.com>
# (C) 2011-2013,2019, Christophe de Dinechin <christophe@dinechin.org>
# (C) 2010-2013, Jérôme Forissier <jerome@taodyne.com>
# (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
# ******************************************************************************
# This file is part of Tao3D
#
# Tao3D is free software: you can r redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Tao3D is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Tao3D, in a file named COPYING.
# If not, see <https://www.gnu.org/licenses/>.
# ******************************************************************************

MODINSTDIR = lorem_ipsum

include(../modules.pri)

HEADERS     = lorem_ipsum.h
SOURCES     = lorem_ipsum.cpp
TBL_SOURCES = lorem_ipsum.tbl
OTHER_FILES = lorem_ipsum.xl lorem_ipsum.tbl traces.tbl

INSTALLS += thismod_icon

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
