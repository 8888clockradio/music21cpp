//music21 CPP Copyright 2022 George Charles Rosar II
//dynamics.h
#pragma once
#include "base.h"
#include "exceptions21.h"
#include "common.h"
#include "spanner.h"
#include "style.h"

#include "environment.h"

class DynamicException : public Music21Exception
{

};

class WedgeException : public Music21Exception
{

};

class Dynamic : public Music21Object
{

};

class DynamicWedge : public spanner.Spanner  //double check
{

};
class Crescendo : public DynamicWedge
{

};
class Diminuendo : public DynamicWedge
{

};
