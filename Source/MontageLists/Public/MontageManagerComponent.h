// Bryce Noble 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MontageList.h"
#include "Components/ActorComponent.h"
#include "MontageManagerComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMontageManagerComponent, Log, All);

USTRUCT(BlueprintType)
struct FMontageListStruct
{
	GENERATED_BODY();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Montage Manager")
	FName Tag;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mongage Manager")
	UMontageList* MontageList;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MONTAGELISTS_API UMontageManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMontageManagerComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Montage Manager")
	TArray<FMontageListStruct> MontageLists;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category="Montage Manager")
	UMontageList* FindMontageListByTag(FName input);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
