//music21 CPP Copyright 2022 George Charles Rosar II
//beam.h
#pragma once

#include "exceptions21.h"
#include "duration.h"
#include "environment.h"
#include "prebase.h"
#include "style.h"
#include "common/objects.h"

class BeamException : public Music21Exception
{

};

class Beam : public ProtoM21Object, EqualSlottedObjectMixin, StyleMixin
{

};

class Beams : public prebase.ProtoM21Object, EqualSlottedObjectMixin
{

};
