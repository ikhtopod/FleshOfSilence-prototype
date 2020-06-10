// Copyright (c) 2020 Vitaly Lifanov <vitaly@lifanoff.ru>

#include "../../Public/Misc/LevelFunctionLibrary.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"


TArray<FString> ULevelFunctionLibrary::GetAllLevelNames() {
	TArray<FString> MapFiles;

	IFileManager::Get().FindFilesRecursive(MapFiles, *FPaths::ProjectContentDir(), TEXT("*.umap"), true, false, false);

	for (int32 i = 0; i < MapFiles.Num(); i++) {
		int32 lastSlashIndex = -1;

		if (MapFiles[i].FindLastChar('/', lastSlashIndex)) {
			FString pureMapName;

			for (int32 j = lastSlashIndex + 1; j < MapFiles[i].Len() - 5; j++) {
				pureMapName.AppendChar(MapFiles[i][j]);
			}

			MapFiles[i] = pureMapName;
		}
	}

	return MapFiles;
}
