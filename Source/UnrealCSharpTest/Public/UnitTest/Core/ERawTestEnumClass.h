﻿#pragma once

#include "Macro/BindingMacro.h"

enum class ERawTestEnumClass : uint8
{
	RawTestEnumClassZero,
	RawTestEnumClassOne,
	RawTestEnumClassTwo
};

BINDING_ENUM(ERawTestEnumClass)
