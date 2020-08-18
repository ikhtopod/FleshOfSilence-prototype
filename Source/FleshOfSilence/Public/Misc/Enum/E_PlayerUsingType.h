// Copyright (c) 2020 Vitaly Lifanov <vitaly@lifanoff.ru>

#pragma once

#include "CoreMinimal.h"

/**
 * Enum PlayerUsingType
 */
UENUM(BlueprintType)
enum class E_PlayerUsingType : uint8 {
	UNKNOWN,
	EXPLORE,
	INTERACT,
	TAKE,
	LADDERCLIMB,
	USE,
	OPEN,
};
