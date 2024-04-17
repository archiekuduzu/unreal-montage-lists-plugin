// Copyright Epic Games, Inc. All Rights Reserved.

#include "MontageListsEditor.h"

#define LOCTEXT_NAMESPACE "FMontageListsEditorModule"

void FMontageListsEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	MontageListActions = MakeShared<FMontageListActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(MontageListActions.ToSharedRef());
}

void FMontageListsEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(MontageListActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMontageListsEditorModule, MontageListsEditor)