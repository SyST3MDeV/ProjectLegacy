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
	 * WidgetBlueprintGeneratedClass DraftTimer.DraftTimer_C
	 * Size -> 0x0038 (FullSize[0x03A0] - InheritedSize[0x0368])
	 */
	class UDraftTimer_C : public UOrionDraftTimer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0368(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SeriousCountdown;                                        // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UWidgetAnimation*                                    Blue_Text_In;                                            // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              ImageTimerGlow;                                          // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTaggedContainer*                               TutorialWrapper_TurnIndicators;                          // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnPlayerTurnCountownUpdated;                             // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnDraftStarted(EOrionTeamMemberType FirstPickerType);
		void OnDraftComplete(bool bSuccess);
		void OnTurnStarted(EOrionTeamMemberType PickingMemberType);
		void OnTurnComplete(EOrionTeamMemberType FinishedMemberType);
		void OnTimerUpdated(bool bIsPlayerTurn, float TimeLeftRatio);
		void ExecuteUbergraph_DraftTimer(int32_t EntryPoint);
		void OnPlayerTurnCountownUpdated__DelegateSignature(float TimeLeftRatio);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
