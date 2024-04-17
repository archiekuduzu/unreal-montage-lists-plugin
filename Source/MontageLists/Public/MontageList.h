// Bryce Noble 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Logging/StructuredLog.h"
#include "MontageList.generated.h"

/**
 * 
 */

DECLARE_LOG_CATEGORY_EXTERN(LogMontageList, Log, All);

UCLASS(BlueprintType)
class MONTAGELISTS_API UMontageList : public UObject
{
	GENERATED_BODY()
public:
	UMontageList();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Montage List")
	TArray<UAnimMontage*> MontageList;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Montage List")
	int MontageCount();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Montage List")
	UAnimMontage* GetRandomMontage();

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Montage List")
	UAnimMontage* GetMontage(int index);
};