// Fill out your copyright notice in the Description page of Project Settings.

#include "Incrediball.h"
#include "SpellBook.h"


// Sets default values
ASpellBook::ASpellBook()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpellBook::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpellBook::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

