#pragma once

/**
 * Name: Paragon
 * Version: v34
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Reticle3D_SingleTarget.BP_Reticle3D_SingleTarget_C
	 * Size -> 0x003D (FullSize[0x03DD] - InheritedSize[0x03A0])
	 */
	class ABP_Reticle3D_SingleTarget_C : public AGameplayAbilityWorldReticle
	{
	public:
		class UParticleSystemComponent*                            MoveToArrow;                                             // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         MB_TargetingGlow;                                        // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UPointLightComponent*                                PointLight;                                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            Emitter_Target_Cylinder;                                 // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         MoveToSpriteBeam;                                        // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialBillboardComponent*                         MB_TargetingBrackets;                                    // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		float                                                      AbilityRadius;                                           // 0x03D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MovingToTarget;                                          // 0x03DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
