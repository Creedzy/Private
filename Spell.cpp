// Fill out your copyright notice in the Description page of Project Settings.

#include "Incrediball.h"
#include "Spell.h"



// Sets default values
ASpell::ASpell(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;
	//Test for Git4
	//Create the root sphere component to handle the collision detection
	BaseCollisionComponent = ObjectInitializer.CreateDefaultSubobject<USphereComponent>(this, TEXT("BaseSphereComponent"));
	RootComponent = BaseCollisionComponent;

	//Create the static mesh component
	SpellMesh = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("StaticMeshComponent"));
	SpellMesh->SetSimulatePhysics(true);
	SpellMesh->AttachTo(RootComponent);

}


// Called when the game starts or when spawned
void ASpell::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpell::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void ASpell::AbilityCast_Implementation() {
	UE_LOG(LogTemp, Warning, TEXT("This is a message to yourself during runtime!"));
}
