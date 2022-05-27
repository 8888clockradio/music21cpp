//music21 CPP Copyright 2022 George Charles Rosar II
//volume.h
#pragma once

#include "articulations.h"
#include "exceptions21.h"
#include "common/common.h"

#include "dynamics.h"
#include "prebase.h"
#include "note.h"
#include "environment.h"

class VolumeException : public Music21Exception
{

};

class Volume : public prebase.ProtoM21Object, SlottedObjectMixin
{

};
