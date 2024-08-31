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
	 * BlueprintGeneratedClass TM_Beam.TM_Beam_C
	 * Size -> 0x0019 (FullSize[0x0879] - InheritedSize[0x0860])
	 */
	class ATM_Beam_C : public ATM_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0860(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDecalComponent*                                     RangeDecal;                                              // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor
		class UMaterialInstanceDynamic*                            RangeDecalMat;                                           // 0x0870(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bShowingIndicator;                                       // 0x0878(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void OnFacetBeamBuilt(const struct FVector& Start, const struct FVector& End, float Radius);
		void OnTargetingModeActivate();
		void OnTargetingModeCancel();
		void OnTargetingModeConfirm();
		void ReceiveBeginPlay();
		void ValueChanged(bool bEnabled);
		void ExecuteUbergraph_TM_Beam(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
