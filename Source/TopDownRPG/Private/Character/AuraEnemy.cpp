// Copyright FCC


#include "Character/AuraEnemy.h"

#include "TopDownRPG/TopDownRPG.h"

AAuraEnemy::AAuraEnemy()
{
	Mesh = GetMesh();
	Mesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAuraEnemy::HighlightActor()
{
	Mesh->SetRenderCustomDepth(true);
	Mesh->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);

	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(CUSTOM_DEPTH_RED);
}

void AAuraEnemy::UnHighlightActor()
{
	Mesh->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}