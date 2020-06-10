// Copyright (c) 2020 Vitaly Lifanov <vitaly@lifanoff.ru>

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelFunctionLibrary.generated.h"

/**
 * Level Library Functions
 */
UCLASS()
class FLESHOFSILENCE_API ULevelFunctionLibrary : public UBlueprintFunctionLibrary {
	GENERATED_BODY()

public:
	/**
		Get array of strings with level names
		@return Array of strings with level names
	*/
	UFUNCTION(BlueprintPure,
		Category = "LevelFunctionLibrary",
		meta = (DisplayName = "GetAllLevelNames", Keywords = "get all map name names"))
		static TArray<FString> GetAllLevelNames();
};
