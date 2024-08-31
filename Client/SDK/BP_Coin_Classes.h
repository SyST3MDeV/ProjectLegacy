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
	 * BlueprintGeneratedClass BP_Coin.BP_Coin_C
	 * Size -> 0x0010 (FullSize[0x05C8] - InheritedSize[0x05B8])
	 */
	class ABP_Coin_C : public AOrionCoin
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Large_Value_Coin;                                        // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		void OnCoinVisualScalar(EOrionCoinSize Size, class UMaterialInstanceDynamic* CoinMID);
		void OnTeamChanged(EOrionTeam NewTeamIdx);
		void OnPickupActivated();
		void OnPickupDeactivated();
		void ExecuteUbergraph_BP_Coin(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
