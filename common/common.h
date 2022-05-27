//music21 CPP Copyright 2022 George Charles Rosar II
//common/common.h
#pragma once
#include "../defaults.h"
#include "../exceptions21.h"
#include "classTools.h"
#include "decorators.h"
#include "enums.h"
#include "fileTools.h"
#include "formats.h"
#include "misc.h"
#include "numberTools.h"
#include "objects.h"
#include "pathTools.h"
#include "parallel.h"
#include "stringTools.h"
#include "types.h"
#include "weakrefTools.h"

/*
from music21 import defaults
from music21 import exceptions21
# pylint: disable=wildcard-import
from music21.common.classTools import *  # including isNum, isListLike
from music21.common.decorators import *  # gives the deprecated decorator
from music21.common.enums import *
from music21.common.fileTools import *  # file tools.
from music21.common.formats import *  # most are deprecated!
from music21.common.misc import *  # most are deprecated!
from music21.common.numberTools import *  # including opFrac
from music21.common.objects import *
from music21.common.pathTools import *
from music21.common.parallel import *
from music21.common.stringTools import *
from music21.common.types import *
from music21.common.weakrefTools import *  # including wrapWeakref
*/

const uint8_t DEBUG_OFF = 0
const uint8_t DEBUG_USER = 1
const uint8_t DEBUG_DEVEL = 63
const uint8_t DEBUG_ALL = 255
