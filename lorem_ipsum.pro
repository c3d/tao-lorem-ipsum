# ******************************************************************************
#  lorem_ipsum.pro                                                  Tao project
# ******************************************************************************
# File Description:
# Qt build file for the Lorem ipsum module
# ******************************************************************************
# This document is released under the GNU General Public License.
# See http://www.gnu.org/copyleft/gpl.html and Matthew 25:22 for details
# (C) 2010 Jerome Forissier <jerome@taodyne.com>
# (C) 2010 Taodyne SAS
# ******************************************************************************

MODINSTDIR = lorem_ipsum

include(../modules.pri)

HEADERS     = lorem_ipsum.h
SOURCES     = lorem_ipsum.cpp
TBL_SOURCES = lorem_ipsum.tbl

INSTALLS += thismod_icon
