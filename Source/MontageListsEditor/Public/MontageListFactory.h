// Bryce Noble 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "MontageListFactory.generated.h"

/**
 * 
 */
UCLASS()
class MONTAGELISTSEDITOR_API UMontageListFactory : public UFactory
{
	GENERATED_BODY()
public:
	UMontageListFactory();
	UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
		UObject* Context, FFeedbackContext* Warn);
	
};
