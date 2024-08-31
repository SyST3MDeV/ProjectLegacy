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
	 * BlueprintGeneratedClass BP_Decal_CoreDestroyed.BP_Decal_CoreDestroyed_C
	 * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
	 */
	class ABP_Decal_CoreDestroyed_C : public ADecalActor
	{
	public:
		class UDecalComponent*                                     EmissiveDecal;                                           // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
