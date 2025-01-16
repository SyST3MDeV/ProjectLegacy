#pragma once

/**
 * Name: Paragon
 * Version: v30
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
	 * BlueprintGeneratedClass BaseWell.BaseWell_C
	 * Size -> 0x01D1 (FullSize[0x07F1] - InheritedSize[0x0620])
	 */
	class ABaseWell_C : public AOrionWell_Base
	{
	public:
		unsigned char                                              UnknownData_ZT79[0x1D1];                                 // 0x0620(0x01D1) MISSED OFFSET (PADDING)

	public:
		void OnRep_RigAttached();
		void DoColorChanges(const struct FCallFunc_Multiply_LinearColorFloat_ReturnValue& InLinearColor);
		void GetTargetingLocation(struct FCallFunc_K2_GetComponentLocation_ReturnValue* OutPosition);
		void GetAimTargetSensingLocation(struct FCallFunc_K2_GetComponentLocation_ReturnValue* AimPosition);
		struct FTemp_bool_Variable GetNumberPopLocation(const struct FReturnValue& HitLocation);
		struct FCallFunc_GetSocketLocation_ReturnValue GetRigAttachLocation();
		struct FCallFunc_K2_GetActorRotation_ReturnValue GetRigAttachRotaion();
		void UserConstructionScript();
		void RigPlacedAnim__FinishedFunc();
		void RigPlacedAnim__UpdateFunc();
		void RigActiveAnim__FinishedFunc();
		void RigActiveAnim__UpdateFunc();
		void RigActiveAnim__Dust__EventFunc();
		void ReceiveBeginPlay();
		void OnAttachRig();
		void OnTeamChanged(unsigned char NewTeamIdx);
		void RigFinishedBuilding();
		void RigPlaced();
		void GameplayCue_Wells_Geyser(EParameters EventType);
		void GameplayCue_Wells_DeadZone(EParameters EventType);
		void RigRemoved();
		void ExecuteUbergraph_BaseWell(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
