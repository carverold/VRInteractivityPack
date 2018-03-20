#pragma once

#include "CoreMinimal.h"
#include "GrabbableInteractivityComponent.h"
#include "LeverInteractivityComponent.generated.h"

/**
 * An interactive lever component that can be physically moved by a HandComponent.
 */
UCLASS(ClassGroup = (VRInteractivityPack), DisplayName = "Lever", meta = (BlueprintSpawnableComponent))
class VRINTERACTIVITYPACK_API ULeverInteractivityComponent : public UGrabbableInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	ULeverInteractivityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMesh* LeverMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMesh* HousingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float LeverLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float AngleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float DefaultAngle;

	float CurrentTargetAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float Drag;
	
};
