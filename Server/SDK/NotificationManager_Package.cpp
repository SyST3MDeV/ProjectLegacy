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
	 * 		Name   -> Function NotificationManager.NotificationManager_C.Set Display State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bCanShowNotifications                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotificationManager_C::SetDisplayState(bool bCanShowNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.Set Display State");
		
		UNotificationManager_C_SetDisplayState_Params params {};
		params.bCanShowNotifications = bCanShowNotifications;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NotificationManager.NotificationManager_C.Notification Exit Finished
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UNotification_C*                             Widget                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotificationManager_C::NotificationExitFinished(class UNotification_C* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.Notification Exit Finished");
		
		UNotificationManager_C_NotificationExitFinished_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NotificationManager.NotificationManager_C.Remove Dead Notification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionNotification                          Notification                                               (Parm)
	 */
	void UNotificationManager_C::RemoveDeadNotification(const struct FOrionNotification& Notification)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.Remove Dead Notification");
		
		UNotificationManager_C_RemoveDeadNotification_Params params {};
		params.Notification = Notification;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NotificationManager.NotificationManager_C.Construct New Notification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FOrionNotification                          NotificationData                                           (Parm)
	 */
	void UNotificationManager_C::ConstructNewNotification(const struct FOrionNotification& NotificationData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.Construct New Notification");
		
		UNotificationManager_C_ConstructNewNotification_Params params {};
		params.NotificationData = NotificationData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NotificationManager.NotificationManager_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UNotificationManager_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.Construct");
		
		UNotificationManager_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00FB3F30
	 * 		Name   -> Function NotificationManager.NotificationManager_C.ExecuteUbergraph_NotificationManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UNotificationManager_C::ExecuteUbergraph_NotificationManager(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NotificationManager.NotificationManager_C.ExecuteUbergraph_NotificationManager");
		
		UNotificationManager_C_ExecuteUbergraph_NotificationManager_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNotificationManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNotificationManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NotificationManager.NotificationManager_C");
		return ptr;
	}

}


