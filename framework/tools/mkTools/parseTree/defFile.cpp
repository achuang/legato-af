//--------------------------------------------------------------------------------------------------
/**
 * @file defFile.cpp
 *
 * Copyright (C) Sierra Wireless Inc.
 */
//--------------------------------------------------------------------------------------------------

#include "mkTools.h"


namespace parseTree
{


//--------------------------------------------------------------------------------------------------
/**
 * Constructor
 */
//--------------------------------------------------------------------------------------------------
DefFileFragment_t::DefFileFragment_t
(
    const std::string& filePath ///< The file system path to the file.
)
//--------------------------------------------------------------------------------------------------
:   path(path::MakeAbsolute(filePath)),
    pathMd5(md5(path::MakeCanonical(path))),
    version(0),
    firstTokenPtr(NULL),
    lastTokenPtr(NULL)
//--------------------------------------------------------------------------------------------------
{
}

//--------------------------------------------------------------------------------------------------
/**
 * Constructor
 */
//--------------------------------------------------------------------------------------------------
DefFile_t::DefFile_t
(
    Type_t fileType,            ///< The type of file CDEF, ADEF, etc.
    const std::string& filePath ///< The file system path to the file.
)
//--------------------------------------------------------------------------------------------------
:   DefFileFragment_t(filePath),
    type(fileType)
//--------------------------------------------------------------------------------------------------
{
}



} // namespace parseTree
