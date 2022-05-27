//music21 CPP Copyright 2022 George Charles Rosar II
//note.h

#pragma once
#include "../beam.h"
#include "../common/common.h"
#include "../derivation.h"
#include "../duration.h"
#include "../exceptions21.h"
#include "../interval.h"
#include "../note.h"
#include "../pitch.h"
#include "../tie.h"
#include "../volume.h"

#include "../environment.h"
//from music21.chord import tables
#include "FlashMemDataForChord.h"

#include "../common/decorators.h"


class ChordException : public Music21Exception
{

};

class ChordBase : public NotRest
{

};

class Chord : public ChordBase
{

};

