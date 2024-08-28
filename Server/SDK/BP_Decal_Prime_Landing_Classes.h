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
	 * BlueprintGeneratedClass BP_Decal_Prime_Landing.BP_Decal_Prime_Landing_C
	 * Size -> 0x0050 (FullSize[0x03D8] - InheritedSize[0x0388])
	 */
	class ABP_Decal_Prime_Landing_C : public ADecalActor
	{
	public:
		class UParticleSystemComponent*                            ResdiualSmokeFX_FrontLeft;                               // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UParticleSystemComponent*                            ResidualSmokeFX_FrontRight;                              // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Front_Emissive_Decal_Left;                               // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Front_Base_Decal_Left;                                   // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Front_Base_Decal_right;                                  // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Front_Emissive_Decal_Right;                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Base_Decal_left;                                         // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Emissive_Decal_Left;                                     // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Base_Decal_Right;                                        // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UDecalComponent*                                     Emissive_Decal_Right;                                    // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
