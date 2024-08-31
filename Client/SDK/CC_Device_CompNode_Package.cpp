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
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Randomize Star Particle System
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    StarFX                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACC_Device_CompNode_C::RandomizeStarParticleSystem(class UParticleSystemComponent** StarFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Randomize Star Particle System");
		
		ACC_Device_CompNode_C_RandomizeStarParticleSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StarFX != nullptr)
			*StarFX = params.StarFX;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.SetFrameNumber
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACC_Device_CompNode_C::SetFrameNumber(int32_t FrameNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.SetFrameNumber");
		
		ACC_Device_CompNode_C_SetFrameNumber_Params params {};
		params.FrameNumber = FrameNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.UserConstructionScript");
		
		ACC_Device_CompNode_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::NodeActivate__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__FinishedFunc");
		
		ACC_Device_CompNode_C_NodeActivate__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::NodeActivate__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.NodeActivate__UpdateFunc");
		
		ACC_Device_CompNode_C_NodeActivate__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::NodeConsume__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__FinishedFunc");
		
		ACC_Device_CompNode_C_NodeConsume__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::NodeConsume__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.NodeConsume__UpdateFunc");
		
		ACC_Device_CompNode_C_NodeConsume__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Node_PostConstelation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__FinishedFunc");
		
		ACC_Device_CompNode_C_Node_PostConstelation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Node_PostConstelation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Node_PostConstelation__UpdateFunc");
		
		ACC_Device_CompNode_C_Node_PostConstelation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Salvage__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__FinishedFunc");
		
		ACC_Device_CompNode_C_Salvage__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Salvage__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage__UpdateFunc");
		
		ACC_Device_CompNode_C_Salvage__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Salvage_FanFare__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__FinishedFunc");
		
		ACC_Device_CompNode_C_Salvage_FanFare__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Salvage_FanFare__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Salvage_FanFare__UpdateFunc");
		
		ACC_Device_CompNode_C_Salvage_FanFare__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Card_Add_FlareUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__FinishedFunc");
		
		ACC_Device_CompNode_C_Card_Add_FlareUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Card_Add_FlareUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Card_Add_FlareUp__UpdateFunc");
		
		ACC_Device_CompNode_C_Card_Add_FlareUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__FinishedFunc");
		
		ACC_Device_CompNode_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.Timeline_0__UpdateFunc");
		
		ACC_Device_CompNode_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.OnActivationChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActivated                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACC_Device_CompNode_C::OnActivationChanged(bool bActivated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.OnActivationChanged");
		
		ACC_Device_CompNode_C_OnActivationChanged_Params params {};
		params.bActivated = bActivated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ACC_Device_CompNode_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.ReceiveBeginPlay");
		
		ACC_Device_CompNode_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.OnComponentSlotted
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          ComponentIconMaterial                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Quantity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACC_Device_CompNode_C::OnComponentSlotted(class UMaterialInterface* ComponentIconMaterial, int32_t Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.OnComponentSlotted");
		
		ACC_Device_CompNode_C_OnComponentSlotted_Params params {};
		params.ComponentIconMaterial = ComponentIconMaterial;
		params.Quantity = Quantity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function CC_Device_CompNode.CC_Device_CompNode_C.ExecuteUbergraph_CC_Device_CompNode
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACC_Device_CompNode_C::ExecuteUbergraph_CC_Device_CompNode(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CC_Device_CompNode.CC_Device_CompNode_C.ExecuteUbergraph_CC_Device_CompNode");
		
		ACC_Device_CompNode_C_ExecuteUbergraph_CC_Device_CompNode_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACC_Device_CompNode_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACC_Device_CompNode_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CC_Device_CompNode.CC_Device_CompNode_C");
		return ptr;
	}

}


