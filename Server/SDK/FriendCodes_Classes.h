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
	 * WidgetBlueprintGeneratedClass FriendCodes.FriendCodes_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UFriendCodes_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShareFriendCodeButton;                                   // 0x0238(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UDefaultButton_C*                                    FriendCodeButton;                                        // 0x0240(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		class UImage*                                              Image_9;                                                 // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor
		TArray<struct FFriendCode>                                 FriendCodes;                                             // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FFriendCode                                         friend;                                                  // 0x0260(0x0020) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SendFriendCodesComplete(bool bSent);
		void SendFriendCodes();
		void GetNumFriendCodes(int32_t* NumCodes);
		class FText Get_NumFriendCodes_Text_1();
		void Refresh();
		void Construct();
		void OnQueryFriendCodes(bool bSuccess, TArray<struct FFriendCode> FriendCodes);
		void BndEvt__FriendCodeButton_K2Node_ComponentBoundEvent_9_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
		void OnIssueFriendCode(bool bSuccess, const struct FFriendCode& FriendCode);
		void OnQueryUnredeemedAfterIssue(bool bSuccess, TArray<struct FFriendCode> FriendCodes);
		void ExecuteUbergraph_FriendCodes(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
