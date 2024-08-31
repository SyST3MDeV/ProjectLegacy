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
	 * BlueprintGeneratedClass GC_Card_RodOfRallyingProc.GC_Card_RodOfRallyingProc_C
	 * Size -> 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
	 */
	class AGC_Card_RodOfRallyingProc_C : public AOrionGameplayCueNotify_Burst_Latent
	{
	public:
		class UParticleSystemComponent*                            Beam;                                                    // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
