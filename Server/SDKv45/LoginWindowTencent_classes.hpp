#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginWindowTencent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoginWindowTencent.LoginWindowTencent_C
// 0x0058 (0x0258 - 0x0200)
class ULoginWindowTencent_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0200(0x0008)(Transient, DuplicateTransient)
	class UWidgetAnimation*                       Lines_;                                            // 0x0208(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0210(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Imagemidline;                                      // 0x0218(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionTextBlock*                        LoginErrorText;                                    // 0x0220(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           LoginWidgets;                                      // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrionTextBlock*                        OrionTextBlock_1577;                               // 0x0230(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         ThrobberWidgets;                                   // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USoundBase*                             RememberBoxSound;                                  // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             AttemptLoginSound;                                 // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             LoginErrorSound;                                   // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoginWindowTencent(int32 EntryPoint);
	void Construct();
	class FText GetErrorMessageText();
	void ShowErrorMessage(const class FText& MESSAGE, bool PlaySoundOnError);
	void ShowLoginThrobber();
	void HideLoginThrobber();
	class FText GetLoggingInText();
	void Reset();

	bool IsInteractable() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoginWindowTencent_C">();
	}
	static class ULoginWindowTencent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginWindowTencent_C>();
	}
};
static_assert(alignof(ULoginWindowTencent_C) == 0x000008, "Wrong alignment on ULoginWindowTencent_C");
static_assert(sizeof(ULoginWindowTencent_C) == 0x000258, "Wrong size on ULoginWindowTencent_C");
static_assert(offsetof(ULoginWindowTencent_C, UberGraphFrame) == 0x000200, "Member 'ULoginWindowTencent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, Lines_) == 0x000208, "Member 'ULoginWindowTencent_C::Lines_' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, Image_0) == 0x000210, "Member 'ULoginWindowTencent_C::Image_0' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, Imagemidline) == 0x000218, "Member 'ULoginWindowTencent_C::Imagemidline' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, LoginErrorText) == 0x000220, "Member 'ULoginWindowTencent_C::LoginErrorText' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, LoginWidgets) == 0x000228, "Member 'ULoginWindowTencent_C::LoginWidgets' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, OrionTextBlock_1577) == 0x000230, "Member 'ULoginWindowTencent_C::OrionTextBlock_1577' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, ThrobberWidgets) == 0x000238, "Member 'ULoginWindowTencent_C::ThrobberWidgets' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, RememberBoxSound) == 0x000240, "Member 'ULoginWindowTencent_C::RememberBoxSound' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, AttemptLoginSound) == 0x000248, "Member 'ULoginWindowTencent_C::AttemptLoginSound' has a wrong offset!");
static_assert(offsetof(ULoginWindowTencent_C, LoginErrorSound) == 0x000250, "Member 'ULoginWindowTencent_C::LoginErrorSound' has a wrong offset!");

}
