//music21 CPP Copyright 2022 George Charles Rosar II
//duration.h

#pragma once
#include "prebase.h"

#include "common/common.h"
#include "common/defaults.h"
#include "exceptions21.h"
#include "environment.h"

#include "common/objects.h"
#include "common/numberTools.h"
#include "common/types.h"

class DurationException : public Music21Exception
{
};

class TupletException : public Music21Exception
{
};

class DurationTuple : public namedtuple
{

};

class augmentOrDiminish : public self, amountToScale
{

};

class Tuplet : public ProtoM21Object
{

};

class Duration : public ProtoM21Object, SlottedObjectMixin
{

};

class GraceDuration : public Duration
{

};

class AppoggiaturaDuration : public GraceDuration
{

};

class TupletFixer
{

};

