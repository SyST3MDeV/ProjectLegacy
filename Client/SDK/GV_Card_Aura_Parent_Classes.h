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
	 * BlueprintGeneratedClass GV_Card_Aura_Parent.GV_Card_Aura_Parent_C
	 * Size -> 0x0018 (FullSize[0x04F0] - InheritedSize[0x04D8])
	 */
	class AGV_Card_Aura_Parent_C : public AOrionGameplayVolume
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                GroundRing;                                              // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class USphereComponent*                                    GameplayRadius;                                          // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GV_Card_Aura_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
