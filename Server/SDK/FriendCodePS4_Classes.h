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
	 * WidgetBlueprintGeneratedClass FriendCodePS4.FriendCodePS4_C
	 * Size -> 0x0040 (FullSize[0x0270] - InheritedSize[0x0230])
	 */
	class UFriendCodePS4_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UEditableTextBox*                                    CodeDetails;                                             // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UOrionTextBlock*                                     CodeDisplayName;                                         // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    DefaultButton;                                           // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		//struct FFriendCode                                         FriendCode;                                              // 0x0250(0x0020) Edit, BlueprintVisible, ExposeOnSpawn
		unsigned char                                              UnknownData_JAXD[0x20];
	public:
		void Construct();
		void BndEvt__DefaultButton_K2Node_ComponentBoundEvent_57_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnSendFriendCodeMessageComplete(bool bMessageSent);
		void ExecuteUbergraph_FriendCodePS4(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
