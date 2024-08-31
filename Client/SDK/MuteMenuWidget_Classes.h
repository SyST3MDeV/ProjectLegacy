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
	 * WidgetBlueprintGeneratedClass MuteMenuWidget.MuteMenuWidget_C
	 * Size -> 0x0078 (FullSize[0x04D8] - InheritedSize[0x0460])
	 */
	class UMuteMenuWidget_C : public UOrionMuteMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0460(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UDefaultButton_C*                                    ExitButton;                                              // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow;                                             // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_1;                                           // 0x0478(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_2;                                           // 0x0480(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_3;                                           // 0x0488(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_4;                                           // 0x0490(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_5;                                           // 0x0498(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_6;                                           // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_7;                                           // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_8;                                           // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UMuteMenuRow_C*                                      MuteMenuRow_9;                                           // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class USafeZone*                                           SafeZone_1;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class FScriptMulticastDelegate                             OnClosed;                                                // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnBackPressed();
		void OnActivated();
		void OnDeactivated();
		void BndEvt__ExitButton_K2Node_ComponentBoundEvent_17_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void ExecuteUbergraph_MuteMenuWidget(int32_t EntryPoint);
		void OnClosed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
