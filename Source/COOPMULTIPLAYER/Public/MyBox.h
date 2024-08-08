// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyBox.generated.h"

UCLASS()
class COOPMULTIPLAYER_API AMyBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(ReplicatedUsing = OnRep_replicatedVar, BlueprintReadWrite)
	float replicatedVar;

	UFUNCTION(BlueprintCallable)
	void OnRep_replicatedVar();


	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void DecreaseReplicatedVar();
	FTimerHandle TestTimer;	
};