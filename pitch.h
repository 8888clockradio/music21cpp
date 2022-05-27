//music21 CPP Copyright 2022 George Charles Rosar II
//pitch.h
#pragma once
#include "base.h"
#include "common.h"
#include "defaults.h"
#include "exceptions21.h"
#include "interval.h"
#include "style.h"
#include "prebase.h"

#include "common/common.h"
#include "environment.h"

class AccidentalException : public exceptions21.Music21Exception
{

};


class PitchException : public Music21Exception
{

};

class MicrotoneException : public Music21Exception
{

};

class Microtone : public ProtoM21Object, SlottedObjectMixin
{

};

class Accidental : public ProtoM21Object, style.StyleMixin
{

};

class Pitch : public ProtoM21Object
{

};