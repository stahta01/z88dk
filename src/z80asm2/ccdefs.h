//-----------------------------------------------------------------------------
// z80asm assembler
// object file for pre-compiled headers (MSC)
// Copyright (C) Paulo Custodio, 2011-20180
// License: http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------
#pragma once

#include <algorithm>
#include <exception>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <unordered_set>
#include <vector>

#include <cstdlib>
#include <cstring>

#ifdef _WIN32
#include <windows.h>
#else // POSIX
#include <unistd.h>
#endif

#include <sys/stat.h>

#include "buffers.h"
#include "options.h"
#include "utils.h"