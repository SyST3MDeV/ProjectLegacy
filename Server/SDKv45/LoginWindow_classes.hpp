#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginWindow.LoginWindow_C
// 0x00A8 (0x02A8 - 0x0200)
class ULoginWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Lines_;                                            // 0x0208(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultButton_C*                       ForgotPasswordButton;                              // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_67;                                  // 0x0218(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagemidline;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultButton_C*                       LoginButton;                                       // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionTextBlock*                        LoginErrorText;                                    // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LoginWidgets;                                      // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionEditableTextBox*                  OrionEmail;                                        // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionEditableTextBox*                  OrionPassword;                                     // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionTextBlock*                        OrionTextBlock_1577;                               // 0x0258(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              Remember;                                          // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ThrobberWidgets;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastDelegateProperty_                   OnLoginRequest;                                    // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastDelegateProperty_                   OnForgotPasswordRequest;                           // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USoundBase*                             RememberBoxSound;                                  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             AttemptLoginSound;                                 // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LoginErrorSound;                                   // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnLoginRequest__DelegateSignature(const class FText& Username, const class FText& Password, bool RememberMe);
	void OnForgotPasswordRequest__DelegateSignature(const class FText& Email);
	void ExecuteUbergraph_LoginWindow(int32 EntryPoint);
	void Construct();
	void BndEvt__OrionPassword_K2Node_ComponentBoundEvent_63_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__OrionEmail_K2Node_ComponentBoundEvent_156_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__Remember_K2Node_ComponentBoundEvent_67_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__LoginButton_K2Node_ComponentBoundEvent_824_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
	void BndEvt__OrionPassword_K2Node_ComponentBoundEvent_231_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__OrionEmail_K2Node_ComponentBoundEvent_111_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__ForgotPasswordButton_K2Node_ComponentBoundEvent_88_OrionBaseButtonClicked__DelegateSignature(class UOrionBaseButton* Button);
	class FText GetErrorMessageText();
	void ShowErrorMessage(const class FText& MESSAGE, bool PlaySoundOnError);
	ESlateVisibility GetRememberMeVisible();
	void ShowLoginThrobber();
	void HideLoginThrobber();
	class FText GetLoggingInText();
	void Reset();

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginWindow_C">();
	}
	static class ULoginWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginWindow_C>();
	}
};
static_assert(alignof(ULoginWindow_C) == 0x000008, "Wrong alignment on ULoginWindow_C");
static_assert(sizeof(ULoginWindow_C) == 0x0002A8, "Wrong size on ULoginWindow_C");
static_assert(offsetof(ULoginWindow_C, UberGraphFrame) == 0x000200, "Member 'ULoginWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, Lines_) == 0x000208, "Member 'ULoginWindow_C::Lines_' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, ForgotPasswordButton) == 0x000210, "Member 'ULoginWindow_C::ForgotPasswordButton' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, HorizontalBox_67) == 0x000218, "Member 'ULoginWindow_C::HorizontalBox_67' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, Image_0) == 0x000220, "Member 'ULoginWindow_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, Imagemidline) == 0x000228, "Member 'ULoginWindow_C::Imagemidline' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, LoginButton) == 0x000230, "Member 'ULoginWindow_C::LoginButton' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, LoginErrorText) == 0x000238, "Member 'ULoginWindow_C::LoginErrorText' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, LoginWidgets) == 0x000240, "Member 'ULoginWindow_C::LoginWidgets' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, OrionEmail) == 0x000248, "Member 'ULoginWindow_C::OrionEmail' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, OrionPassword) == 0x000250, "Member 'ULoginWindow_C::OrionPassword' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, OrionTextBlock_1577) == 0x000258, "Member 'ULoginWindow_C::OrionTextBlock_1577' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, Remember) == 0x000260, "Member 'ULoginWindow_C::Remember' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, ThrobberWidgets) == 0x000268, "Member 'ULoginWindow_C::ThrobberWidgets' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, OnLoginRequest) == 0x000270, "Member 'ULoginWindow_C::OnLoginRequest' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, OnForgotPasswordRequest) == 0x000280, "Member 'ULoginWindow_C::OnForgotPasswordRequest' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, RememberBoxSound) == 0x000290, "Member 'ULoginWindow_C::RememberBoxSound' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, AttemptLoginSound) == 0x000298, "Member 'ULoginWindow_C::AttemptLoginSound' has a wrong offset!");
static_assert(offsetof(ULoginWindow_C, LoginErrorSound) == 0x0002A0, "Member 'ULoginWindow_C::LoginErrorSound' has a wrong offset!");

}
