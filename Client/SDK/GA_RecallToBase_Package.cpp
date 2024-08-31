/**
 * Name: Paragon
 * Version: v34
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.CheckSpawnPad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_Hero_C*                                  Hero                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::CheckSpawnPad(class ABP_Hero_C* Hero)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.CheckSpawnPad");
		
		UGA_RecallToBase_C_CheckSpawnPad_Params params {};
		params.Hero = Hero;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982");
		
		UGA_RecallToBase_C_OnCancel_D0CC5F7D4844EA2A2933EA9A527D0982_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCommit_5EEF253446F84E0FA5494F94F53D9286
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnCommit_5EEF253446F84E0FA5494F94F53D9286(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCommit_5EEF253446F84E0FA5494F94F53D9286");
		
		UGA_RecallToBase_C_OnCommit_5EEF253446F84E0FA5494F94F53D9286_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnActivate_2A4EA68C4181220F4060AABBBD719FCF
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnActivate_2A4EA68C4181220F4060AABBBD719FCF(class UGameplayAbility* ActivatedAbility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnActivate_2A4EA68C4181220F4060AABBBD719FCF");
		
		UGA_RecallToBase_C_OnActivate_2A4EA68C4181220F4060AABBBD719FCF_Params params {};
		params.ActivatedAbility = ActivatedAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnChange_9814157E4EF0D358204F7A8E307A103F
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnChange_9814157E4EF0D358204F7A8E307A103F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnChange_9814157E4EF0D358204F7A8E307A103F");
		
		UGA_RecallToBase_C_OnChange_9814157E4EF0D358204F7A8E307A103F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnApplied_5C4B53964788B11D6059578AF82BBE14
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
	 */
	void UGA_RecallToBase_C::OnApplied_5C4B53964788B11D6059578AF82BBE14(class AActor* Source, const struct FGameplayEffectSpecHandle& SpecHandle, const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnApplied_5C4B53964788B11D6059578AF82BBE14");
		
		UGA_RecallToBase_C_OnApplied_5C4B53964788B11D6059578AF82BBE14_Params params {};
		params.Source = Source;
		params.SpecHandle = SpecHandle;
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnFinish_74613A40487B6BC937695C8DF76A6613
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnFinish_74613A40487B6BC937695C8DF76A6613()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnFinish_74613A40487B6BC937695C8DF76A6613");
		
		UGA_RecallToBase_C_OnFinish_74613A40487B6BC937695C8DF76A6613_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB");
		
		UGA_RecallToBase_C_OnStateInterrupted_BD1C04B74AF9D234BC64469B996D03EB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB");
		
		UGA_RecallToBase_C_OnStateEnded_BD1C04B74AF9D234BC64469B996D03EB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnSync_DC01A3C14E99D663C038EDB3AC0B12F0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnSync_DC01A3C14E99D663C038EDB3AC0B12F0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnSync_DC01A3C14E99D663C038EDB3AC0B12F0");
		
		UGA_RecallToBase_C_OnSync_DC01A3C14E99D663C038EDB3AC0B12F0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnNotifyEnd_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnNotifyBegin_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnCancelled_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnCancelled_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnInterrupted_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnInterrupted_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnBlendOut_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnBlendOut_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_8475E7B24681B9D9989966A8024BBEB9
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnCompleted_8475E7B24681B9D9989966A8024BBEB9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_8475E7B24681B9D9989966A8024BBEB9");
		
		UGA_RecallToBase_C_OnCompleted_8475E7B24681B9D9989966A8024BBEB9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.Added_23F8548244182ED7F8679EBE66E5741B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::Added_23F8548244182ED7F8679EBE66E5741B()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.Added_23F8548244182ED7F8679EBE66E5741B");
		
		UGA_RecallToBase_C_Added_23F8548244182ED7F8679EBE66E5741B_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnNotifyEnd_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnNotifyBegin_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnCancelled_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnInterrupted_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnBlendOut_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB");
		
		UGA_RecallToBase_C_OnCompleted_78B6AFDF4F7E94DABBA7FCA6B56087CB_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.Added_7EAA4B6547FF8BAA18AF9AA20249A076
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::Added_7EAA4B6547FF8BAA18AF9AA20249A076()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.Added_7EAA4B6547FF8BAA18AF9AA20249A076");
		
		UGA_RecallToBase_C_Added_7EAA4B6547FF8BAA18AF9AA20249A076_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.OnSync_76BDD5124D8E6EBD40027DB393DD9BA0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::OnSync_76BDD5124D8E6EBD40027DB393DD9BA0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.OnSync_76BDD5124D8E6EBD40027DB393DD9BA0");
		
		UGA_RecallToBase_C_OnSync_76BDD5124D8E6EBD40027DB393DD9BA0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.K2_ActivateAbility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGA_RecallToBase_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.K2_ActivateAbility");
		
		UGA_RecallToBase_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function GA_RecallToBase.GA_RecallToBase_C.ExecuteUbergraph_GA_RecallToBase
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_RecallToBase_C::ExecuteUbergraph_GA_RecallToBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_RecallToBase.GA_RecallToBase_C.ExecuteUbergraph_GA_RecallToBase");
		
		UGA_RecallToBase_C_ExecuteUbergraph_GA_RecallToBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_RecallToBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_RecallToBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_RecallToBase.GA_RecallToBase_C");
		return ptr;
	}

}


