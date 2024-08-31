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
	 * BlueprintGeneratedClass GC_DamageAura.GC_DamageAura_C
	 * Size -> 0x0008 (FullSize[0x0718] - InheritedSize[0x0710])
	 */
	class AGC_DamageAura_C : public AOrionGameplayCueNotify_Looping
	{
	public:
		class UStaticMeshComponent*                                GroundRing;                                              // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
