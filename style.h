//music21 CPP Copyright 2022 George Charles Rosar II
//style.h
#pragma once
#include "exceptions21.h"
#include "common.h"
#include "prebase.h"
#include "style.h"
#include "textstyle.h"

class TextFormatException : public Music21Exception
{

};

class Enclosure : public StrEnum
{

};

class Style : public ProtoM21Object
{

};

class NoteStyle : public Style
{

};

class TextStyle : public Style
{

};

class TextStylePlacement : public TextStyle
{

};

class BezierStyle : public Style
{

};

class LineStyle : public Style
{

};

class StreamStyle : public Style
{

};

class BeamStyle : public Style
{

};

class StyleMixin : public SlottedObjectMixin
{

};
