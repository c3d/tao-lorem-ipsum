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
OTHER_FILES = module.xl lorem_ipsum.tbl traces.tbl module.doxy.h

INSTALLS += thismod_icon
