# ******************************************************************************
#  lorem_ipsum.pro                                                  Tao project
# ******************************************************************************
# File Description:
# Qt build file for the Lorem ipsum module
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2010 Jerome Forissier <jerome@taodyne.com>
# (C) 2010 Taodyne SAS
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
