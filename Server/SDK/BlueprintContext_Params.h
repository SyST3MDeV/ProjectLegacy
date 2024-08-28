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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BlueprintContext.AnalogCursorContext.SetNormalizedPosition
	 */
	struct UAnalogCursorContext_SetNormalizedPosition_Params
	{
	public:
		struct FVector2D                                           NewRelativePosition;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.SetIsListeningForGestures
	 */
	struct UAnalogCursorContext_SetIsListeningForGestures_Params
	{
	public:
		bool                                                       bNewlyListening;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.SetControllingAnalogStick
	 */
	struct UAnalogCursorContext_SetControllingAnalogStick_Params
	{
	public:
		EOrionAnalogStick                                          NewAnalogStick;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.AnalogCursorContext.OnFaceButtonClick__DelegateSignature
	 */
	struct UAnalogCursorContext_OnFaceButtonClick__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorToggle__DelegateSignature
	 */
	struct UAnalogCursorContext_OnAnalogCursorToggle__DelegateSignature_Params
	{
	public:
		bool                                                       UsingAnalog;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorHovered__DelegateSignature
	 */
	struct UAnalogCursorContext_OnAnalogCursorHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bIsHovering;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.AnalogCursorContext.OnAnalogCursorEnabledToggle__DelegateSignature
	 */
	struct UAnalogCursorContext_OnAnalogCursorEnabledToggle__DelegateSignature_Params
	{
	public:
		bool                                                       bIsEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.IsUsingAnalogCursor
	 */
	struct UAnalogCursorContext_IsUsingAnalogCursor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.IsHovering
	 */
	struct UAnalogCursorContext_IsHovering_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.IsDelegateToggleBound
	 */
	struct UAnalogCursorContext_IsDelegateToggleBound_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetVelocity
	 */
	struct UAnalogCursorContext_GetVelocity_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetRightTriggerValue
	 */
	struct UAnalogCursorContext_GetRightTriggerValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetRadius
	 */
	struct UAnalogCursorContext_GetRadius_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetNormalizedPosition
	 */
	struct UAnalogCursorContext_GetNormalizedPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetLastCursorDirection
	 */
	struct UAnalogCursorContext_GetLastCursorDirection_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetIsUsingGamePad
	 */
	struct UAnalogCursorContext_GetIsUsingGamePad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetIsInFastMode
	 */
	struct UAnalogCursorContext_GetIsInFastMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetHoveredWidgetName
	 */
	struct UAnalogCursorContext_GetHoveredWidgetName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetGestureInfo
	 */
	struct UAnalogCursorContext_GetGestureInfo_Params
	{
	public:
		EOrionGestureDirection                                     Direction0;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionGestureDirection                                     Direction1;                                              // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetDirectionFromVector
	 */
	struct UAnalogCursorContext_GetDirectionFromVector_Params
	{
	public:
		struct FVector2D                                           Vector;                                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EOrionGestureDirection                                     ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetCurrentPosition
	 */
	struct UAnalogCursorContext_GetCurrentPosition_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.GetAnalogStickValues
	 */
	struct UAnalogCursorContext_GetAnalogStickValues_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.EnableAnalogCursor
	 */
	struct UAnalogCursorContext_EnableAnalogCursor_Params
	{
	public:
		bool                                                       bEnableParallax;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AnalogCursorContext.DisableAnalogCursor
	 */
	struct UAnalogCursorContext_DisableAnalogCursor_Params
	{	};

	/**
	 * Function BlueprintContext.AutomationContext.ViewTarget
	 */
	struct UAutomationContext_ViewTarget_Params
	{
	public:
		class AActor*                                              ActorToFace;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.SetHealth
	 */
	struct UAutomationContext_SetHealth_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InPercent;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.ScriptAIBehavior
	 */
	struct UAutomationContext_ScriptAIBehavior_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAIScriptedBehavior*                                 ScriptedBehavior;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.ResetAFKTime
	 */
	struct UAutomationContext_ResetAFKTime_Params
	{	};

	/**
	 * Function BlueprintContext.AutomationContext.RegisterForActorSpawnCallbacks
	 */
	struct UAutomationContext_RegisterForActorSpawnCallbacks_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.AutomationContext.OnOrionCharSpawned__DelegateSignature
	 */
	struct UAutomationContext_OnOrionCharSpawned__DelegateSignature_Params
	{
	public:
		class AOrionChar*                                          NewOrionChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.GetRemainingCooldownForAbility
	 */
	struct UAutomationContext_GetRemainingCooldownForAbility_Params
	{
	public:
		class UOrionAbilitySystemComponent*                        AbilitySystem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionAbilityBinding                                       InputID;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E1J2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.ConfirmAbilityForPawn
	 */
	struct UAutomationContext_ConfirmAbilityForPawn_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.CancelAllAbilities
	 */
	struct UAutomationContext_CancelAllAbilities_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.CancelAbilityForPawn
	 */
	struct UAutomationContext_CancelAbilityForPawn_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.ActivateAIAbility
	 */
	struct UAutomationContext_ActivateAIAbility_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionAbilityBinding                                       InputID;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.AutomationContext.ActivateAbilityForPawn
	 */
	struct UAutomationContext_ActivateAbilityForPawn_Params
	{
	public:
		class AOrionChar*                                          InChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionAbilityBinding                                       InputID;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bPressed;                                                // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetupPrototypeFromDef
	 */
	struct UBannerContext_SetupPrototypeFromDef_Params
	{
	public:
		class UOrionMcpBannerItemDefinition*                       BannerDef;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetupBannerSocketFromIdent
	 */
	struct UBannerContext_SetupBannerSocketFromIdent_Params
	{
	public:
		struct FSingleBannerEntry                                  Socket;                                                  // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		class FString                                              BannerIdent;                                             // 0x0050(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRetainSocketID;                                         // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetPrototypeStaffFromIdent
	 */
	struct UBannerContext_SetPrototypeStaffFromIdent_Params
	{
	public:
		class FString                                              BannerIdent;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRetainSocketID;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetPrototypeSocketIdentFromArray
	 */
	struct UBannerContext_SetPrototypeSocketIdentFromArray_Params
	{
	public:
		TArray<class FString>                                      SocketIdentArray;                                        // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetPrototypeSocketIdent
	 */
	struct UBannerContext_SetPrototypeSocketIdent_Params
	{
	public:
		int32_t                                                    socketIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D795[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.SetPrototypeSocketAlteration
	 */
	struct UBannerContext_SetPrototypeSocketAlteration_Params
	{
	public:
		int32_t                                                    socketIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AlterationIndex;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.IsValidAlteration
	 */
	struct UBannerContext_IsValidAlteration_Params
	{
	public:
		class FString                                              alterationId;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetProtoypeBanner
	 */
	struct UBannerContext_GetProtoypeBanner_Params
	{
	public:
		struct FSingleBannerEntryRoot                              BannerDef;                                               // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetPrototypeSocketIdentArray
	 */
	struct UBannerContext_GetPrototypeSocketIdentArray_Params
	{
	public:
		TArray<class FString>                                      SocketIdentArray;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetPrototypeSocketIdent
	 */
	struct UBannerContext_GetPrototypeSocketIdent_Params
	{
	public:
		int32_t                                                    socketIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J32I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SocketIdent;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetPrototypeSocketAlteration
	 */
	struct UBannerContext_GetPrototypeSocketAlteration_Params
	{
	public:
		int32_t                                                    socketIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    AlterationIndex;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              SocketIdent;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetPrototypeAlterationIdentArray
	 */
	struct UBannerContext_GetPrototypeAlterationIdentArray_Params
	{
	public:
		TArray<class FString>                                      AlterationIdentArray;                                    // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    socketIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetOwnedIDBannerItem
	 */
	struct UBannerContext_GetOwnedIDBannerItem_Params
	{
	public:
		TArray<class UOrionMcpBannerItem*>                         Banners;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              InItemIdent;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J32I[0x48];
		//struct FBannerItemIdent                                    OutItemID;                                               // 0x0020(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0068(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetNumSocketsOfType
	 */
	struct UBannerContext_GetNumSocketsOfType_Params
	{
	public:
		struct FSingleBannerEntryRoot                              BannerEntry;                                             // 0x0000(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		EOrionBannerType                                           ItemType;                                                // 0x0060(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7PBE[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0064(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetNumSockets
	 */
	struct UBannerContext_GetNumSockets_Params
	{
	public:
		struct FSingleBannerEntryRoot                              BannerEntry;                                             // 0x0000(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0060(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetNumAlterationsOnPrototypeSocket
	 */
	struct UBannerContext_GetNumAlterationsOnPrototypeSocket_Params
	{
	public:
		int32_t                                                    socketIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionBannerType                                           SocketType;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QE00[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetNameFromDisplayName
	 */
	struct UBannerContext_GetNameFromDisplayName_Params
	{
	public:
		EOrionBannerType                                           ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MQIJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetMaxAlterations
	 */
	struct UBannerContext_GetMaxAlterations_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetDisplayNameFromName
	 */
	struct UBannerContext_GetDisplayNameFromName_Params
	{
	public:
		EOrionBannerType                                           ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_O04O[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerItemStringsOfType
	 */
	struct UBannerContext_GetBannerItemStringsOfType_Params
	{
	public:
		EOrionBannerType                                           ItemTypes;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FBK4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutArray;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bMustOwn;                                                // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerItemsOfType
	 */
	struct UBannerContext_GetBannerItemsOfType_Params
	{
	public:
		EOrionBannerType                                           ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MXK1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UOrionMcpBannerItemDefinition*>               ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerItemNameFromDisplayName
	 */
	struct UBannerContext_GetBannerItemNameFromDisplayName_Params
	{
	public:
		EOrionBannerType                                           ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z4GF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerItemDisplayNameFromName
	 */
	struct UBannerContext_GetBannerItemDisplayNameFromName_Params
	{
	public:
		EOrionBannerType                                           ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C2GK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Ident;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerAlterationStrings
	 */
	struct UBannerContext_GetBannerAlterationStrings_Params
	{
	public:
		TArray<class FString>                                      OutArray;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bMustOwn;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerAlterationNameFromDisplayName
	 */
	struct UBannerContext_GetBannerAlterationNameFromDisplayName_Params
	{
	public:
		class FString                                              Ident;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GetBannerAlterationDisplayNameFromName
	 */
	struct UBannerContext_GetBannerAlterationDisplayNameFromName_Params
	{
	public:
		class FString                                              Ident;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GeneratePrototypeBannerItemIDs
	 */
	struct UBannerContext_GeneratePrototypeBannerItemIDs_Params
	{
	public:
		class AOrionPlayerController_Game*                         PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBannerItemIdent>                            ItemIdents;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.GenerateBannerItemIDs
	 */
	struct UBannerContext_GenerateBannerItemIDs_Params
	{
	public:
		class AOrionPlayerController_Game*                         PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBannerItemIdent>                            ItemIdents;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FSingleBannerEntryRoot                              BannerEntry;                                             // 0x0018(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.FindActiveBanner
	 */
	struct UBannerContext_FindActiveBanner_Params
	{
	public:
		class UOrionMcpProfileAccount*                             McpProfile;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpBannerItem*                                 ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.CreateRandomBannerDef
	 */
	struct UBannerContext_CreateRandomBannerDef_Params
	{
	public:
		struct FSingleBannerEntryRoot                              RandomBanner;                                            // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.CreateDefaultBannerDef
	 */
	struct UBannerContext_CreateDefaultBannerDef_Params
	{
	public:
		struct FSingleBannerEntryRoot                              DefaultBanner;                                           // 0x0000(0x0060)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.CountValidAlterations
	 */
	struct UBannerContext_CountValidAlterations_Params
	{
	public:
		TArray<class FString>                                      Alterations;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.CountOverlapAlterations
	 */
	struct UBannerContext_CountOverlapAlterations_Params
	{
	public:
		//struct FBannerItemIdent                                    BannerItem;                                              // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J32I[0x48];
		int32_t                                                    ReturnValue;                                             // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.BuildListOfExistingItemAllocations
	 */
	struct UBannerContext_BuildListOfExistingItemAllocations_Params
	{
	public:
		class UOrionMcpProfileAccount*                             McpProfile;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FBannerItemIdent>                            AllocatedBannerIdents;                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FBannerItemIdent>                            OwnedBannerItems;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.AddRandomItemToSocketSlot
	 */
	struct UBannerContext_AddRandomItemToSocketSlot_Params
	{
	public:
		struct FSingleBannerEntry                                  Socket;                                                  // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BannerContext.AddRandomAlterationsToSocket
	 */
	struct UBannerContext_AddRandomAlterationsToSocket_Params
	{
	public:
		struct FSingleBannerEntry                                  Socket;                                                  // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    NumRandomAlterations;                                    // 0x0050(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.QueueHUDAlert
	 */
	struct UBaseHUDContext_QueueHUDAlert_Params
	{
	public:
		class UHUDAlertAsset*                                      AlertAsset;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnUltimateReady__DelegateSignature
	 */
	struct UBaseHUDContext_OnUltimateReady__DelegateSignature_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnPlayerXPUpdate__DelegateSignature
	 */
	struct UBaseHUDContext_OnPlayerXPUpdate__DelegateSignature_Params
	{
	public:
		int32_t                                                    XP;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MaxXP;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnLevelUp__DelegateSignature
	 */
	struct UBaseHUDContext_OnLevelUp__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnKDAUpdate__DelegateSignature
	 */
	struct UBaseHUDContext_OnKDAUpdate__DelegateSignature_Params
	{
	public:
		int32_t                                                    Kills;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Deaths;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Assists;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Minions;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnHeroDeathOrSpawnEvent__DelegateSignature
	 */
	struct UBaseHUDContext_OnHeroDeathOrSpawnEvent__DelegateSignature_Params
	{
	public:
		struct FOrionHUDTeamStatusInfo                             NewTeamInfo;                                             // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnCardXPUpdate__DelegateSignature
	 */
	struct UBaseHUDContext_OnCardXPUpdate__DelegateSignature_Params
	{
	public:
		float                                                      NewXP;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      NewXPMax;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnCardPointsUpdated__DelegateSignature
	 */
	struct UBaseHUDContext_OnCardPointsUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewCardActivationPointsSpent;                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NewCardActivationPointsMax;                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnCardLevelUp__DelegateSignature
	 */
	struct UBaseHUDContext_OnCardLevelUp__DelegateSignature_Params
	{
	public:
		float                                                      NewLevel;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnCannotActivateAbility__DelegateSignature
	 */
	struct UBaseHUDContext_OnCannotActivateAbility__DelegateSignature_Params
	{
	public:
		int32_t                                                    InputID;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K5AY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTagContainer                               RelevantTags;                                            // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.BaseHUDContext.OnAbilityUpdate__DelegateSignature
	 */
	struct UBaseHUDContext_OnAbilityUpdate__DelegateSignature_Params
	{
	public:
		EOrionAbilityBinding                                       InputID;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OQUK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionAbilityUIData                                 AbilityData;                                             // 0x0008(0x00C0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.IsUltimateReady
	 */
	struct UBaseHUDContext_IsUltimateReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetTopOpenMenu
	 */
	struct UBaseHUDContext_GetTopOpenMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetMyTeam
	 */
	struct UBaseHUDContext_GetMyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetIsMenuVisible
	 */
	struct UBaseHUDContext_GetIsMenuVisible_Params
	{
	public:
		EOrionMenuSlotTypes                                        MenuType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetHUDPlayerInfo
	 */
	struct UBaseHUDContext_GetHUDPlayerInfo_Params
	{
	public:
		struct FOrionBaseHUDPlayerInfo                             ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetEnemyTeam
	 */
	struct UBaseHUDContext_GetEnemyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetDesiredAnalogCursorState
	 */
	struct UBaseHUDContext_GetDesiredAnalogCursorState_Params
	{
	public:
		EOrionDesiredAnalogCursorState                             ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetCurrentMenu
	 */
	struct UBaseHUDContext_GetCurrentMenu_Params
	{
	public:
		EOrionMenuSlotTypes                                        ActiveMenu;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetCurrentMatchTime
	 */
	struct UBaseHUDContext_GetCurrentMatchTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.GetAbilityData
	 */
	struct UBaseHUDContext_GetAbilityData_Params
	{
	public:
		EOrionAbilityBinding                                       InputID;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8YRI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionAbilityUIData                                 ReturnValue;                                             // 0x0008(0x00C0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BaseHUDContext.ChangeMenuOpenState
	 */
	struct UBaseHUDContext_ChangeMenuOpenState_Params
	{
	public:
		EOrionMenuSlotTypes                                        MenuSlot;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewlyOpen;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PlayerAwareContext.OnMcpError__DelegateSignature
	 */
	struct UPlayerAwareContext_OnMcpError__DelegateSignature_Params
	{
	public:
		class FText                                                ErrorMessage;                                            // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerAwareContext.GetMCPTime
	 */
	struct UPlayerAwareContext_GetMCPTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BoostContext.IsBoostActive
	 */
	struct UBoostContext_IsBoostActive_Params
	{
	public:
		EOrionBoostType                                            BoostType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BoostContext.IsAnyBoostActive
	 */
	struct UBoostContext_IsAnyBoostActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BoostContext.GetUsesRemaining
	 */
	struct UBoostContext_GetUsesRemaining_Params
	{
	public:
		EOrionBoostType                                            BoostType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G5VT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BoostContext.GetBoosts
	 */
	struct UBoostContext_GetBoosts_Params
	{
	public:
		TArray<class UOrionMcpBoostItem*>                          Boosts;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BoostContext.GetBoostExpirationTime
	 */
	struct UBoostContext_GetBoostExpirationTime_Params
	{
	public:
		EOrionBoostType                                            BoostType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UJLY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDateTime                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.SetHighlightedSlot
	 */
	struct UCardShopContext_SetHighlightedSlot_Params
	{
	public:
		int32_t                                                    NewHighlightedSlot;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.RemoveCardFromHandAtIndex
	 */
	struct UCardShopContext_RemoveCardFromHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.RemoveCardDataFromDeck
	 */
	struct UCardShopContext_RemoveCardDataFromDeck_Params
	{
	public:
		class UOrionCardData*                                      CardData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.CardShopContext.OnHighlightChange__DelegateSignature
	 */
	struct UCardShopContext_OnHighlightChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewSlotIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    OldSlotIndex;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.CardShopContext.OnDeckCardsFilered__DelegateSignature
	 */
	struct UCardShopContext_OnDeckCardsFilered__DelegateSignature_Params
	{
	public:
		TArray<class UOrionCardData*>                              FilteredCards;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetNumOfCardsInDeck
	 */
	struct UCardShopContext_GetNumOfCardsInDeck_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetNumCardActivationPointsSpent
	 */
	struct UCardShopContext_GetNumCardActivationPointsSpent_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetNumCardActivationPoints
	 */
	struct UCardShopContext_GetNumCardActivationPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetMaxNumCardActivationPoints
	 */
	struct UCardShopContext_GetMaxNumCardActivationPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetHighlightedSlot
	 */
	struct UCardShopContext_GetHighlightedSlot_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetHandCardSlotType
	 */
	struct UCardShopContext_GetHandCardSlotType_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionCardSlottypes                                        ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetDeckMessage
	 */
	struct UCardShopContext_GetDeckMessage_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RPHD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UOrionCardData*>                              DeckCards;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetDeckCategoryText
	 */
	struct UCardShopContext_GetDeckCategoryText_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VMFN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UOrionCardData*>                              DeckCards;                                               // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0018(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetCardsByType
	 */
	struct UCardShopContext_GetCardsByType_Params
	{
	public:
		ECardFilterType                                            Filter;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6ZC2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UOrionCardData*>                              Cards;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.GetCardActorFromHandAtIndex
	 */
	struct UCardShopContext_GetCardActorFromHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JEI9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AOrionCard*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.FilterCardsWithSlot
	 */
	struct UCardShopContext_FilterCardsWithSlot_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DAA7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.CardShopContext.DeckCardArraySizeChanged__DelegateSignature
	 */
	struct UCardShopContext_DeckCardArraySizeChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.CardShopContext.CanAffordCard
	 */
	struct UCardShopContext_CanAffordCard_Params
	{
	public:
		class UOrionCardData*                                      TestCard;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.CanAddCardDataToHandAtIndex
	 */
	struct UCardShopContext_CanAddCardDataToHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RUK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrionCardData*                                      CardData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.CardShopContext.AddCardDataToHandAtIndex
	 */
	struct UCardShopContext_AddCardDataToHandAtIndex_Params
	{
	public:
		int32_t                                                    HandIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QVUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrionCardData*                                      CardData;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.SetInstallSpeed
	 */
	struct UChunkInstallContext_SetInstallSpeed_Params
	{
	public:
		EInstallSpeed                                              NewSpeed;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.Prioritize
	 */
	struct UChunkInstallContext_Prioritize_Params
	{
	public:
		EOrionChunkId                                              InChunk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInstallPriority                                           InPriority;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.GetTimeRemaining
	 */
	struct UChunkInstallContext_GetTimeRemaining_Params
	{
	public:
		EOrionChunkId                                              InChunk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U56E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimespan                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.GetStatus
	 */
	struct UChunkInstallContext_GetStatus_Params
	{
	public:
		EOrionChunkId                                              InChunk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EInstallStatus                                             ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.GetProgress
	 */
	struct UChunkInstallContext_GetProgress_Params
	{
	public:
		EOrionChunkId                                              InChunk;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SZ2T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ChunkInstallContext.GetInstallSpeed
	 */
	struct UChunkInstallContext_GetInstallSpeed_Params
	{
	public:
		EInstallSpeed                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.DeckBuilderContext.OnMcpResult__DelegateSignature
	 */
	struct UDeckBuilderContext_OnMcpResult__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6J0M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.DeckBuilderContext.GetMaxDeckNameLength
	 */
	struct UDeckBuilderContext_GetMaxDeckNameLength_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.DeckBuilderContext.GenerateDeckName
	 */
	struct UDeckBuilderContext_GenerateDeckName_Params
	{
	public:
		class UEditableText*                                       InTextField;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionHeroData*                                      InHeroData;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.DeckBuilderContext.FormatDeck
	 */
	struct UDeckBuilderContext_FormatDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                NewDeckName;                                             // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
		class FString                                              HeroTemplateName;                                        // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpDeckItem*                                   Template;                                                // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.SendFriendRequest
	 */
	struct UFriendsContext_SendFriendRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.RejectFriendRequest
	 */
	struct UFriendsContext_RejectFriendRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.FriendsContext.OnFriendsListChanged__DelegateSignature
	 */
	struct UFriendsContext_OnFriendsListChanged__DelegateSignature_Params
	{
	public:
		TArray<class UOrionFriendItem*>                            Friends;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.InitiateWhisperToFriend
	 */
	struct UFriendsContext_InitiateWhisperToFriend_Params
	{
	public:
		struct FUniqueNetIdRepl                                    FriendNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.HandleFriendsChanged
	 */
	struct UFriendsContext_HandleFriendsChanged_Params
	{	};

	/**
	 * Function BlueprintContext.FriendsContext.GetQuickInviteList
	 */
	struct UFriendsContext_GetQuickInviteList_Params
	{
	public:
		TArray<class UOrionFriendItem*>                            QuickInviteFriends;                                      // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.GetFriendshipStatus
	 */
	struct UFriendsContext_GetFriendshipStatus_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EOrionFriendshipStatus                                     ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.CancelFriendRequest
	 */
	struct UFriendsContext_CancelFriendRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.FriendsContext.AcceptFriendRequest
	 */
	struct UFriendsContext_AcceptFriendRequest_Params
	{
	public:
		struct FUniqueNetIdRepl                                    PlayerNetID;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroAttributesContext.UpdateBaseAttributes
	 */
	struct UHeroAttributesContext_UpdateBaseAttributes_Params
	{	};

	/**
	 * Function BlueprintContext.HeroAttributesContext.UpdateAttributesWithPotentialCard
	 */
	struct UHeroAttributesContext_UpdateAttributesWithPotentialCard_Params
	{
	public:
		int32_t                                                    CardSlotIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6SMU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionCardInstance                                  PotentialCard;                                           // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroAttributesContext.GenerateHeroAttributesEntries
	 */
	struct UHeroAttributesContext_GenerateHeroAttributesEntries_Params
	{
	public:
		TArray<class UHeroAttributeListEntry*>                     OutAttributeEntries;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.SetSelectedSkin
	 */
	struct UHeroContext_SetSelectedSkin_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.SetHeroSettings
	 */
	struct UHeroContext_SetHeroSettings_Params
	{
	public:
		class UOrionHeroData*                                      Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionRole                                                 Role;                                                    // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionPosition                                             Position;                                                // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.SetDeckForPlayer
	 */
	struct UHeroContext_SetDeckForPlayer_Params
	{
	public:
		class UOrionMcpDeckItem*                                   NewDeck;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HeroContext.OnSelectedSkinChanged__DelegateSignature
	 */
	struct UHeroContext_OnSelectedSkinChanged__DelegateSignature_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.NotifyPreviewSkinChanged
	 */
	struct UHeroContext_NotifyPreviewSkinChanged_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.NotifyPreviewHeroChanged
	 */
	struct UHeroContext_NotifyPreviewHeroChanged_Params
	{
	public:
		class UOrionHeroData*                                      NewHero;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetSelectedSkinForHero
	 */
	struct UHeroContext_GetSelectedSkinForHero_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionSkinItemDefinition*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetSelectedHeroDataSpec
	 */
	struct UHeroContext_GetSelectedHeroDataSpec_Params
	{
	public:
		struct FOrionHeroDataSpec                                  ReturnValue;                                             // 0x0000(0x0090)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetSelectedHero
	 */
	struct UHeroContext_GetSelectedHero_Params
	{
	public:
		class UOrionHeroData*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetSelectedCosmeticOptions
	 */
	struct UHeroContext_GetSelectedCosmeticOptions_Params
	{
	public:
		struct FOrionCosmeticPlayerChoices                         ReturnValue;                                             // 0x0000(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetQueueTimeFor
	 */
	struct UHeroContext_GetQueueTimeFor_Params
	{
	public:
		class UOrionHeroData*                                      InHero;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCoopVsAI;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L72E[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutNumSamples;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetHeroSettings
	 */
	struct UHeroContext_GetHeroSettings_Params
	{
	public:
		class UOrionHeroData*                                      Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionRole                                                 Role;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionPosition                                             Position;                                                // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetHeroByString
	 */
	struct UHeroContext_GetHeroByString_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionHeroData*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetAllAvailableHeroes
	 */
	struct UHeroContext_GetAllAvailableHeroes_Params
	{
	public:
		TArray<class UOrionHeroData*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.GetAbility
	 */
	struct UHeroContext_GetAbility_Params
	{
	public:
		class UOrionHeroData*                                      Hero;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionAbilityBinding                                       Slot;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M978[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrionAbility*                                       ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HeroContext.FilterAvailableHeroes
	 */
	struct UHeroContext_FilterAvailableHeroes_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		TArray<class UOrionHeroData*>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetSprintCastingEndTime
	 */
	struct UHUDContext_SetSprintCastingEndTime_Params
	{
	public:
		float                                                      EndTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetMatchInfoTextVisibility
	 */
	struct UHUDContext_SetMatchInfoTextVisibility_Params
	{
	public:
		bool                                                       bIsNewlyVisible;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetMatchInfoText
	 */
	struct UHUDContext_SetMatchInfoText_Params
	{
	public:
		class FText                                                NewMatchInfoText;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetIsHUDHitTestable
	 */
	struct UHUDContext_SetIsHUDHitTestable_Params
	{
	public:
		bool                                                       bNewIsHitTestable;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetHUDColor
	 */
	struct UHUDContext_SetHUDColor_Params
	{
	public:
		struct FLinearColor                                        NewHUDColor;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetHeroSpecificHUDElementIcon
	 */
	struct UHUDContext_SetHeroSpecificHUDElementIcon_Params
	{
	public:
		class UTexture2D*                                          NewIcon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.SetAutoConfirmEndTime
	 */
	struct UHUDContext_SetAutoConfirmEndTime_Params
	{
	public:
		float                                                      EndTime;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnTowerInfoUpdate__DelegateSignature
	 */
	struct UHUDContext_OnTowerInfoUpdate__DelegateSignature_Params
	{
	public:
		struct FOrionTowerTargetingInfo                            NewTowerInfo;                                            // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnTeamNumChange__DelegateSignature
	 */
	struct UHUDContext_OnTeamNumChange__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 NewTeamNum;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdateDelegate__DelegateSignature
	 */
	struct UHUDContext_OnTeamInfoUpdateDelegate__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D7M7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionHUDTeamStatusInfo                             NewTeamInfo;                                             // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnTeamInfoUpdate__DelegateSignature
	 */
	struct UHUDContext_OnTeamInfoUpdate__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V9IV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionHUDTeamStatusInfo                             NewTeamInfo;                                             // 0x0008(0x0068)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnTargeted__DelegateSignature
	 */
	struct UHUDContext_OnTargeted__DelegateSignature_Params
	{
	public:
		bool                                                       bShowTargetingPopup;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnStatusEffectUpdate__DelegateSignature
	 */
	struct UHUDContext_OnStatusEffectUpdate__DelegateSignature_Params
	{
	public:
		struct FOrionStatusEffectUIInfo                            NewStatusEffectInfo;                                     // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnSpectatorToggleControllerCursor__DelegateSignature
	 */
	struct UHUDContext_OnSpectatorToggleControllerCursor__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnSpectatorFollowedHeroChange__DelegateSignature
	 */
	struct UHUDContext_OnSpectatorFollowedHeroChange__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KHW8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    HeroIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnSpectatorCameraModeChange__DelegateSignature
	 */
	struct UHUDContext_OnSpectatorCameraModeChange__DelegateSignature_Params
	{
	public:
		ESpectatorCameraType                                       NewCameraMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnPlayerHeroSet__DelegateSignature
	 */
	struct UHUDContext_OnPlayerHeroSet__DelegateSignature_Params
	{
	public:
		class UOrionHeroData*                                      NewHeroData;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnNewGameEventMessage__DelegateSignature
	 */
	struct UHUDContext_OnNewGameEventMessage__DelegateSignature_Params
	{
	public:
		struct FOrionGameEventMessageData                          MessageData;                                             // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnMiniMapModeChanged__DelegateSignature
	 */
	struct UHUDContext_OnMiniMapModeChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsLarge;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnMatchStart__DelegateSignature
	 */
	struct UHUDContext_OnMatchStart__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextVisibilityChange__DelegateSignature
	 */
	struct UHUDContext_OnMatchInfoTextVisibilityChange__DelegateSignature_Params
	{
	public:
		bool                                                       bIsNewlyVisible;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnMatchInfoTextChange__DelegateSignature
	 */
	struct UHUDContext_OnMatchInfoTextChange__DelegateSignature_Params
	{
	public:
		class FText                                                NewMatchInfoText;                                        // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnHUDColorChange__DelegateSignature
	 */
	struct UHUDContext_OnHUDColorChange__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnHeroSpecificHUDElementChange__DelegateSignature
	 */
	struct UHUDContext_OnHeroSpecificHUDElementChange__DelegateSignature_Params
	{
	public:
		class UTexture2D*                                          NewIcon;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnDamageEvent__DelegateSignature
	 */
	struct UHUDContext_OnDamageEvent__DelegateSignature_Params
	{
	public:
		struct FOrionUIDamageEventInfo                             UIDamageEventInfo;                                       // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HUDContext.OnConsoleOpenStateChange__DelegateSignature
	 */
	struct UHUDContext_OnConsoleOpenStateChange__DelegateSignature_Params
	{
	public:
		bool                                                       bConsoleNewlyOpen;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.IsSurrenderEnabled
	 */
	struct UHUDContext_IsSurrenderEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.IsLocalHeroDead
	 */
	struct UHUDContext_IsLocalHeroDead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.InvalidateHUDCache
	 */
	struct UHUDContext_InvalidateHUDCache_Params
	{	};

	/**
	 * Function BlueprintContext.HUDContext.HUDAnimationStarting
	 */
	struct UHUDContext_HUDAnimationStarting_Params
	{
	public:
		class FName                                                RequestingName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.HUDAnimationEnding
	 */
	struct UHUDContext_HUDAnimationEnding_Params
	{
	public:
		class FName                                                RequestingName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.HideVictoryScreen
	 */
	struct UHUDContext_HideVictoryScreen_Params
	{	};

	/**
	 * Function BlueprintContext.HUDContext.HandleInput_Blueprint
	 */
	struct UHUDContext_HandleInput_Blueprint_Params
	{
	public:
		class FName                                                ActionBindingName;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetTowerTargetingInfo
	 */
	struct UHUDContext_GetTowerTargetingInfo_Params
	{
	public:
		struct FOrionTowerTargetingInfo                            ReturnValue;                                             // 0x0000(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetTeamUIInfo
	 */
	struct UHUDContext_GetTeamUIInfo_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionTeam                                                 TeamNum;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y2S9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionHUDTeamStatusInfo                             ReturnValue;                                             // 0x0008(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetSafeZonePadding
	 */
	struct UHUDContext_GetSafeZonePadding_Params
	{
	public:
		ESafeZonePadding                                           PaddingType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MTJ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetMyTeam
	 */
	struct UHUDContext_GetMyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetHUDInputActionNames
	 */
	struct UHUDContext_GetHUDInputActionNames_Params
	{
	public:
		struct FOrionHUDInputActionNames                           ReturnValue;                                             // 0x0000(0x00F8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetEnemyTeam
	 */
	struct UHUDContext_GetEnemyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetDamageIndicatorRotation
	 */
	struct UHUDContext_GetDamageIndicatorRotation_Params
	{
	public:
		struct FVector                                             PlayerLocation;                                          // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FVector                                             InstigatorLocation;                                      // 0x000C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetCoreInfo
	 */
	struct UHUDContext_GetCoreInfo_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2KVF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionCoreInfo                                      ReturnValue;                                             // 0x0004(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetCardDataInPlayerHand
	 */
	struct UHUDContext_GetCardDataInPlayerHand_Params
	{
	public:
		TArray<class UOrionCardData*>                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.GetAllowCardMenu
	 */
	struct UHUDContext_GetAllowCardMenu_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.FlushPressedActionBindingKeys
	 */
	struct UHUDContext_FlushPressedActionBindingKeys_Params
	{
	public:
		class FName                                                ActionBindingName;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.FadeHUDOut
	 */
	struct UHUDContext_FadeHUDOut_Params
	{
	public:
		float                                                      FadeInTime;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.FadeHUDIn
	 */
	struct UHUDContext_FadeHUDIn_Params
	{	};

	/**
	 * Function BlueprintContext.HUDContext.CancelAllAbilities
	 */
	struct UHUDContext_CancelAllAbilities_Params
	{	};

	/**
	 * Function BlueprintContext.HUDContext.BP_GetLocalPlayerInfo
	 */
	struct UHUDContext_BP_GetLocalPlayerInfo_Params
	{
	public:
		struct FOrionLocalPlayerUIInfo                             ReturnValue;                                             // 0x0000(0x00D8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.HUDContext.AddStatusEffectEvent
	 */
	struct UHUDContext_AddStatusEffectEvent_Params
	{	};

	/**
	 * Function BlueprintContext.HUDContext.AddDamageEvent
	 */
	struct UHUDContext_AddDamageEvent_Params
	{
	public:
		struct FOrionUIDamageEventInfo                             DamageEventInfo;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.SetDeckName
	 */
	struct UInventoryContext_SetDeckName_Params
	{
	public:
		class FString                                              DeckName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DeckId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.SetCardsForDeck
	 */
	struct UInventoryContext_SetCardsForDeck_Params
	{
	public:
		TArray<class FString>                                      CardIdList;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              DeckId;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.InventoryContext.OnMcpCardsFiltered__DelegateSignature
	 */
	struct UInventoryContext_OnMcpCardsFiltered__DelegateSignature_Params
	{
	public:
		TArray<class UOrionMcpCardItem*>                           FilteredCards;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.InventoryContext.OnDecomposeCard__DelegateSignature
	 */
	struct UInventoryContext_OnDecomposeCard__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.InventoryContext.OnDecksFiltered__DelegateSignature
	 */
	struct UInventoryContext_OnDecksFiltered__DelegateSignature_Params
	{
	public:
		TArray<class UOrionMcpDeckItem*>                           FilteredDecks;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.InventoryContext.OnCardsFiltered__DelegateSignature
	 */
	struct UInventoryContext_OnCardsFiltered__DelegateSignature_Params
	{
	public:
		TArray<class UOrionCardData*>                              FilteredCards;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.InventoryContext.OnCardPacksChanged__DelegateSignature
	 */
	struct UInventoryContext_OnCardPacksChanged__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.InventoryContext.GetUnusedDeck
	 */
	struct UInventoryContext_GetUnusedDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetNumCardsForDeck
	 */
	struct UInventoryContext_GetNumCardsForDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   DeckItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCountActive;                                            // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCountPassive;                                           // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCountPrimeHelix;                                        // 0x000A(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bCountUpgrade;                                           // 0x000B(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetNumCardPacks
	 */
	struct UInventoryContext_GetNumCardPacks_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetNextCardPack
	 */
	struct UInventoryContext_GetNextCardPack_Params
	{
	public:
		class UOrionMcpCardPackItem*                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetHeroFromData
	 */
	struct UInventoryContext_GetHeroFromData_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpHeroItem*                                   ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetHeroes
	 */
	struct UInventoryContext_GetHeroes_Params
	{
	public:
		TArray<class UOrionMcpHeroItem*>                           Heroes;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetGlyphForHero
	 */
	struct UInventoryContext_GetGlyphForHero_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpGlyphItem*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetDecksForHero
	 */
	struct UInventoryContext_GetDecksForHero_Params
	{
	public:
		TArray<class UOrionMcpDeckItem*>                           Decks;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UOrionHeroData*                                      HeroData;                                                // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowLockedDecks;                                       // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetDecksByText
	 */
	struct UInventoryContext_GetDecksByText_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       bAllowLockedDecks;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIncludeUninitialized;                                   // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_S76W[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetDecks
	 */
	struct UInventoryContext_GetDecks_Params
	{
	public:
		TArray<class UOrionMcpDeckItem*>                           Decks;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetCardsForDeck
	 */
	struct UInventoryContext_GetCardsForDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   DeckItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UOrionMcpCardItem*>                           ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetCardPacks
	 */
	struct UInventoryContext_GetCardPacks_Params
	{
	public:
		TArray<class UOrionMcpCardPackItem*>                       CardPacks;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetBanners
	 */
	struct UInventoryContext_GetBanners_Params
	{
	public:
		TArray<class UOrionMcpBannerItem*>                         Banners;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetBannerAlterations
	 */
	struct UInventoryContext_GetBannerAlterations_Params
	{
	public:
		TArray<class UOrionMcpBannerAlterationItem*>               BannerAlterations;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetAffinitiesForDeck
	 */
	struct UInventoryContext_GetAffinitiesForDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   DeckItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionAffinityStruct                                ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetActiveSkinForHero
	 */
	struct UInventoryContext_GetActiveSkinForHero_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionSkinItemDefinition*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetActiveDecks
	 */
	struct UInventoryContext_GetActiveDecks_Params
	{
	public:
		TArray<class UOrionMcpDeckItem*>                           Decks;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bAllowLockedDecks;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIncludeUninitialized;                                   // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetActiveBannerID
	 */
	struct UInventoryContext_GetActiveBannerID_Params
	{
	public:
		class FString                                              ActiveID;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.GetActiveBanner
	 */
	struct UInventoryContext_GetActiveBanner_Params
	{
	public:
		struct FActiveBannerStruct                                 ActiveBanner;                                            // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.DecomposeCard
	 */
	struct UInventoryContext_DecomposeCard_Params
	{
	public:
		class UOrionMcpCardItem*                                   CardItem;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.CanAddCardToDeck
	 */
	struct UInventoryContext_CanAddCardToDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   DeckItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              CardId;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.InventoryContext.AddCreateDeckEntry
	 */
	struct UInventoryContext_AddCreateDeckEntry_Params
	{
	public:
		TArray<class UOrionMcpDeckItem*>                           Decks;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.StartRejoin
	 */
	struct UMatchmakingContext_StartRejoin_Params
	{
	public:
		class FScriptDelegate                                      InCompletionDelegate;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.SelectRegion
	 */
	struct UMatchmakingContext_SelectRegion_Params
	{
	public:
		class FString                                              RegionId;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSaveRegion;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.RefreshRegionPings
	 */
	struct UMatchmakingContext_RefreshRegionPings_Params
	{
	public:
		class FScriptDelegate                                      InCompletionDelgate;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MatchmakingContext.OnRejoinAttemptComplete__DelegateSignature
	 */
	struct UMatchmakingContext_OnRejoinAttemptComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MatchmakingContext.OnRefreshRegionPingComplete__DelegateSignature
	 */
	struct UMatchmakingContext_OnRefreshRegionPingComplete__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.MatchmakingContext.IsCurrentMatchOfType
	 */
	struct UMatchmakingContext_IsCurrentMatchOfType_Params
	{
	public:
		EOrionMatchmakingType                                      MatchmakingType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.HasValidOnlinePresence
	 */
	struct UMatchmakingContext_HasValidOnlinePresence_Params
	{
	public:
		class FText                                                ErrorString;                                             // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.GetSelectedRegionId
	 */
	struct UMatchmakingContext_GetSelectedRegionId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.GetPingQuality
	 */
	struct UMatchmakingContext_GetPingQuality_Params
	{
	public:
		class UMatchmakingRegion*                                  Region;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EPingQuality                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.GetCurrentBanInfo
	 */
	struct UMatchmakingContext_GetCurrentBanInfo_Params
	{
	public:
		struct FTimespan                                           TimeLeft;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EOrionBanReason                                            ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.GetAvailableRegions
	 */
	struct UMatchmakingContext_GetAvailableRegions_Params
	{
	public:
		TArray<class UMatchmakingRegion*>                          OutRegionOptions;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    OutSelectedRegion;                                       // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchmakingContext.AddMatchmakingCustomKeyToSession
	 */
	struct UMatchmakingContext_AddMatchmakingCustomKeyToSession_Params
	{	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.StartTutorial
	 */
	struct UMatchTutorialContext_StartTutorial_Params
	{
	public:
		class UClass*                                              TutorialClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.RequestPathToPosition
	 */
	struct UMatchTutorialContext_RequestPathToPosition_Params
	{
	public:
		struct FVector                                             TargetPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.RequestPathToActor
	 */
	struct UMatchTutorialContext_RequestPathToActor_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.RequestFade
	 */
	struct UMatchTutorialContext_RequestFade_Params
	{
	public:
		class FName                                                TutorialID;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionHUDFadeRequest                                       FadeType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.InTutorialMode
	 */
	struct UMatchTutorialContext_InTutorialMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.GetHUDTutorialWidgetNames
	 */
	struct UMatchTutorialContext_GetHUDTutorialWidgetNames_Params
	{
	public:
		struct FOrionHUDTutorialWidgetNames                        ReturnValue;                                             // 0x0000(0x0100)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.EndTutorial
	 */
	struct UMatchTutorialContext_EndTutorial_Params
	{
	public:
		class UClass*                                              TutorialClass;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MatchTutorialContext.CurrentlyPlayingTutorial
	 */
	struct UMatchTutorialContext_CurrentlyPlayingTutorial_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.WebUpgradeEpicAccount
	 */
	struct UMcpContext_WebUpgradeEpicAccount_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.WebManageEpicAccount
	 */
	struct UMcpContext_WebManageEpicAccount_Params
	{	};

	/**
	 * Function BlueprintContext.McpContext.WebForgotPasswordEpicAccount
	 */
	struct UMcpContext_WebForgotPasswordEpicAccount_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.WebCreateEpicAccount
	 */
	struct UMcpContext_WebCreateEpicAccount_Params
	{
	public:
		class FText                                                Email;                                                   // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.UnLinkConsoleAccount
	 */
	struct UMcpContext_UnLinkConsoleAccount_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.ShouldShowWatermark
	 */
	struct UMcpContext_ShouldShowWatermark_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.SendFriendCodePlatformMessage
	 */
	struct UMcpContext_SendFriendCodePlatformMessage_Params
	{
	public:
		struct FFriendCode                                         FriendCode;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.QueryUnredeemedFriendCodes
	 */
	struct UMcpContext_QueryUnredeemedFriendCodes_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnWebUpgradeEpicAccountRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnWebUpgradeEpicAccountRequestComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TE15[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnWebForgotPasswordRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnWebForgotPasswordRequestComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VQMI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnWebCreateEpicAccountRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnWebCreateEpicAccountRequestComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_959Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              AuthCode;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnUnlinkAccountRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnUnlinkAccountRequestComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNFA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnSendFriendCodePlatformMessageComplete__DelegateSignature
	 */
	struct UMcpContext_OnSendFriendCodePlatformMessageComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bMessageSent;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnQueryUnredeemedFriendCodesComplete__DelegateSignature
	 */
	struct UMcpContext_OnQueryUnredeemedFriendCodesComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7YBR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FFriendCode>                                 FriendCodes;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnLoginRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnLoginRequestComplete__DelegateSignature_Params
	{
	public:
		ELoginResult                                               Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PLQ6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnLinkedConsoleAccount__DelegateSignature
	 */
	struct UMcpContext_OnLinkedConsoleAccount__DelegateSignature_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ConsoleDisplayName;                                      // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnIssueFriendCodeComplete__DelegateSignature
	 */
	struct UMcpContext_OnIssueFriendCodeComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QK8B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFriendCode                                         FriendCode;                                              // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnEulaAvailable__DelegateSignature
	 */
	struct UMcpContext_OnEulaAvailable__DelegateSignature_Params
	{
	public:
		class FText                                                EulaText;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnCreateAccountRequestComplete__DelegateSignature
	 */
	struct UMcpContext_OnCreateAccountRequestComplete__DelegateSignature_Params
	{
	public:
		ECreateAccountResult                                       Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZACV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnCheckPurchaseRequiredForAccess__DelegateSignature
	 */
	struct UMcpContext_OnCheckPurchaseRequiredForAccess__DelegateSignature_Params
	{
	public:
		bool                                                       bPurchaseRequired;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.McpContext.OnCheckHasRedeemForAccess__DelegateSignature
	 */
	struct UMcpContext_OnCheckHasRedeemForAccess__DelegateSignature_Params
	{
	public:
		bool                                                       bHasInvite;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bHasPurchase;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.Logout
	 */
	struct UMcpContext_Logout_Params
	{	};

	/**
	 * Function BlueprintContext.McpContext.LoginAuthCode
	 */
	struct UMcpContext_LoginAuthCode_Params
	{
	public:
		class FString                                              AuthCode;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.Login
	 */
	struct UMcpContext_Login_Params
	{
	public:
		class FText                                                Username;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                Password;                                                // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bRememberMe;                                             // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BU2P[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsValidEmail
	 */
	struct UMcpContext_IsValidEmail_Params
	{
	public:
		class FText                                                InEmail;                                                 // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsUnlinkConsoleAccountAllowed
	 */
	struct UMcpContext_IsUnlinkConsoleAccountAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IssueFriendCode
	 */
	struct UMcpContext_IssueFriendCode_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsRememberMeChecked
	 */
	struct UMcpContext_IsRememberMeChecked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsRememberMeAllowed
	 */
	struct UMcpContext_IsRememberMeAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsLoggedIn
	 */
	struct UMcpContext_IsLoggedIn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsHeadlessAccountAllowed
	 */
	struct UMcpContext_IsHeadlessAccountAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsHeadlessAccount
	 */
	struct UMcpContext_IsHeadlessAccount_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.IsBusy
	 */
	struct UMcpContext_IsBusy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.HasPlaystationPlus
	 */
	struct UMcpContext_HasPlaystationPlus_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.HACK_SetDisplayName
	 */
	struct UMcpContext_HACK_SetDisplayName_Params
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetUsername
	 */
	struct UMcpContext_GetUsername_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetNumFriendCodesToIssue
	 */
	struct UMcpContext_GetNumFriendCodesToIssue_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetLoginStatus
	 */
	struct UMcpContext_GetLoginStatus_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetGameSessionWatermarkText
	 */
	struct UMcpContext_GetGameSessionWatermarkText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetFriendCodeDisplayName
	 */
	struct UMcpContext_GetFriendCodeDisplayName_Params
	{
	public:
		struct FFriendCode                                         FriendCode;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetFriendCodeDescription
	 */
	struct UMcpContext_GetFriendCodeDescription_Params
	{
	public:
		struct FFriendCode                                         FriendCode;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetEULAText
	 */
	struct UMcpContext_GetEULAText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.GetAppName
	 */
	struct UMcpContext_GetAppName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.DeclineEula
	 */
	struct UMcpContext_DeclineEula_Params
	{	};

	/**
	 * Function BlueprintContext.McpContext.CreateHeadlessAccount
	 */
	struct UMcpContext_CreateHeadlessAccount_Params
	{
	public:
		class FText                                                DisplayName;                                             // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.CheckPurchaseRequiredForAccess
	 */
	struct UMcpContext_CheckPurchaseRequiredForAccess_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.CheckHasRedeemForAccess
	 */
	struct UMcpContext_CheckHasRedeemForAccess_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.AutoLogin
	 */
	struct UMcpContext_AutoLogin_Params
	{
	public:
		class FScriptDelegate                                      OnCompleteDelegate;                                      // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.McpContext.AcceptEula
	 */
	struct UMcpContext_AcceptEula_Params
	{	};

	/**
	 * Function BlueprintContext.MenuContext.UnregisterTabListWidget
	 */
	struct UMenuContext_UnregisterTabListWidget_Params
	{
	public:
		class UOrionTabListWidget*                                 TabListWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.ShowFrontEndStartupContent
	 */
	struct UMenuContext_ShowFrontEndStartupContent_Params
	{	};

	/**
	 * Function BlueprintContext.MenuContext.ShowCardCrafting
	 */
	struct UMenuContext_ShowCardCrafting_Params
	{
	public:
		class UOrionCardData*                                      CardToCraft;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.ShouldDisplayWUIUI
	 */
	struct UMenuContext_ShouldDisplayWUIUI_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.ReturnToTitleDueToRequiredUpdate
	 */
	struct UMenuContext_ReturnToTitleDueToRequiredUpdate_Params
	{
	public:
		EReturnToMainMenuReason                                    Reason;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FL91[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnDialogClosed;                                          // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.RegisterTabListWidget
	 */
	struct UMenuContext_RegisterTabListWidget_Params
	{
	public:
		class UOrionTabListWidget*                                 TabListWidget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.RegisterPurchaseConfirmation
	 */
	struct UMenuContext_RegisterPurchaseConfirmation_Params
	{
	public:
		class UOrionPurchaseConfirmationWidget*                    PurchaseConfirmationWidget;                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.RegisterMTXConfirmation
	 */
	struct UMenuContext_RegisterMTXConfirmation_Params
	{
	public:
		class UOrionPurchaseConfirmationWidget*                    MTXConfirmationWidget;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowPostGameSummary__DelegateSignature
	 */
	struct UMenuContext_OnShowPostGameSummary__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowPackOpenScreen__DelegateSignature
	 */
	struct UMenuContext_OnShowPackOpenScreen__DelegateSignature_Params
	{
	public:
		class UOrionMcpCardPackItem*                               CardPack;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowHeroDetails__DelegateSignature
	 */
	struct UMenuContext_OnShowHeroDetails__DelegateSignature_Params
	{
	public:
		class UOrionHeroData*                                      HeroData;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionSkinItemDefinition*                            SkinToShow;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowFrontEndContent__DelegateSignature
	 */
	struct UMenuContext_OnShowFrontEndContent__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowDeckBuilder__DelegateSignature
	 */
	struct UMenuContext_OnShowDeckBuilder__DelegateSignature_Params
	{
	public:
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowCraftingScreen__DelegateSignature
	 */
	struct UMenuContext_OnShowCraftingScreen__DelegateSignature_Params
	{
	public:
		class UOrionCardData*                                      CardToCraft;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowBundlePurchaseScreen__DelegateSignature
	 */
	struct UMenuContext_OnShowBundlePurchaseScreen__DelegateSignature_Params
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnShowBannerEditor__DelegateSignature
	 */
	struct UMenuContext_OnShowBannerEditor__DelegateSignature_Params
	{
	public:
		class UOrionMcpBannerItem*                                 BannerToEdit;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnReturnToTitleScreenReasonClosed__DelegateSignature
	 */
	struct UMenuContext_OnReturnToTitleScreenReasonClosed__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnNavigationAttempt__DelegateSignature
	 */
	struct UMenuContext_OnNavigationAttempt__DelegateSignature_Params
	{
	public:
		class FString                                              NavigationPath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ENavigationResult                                          ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnNavigateToTab__DelegateSignature
	 */
	struct UMenuContext_OnNavigateToTab__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnNavigateToStoreItem__DelegateSignature
	 */
	struct UMenuContext_OnNavigateToStoreItem__DelegateSignature_Params
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnMenuSceneChanged__DelegateSignature
	 */
	struct UMenuContext_OnMenuSceneChanged__DelegateSignature_Params
	{
	public:
		class FName                                                NewScene;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnMenuCategoryPushed__DelegateSignature
	 */
	struct UMenuContext_OnMenuCategoryPushed__DelegateSignature_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                MenuCategory;                                            // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.MenuContext.OnFrontEndTabActivated__DelegateSignature
	 */
	struct UMenuContext_OnFrontEndTabActivated__DelegateSignature_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.NavigationRequest
	 */
	struct UMenuContext_NavigationRequest_Params
	{
	public:
		class FString                                              NavigationPath;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.NavigateToStoreOffer
	 */
	struct UMenuContext_NavigateToStoreOffer_Params
	{
	public:
		class FString                                              OfferId;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.NavigateToPlayScreen
	 */
	struct UMenuContext_NavigateToPlayScreen_Params
	{	};

	/**
	 * Function BlueprintContext.MenuContext.NavigateToHomeScreen
	 */
	struct UMenuContext_NavigateToHomeScreen_Params
	{	};

	/**
	 * Function BlueprintContext.MenuContext.GetCurrentSceneName
	 */
	struct UMenuContext_GetCurrentSceneName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.DisplayReturnToTitleScreenReason
	 */
	struct UMenuContext_DisplayReturnToTitleScreenReason_Params
	{
	public:
		class FScriptDelegate                                      OnDialogClosed;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.DisplayReturnToMainMenuReason
	 */
	struct UMenuContext_DisplayReturnToMainMenuReason_Params
	{	};

	/**
	 * Function BlueprintContext.MenuContext.BroadcastSceneChange
	 */
	struct UMenuContext_BroadcastSceneChange_Params
	{
	public:
		class FName                                                SceneName;                                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.MenuContext.BroadcastFrontEndTabActivated
	 */
	struct UMenuContext_BroadcastFrontEndTabActivated_Params
	{
	public:
		class FName                                                TabId;                                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.NotificationContext.OnNotificationEvent__DelegateSignature
	 */
	struct UNotificationContext_OnNotificationEvent__DelegateSignature_Params
	{
	public:
		struct FOrionNotification                                  Notification;                                            // 0x0000(0x01A0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionGameContext.SetActiveDeck
	 */
	struct UOrionGameContext_SetActiveDeck_Params
	{
	public:
		class FString                                              DeckId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionGameContext.GetRightAnalogStickValues
	 */
	struct UOrionGameContext_GetRightAnalogStickValues_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionGameContext.GetLeftAnalogStickValues
	 */
	struct UOrionGameContext_GetLeftAnalogStickValues_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionGameContext.GetIsUsingGamePad
	 */
	struct UOrionGameContext_GetIsUsingGamePad_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionGameContext.GetHeroData
	 */
	struct UOrionGameContext_GetHeroData_Params
	{
	public:
		class UOrionHeroData*                                      ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.SetPartyPrivacySetting
	 */
	struct UPartyContext_SetPartyPrivacySetting_Params
	{
	public:
		EPartyType                                                 PartyType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bLeaderFriendsOnly;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bLeaderInvitesOnly;                                      // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.SetMatchmakingType
	 */
	struct UPartyContext_SetMatchmakingType_Params
	{
	public:
		EOrionMatchmakingType                                      Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.SetMatchmakingCustomKey
	 */
	struct UPartyContext_SetMatchmakingCustomKey_Params
	{
	public:
		class FString                                              CustomKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.SendPartyInvite
	 */
	struct UPartyContext_SendPartyInvite_Params
	{
	public:
		class UOrionFriendItem*                                    FriendItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.SendConsoleFriendInvite
	 */
	struct UPartyContext_SendConsoleFriendInvite_Params
	{	};

	/**
	 * Function BlueprintContext.PartyContext.PromoteToPartyLeader
	 */
	struct UPartyContext_PromoteToPartyLeader_Params
	{
	public:
		class UOrionPartyMemberState*                              PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnPartyTypeChanged__DelegateSignature
	 */
	struct UPartyContext_OnPartyTypeChanged__DelegateSignature_Params
	{
	public:
		EPartyType                                                 PartyType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnPartyDataChanged__DelegateSignature
	 */
	struct UPartyContext_OnPartyDataChanged__DelegateSignature_Params
	{
	public:
		struct FPartyState                                         PartyData;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnPartyChanged__DelegateSignature
	 */
	struct UPartyContext_OnPartyChanged__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnMMRUpdated__DelegateSignature
	 */
	struct UPartyContext_OnMMRUpdated__DelegateSignature_Params
	{
	public:
		bool                                                       bIsValid;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnMatchmakingTypeChanged__DelegateSignature
	 */
	struct UPartyContext_OnMatchmakingTypeChanged__DelegateSignature_Params
	{
	public:
		EOrionMatchmakingType                                      NewType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnMatchmakingCustomKeyChanged__DelegateSignature
	 */
	struct UPartyContext_OnMatchmakingCustomKeyChanged__DelegateSignature_Params
	{
	public:
		class FString                                              CustomKey;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnLeaderInvitesOnlyChanged__DelegateSignature
	 */
	struct UPartyContext_OnLeaderInvitesOnlyChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bLeaderInviteOnly;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PartyContext.OnLeaderFriendsOnlyChanged__DelegateSignature
	 */
	struct UPartyContext_OnLeaderFriendsOnlyChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bLeaderFriendsOnly;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.NumPartyMembers
	 */
	struct UPartyContext_NumPartyMembers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.MaxPartyMembers
	 */
	struct UPartyContext_MaxPartyMembers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.LeaveParty
	 */
	struct UPartyContext_LeaveParty_Params
	{	};

	/**
	 * Function BlueprintContext.PartyContext.KickFromParty
	 */
	struct UPartyContext_KickFromParty_Params
	{
	public:
		class UOrionPartyMemberState*                              PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.IsPartyLeader
	 */
	struct UPartyContext_IsPartyLeader_Params
	{
	public:
		class UOrionPartyMemberState*                              PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.IsMatchmakingCustomKeyActive
	 */
	struct UPartyContext_IsMatchmakingCustomKeyActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.IsHeroPickedByOtherPlayer
	 */
	struct UPartyContext_IsHeroPickedByOtherPlayer_Params
	{
	public:
		class UOrionHeroData*                                      InHero;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetUniqueNetId
	 */
	struct UPartyContext_GetUniqueNetId_Params
	{
	public:
		class UOrionPartyMemberState*                              PartyMember;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                                    UniqueNetId;                                             // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetPartyPrivacySetting
	 */
	struct UPartyContext_GetPartyPrivacySetting_Params
	{
	public:
		EPartyType                                                 OutPartyType;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       OutLeaderFriendsOnly;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       OutLeaderInvitesOnly;                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetPartyMembers
	 */
	struct UPartyContext_GetPartyMembers_Params
	{
	public:
		TArray<class UOrionPersistentPartyMember*>                 PartyMembers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetMyPersistentPartyEntry
	 */
	struct UPartyContext_GetMyPersistentPartyEntry_Params
	{
	public:
		class UOrionPersistentPartyMember*                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetMatchmakingType
	 */
	struct UPartyContext_GetMatchmakingType_Params
	{
	public:
		EOrionMatchmakingType                                      ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.GetMatchmakingCustomKey
	 */
	struct UPartyContext_GetMatchmakingCustomKey_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PartyContext.AmIPartyLeader
	 */
	struct UPartyContext_AmIPartyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetVoiceGameVolume
	 */
	struct UPlayerContext_SetVoiceGameVolume_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetVeterancy
	 */
	struct UPlayerContext_SetVeterancy_Params
	{
	public:
		EOrionVeterancy                                            Veterancy;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DJIH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Callback;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetShowXPPerMinOnHUD
	 */
	struct UPlayerContext_SetShowXPPerMinOnHUD_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetShowPingAndFPSOnHUD
	 */
	struct UPlayerContext_SetShowPingAndFPSOnHUD_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetShowBasicAttackRangeIndicator
	 */
	struct UPlayerContext_SetShowBasicAttackRangeIndicator_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetShowAbilityConfirmWidget
	 */
	struct UPlayerContext_SetShowAbilityConfirmWidget_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetOtherGameVolume
	 */
	struct UPlayerContext_SetOtherGameVolume_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetName
	 */
	struct UPlayerContext_SetName_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetMusicGameVolume
	 */
	struct UPlayerContext_SetMusicGameVolume_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetMouseLookSensitivity
	 */
	struct UPlayerContext_SetMouseLookSensitivity_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetMasterGameVolume
	 */
	struct UPlayerContext_SetMasterGameVolume_Params
	{
	public:
		float                                                      NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetInvertedMouse
	 */
	struct UPlayerContext_SetInvertedMouse_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetHealthBarOverhead
	 */
	struct UPlayerContext_SetHealthBarOverhead_Params
	{
	public:
		bool                                                       bOn;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetHasAchieved
	 */
	struct UPlayerContext_SetHasAchieved_Params
	{
	public:
		EOrionSimpleAchievementType                                InAchievementType;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadYawSensitivity
	 */
	struct UPlayerContext_SetGamepadYawSensitivity_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadRadialSelectEnabled
	 */
	struct UPlayerContext_SetGamepadRadialSelectEnabled_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadPitchSensitivity
	 */
	struct UPlayerContext_SetGamepadPitchSensitivity_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadInvertYaw
	 */
	struct UPlayerContext_SetGamepadInvertYaw_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadInvertPitch
	 */
	struct UPlayerContext_SetGamepadInvertPitch_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetGamepadConfigIndex
	 */
	struct UPlayerContext_SetGamepadConfigIndex_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SetEnableDeathcam
	 */
	struct UPlayerContext_SetEnableDeathcam_Params
	{
	public:
		int32_t                                                    NewValue;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.SaveClientSettings
	 */
	struct UPlayerContext_SaveClientSettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.RevertToCurrentClientGameplaySettings
	 */
	struct UPlayerContext_RevertToCurrentClientGameplaySettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.RevertToCurrentClientAudioSettings
	 */
	struct UPlayerContext_RevertToCurrentClientAudioSettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ResetClientGameplaySettings
	 */
	struct UPlayerContext_ResetClientGameplaySettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ResetClientAudioSettings
	 */
	struct UPlayerContext_ResetClientAudioSettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ProcessAcknowledgedItems
	 */
	struct UPlayerContext_ProcessAcknowledgedItems_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.PrestigeAccount
	 */
	struct UPlayerContext_PrestigeAccount_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.OverrideBoundKeyByNameAndType
	 */
	struct UPlayerContext_OverrideBoundKeyByNameAndType_Params
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EKeyBindingType                                            BindingType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G5F2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FInputChord                                         PreviousKey;                                             // 0x0010(0x0020)  (Parm, NativeAccessSpecifierPublic)
		struct FInputChord                                         NewKey;                                                  // 0x0030(0x0020)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PlayerContext.OnPrestigeAccountComplete__DelegateSignature
	 */
	struct UPlayerContext_OnPrestigeAccountComplete__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.PlayerContext.OnMcpResult__DelegateSignature
	 */
	struct UPlayerContext_OnMcpResult__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WWHS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsSoloVsAIProgressionDisabled
	 */
	struct UPlayerContext_IsSoloVsAIProgressionDisabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsRecentlyAbandoned
	 */
	struct UPlayerContext_IsRecentlyAbandoned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsItemAcknowledgementNeeded
	 */
	struct UPlayerContext_IsItemAcknowledgementNeeded_Params
	{
	public:
		class UOrionMcpItem*                                       Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsHeroTierUnlocked
	 */
	struct UPlayerContext_IsHeroTierUnlocked_Params
	{
	public:
		EOrionHeroTier                                             Tier;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsFeatureUnlocked
	 */
	struct UPlayerContext_IsFeatureUnlocked_Params
	{
	public:
		EUnlockableFeature                                         Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.IsDailyRewardAvailable
	 */
	struct UPlayerContext_IsDailyRewardAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.HasSpecifiedVeterancy
	 */
	struct UPlayerContext_HasSpecifiedVeterancy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.HasAccomplishedSimpleAchievement
	 */
	struct UPlayerContext_HasAccomplishedSimpleAchievement_Params
	{
	public:
		EOrionSimpleAchievementType                                InAchievementType;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetVoiceGameVolume
	 */
	struct UPlayerContext_GetVoiceGameVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetValorLevel
	 */
	struct UPlayerContext_GetValorLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetTimeUntilNextDailyReward
	 */
	struct UPlayerContext_GetTimeUntilNextDailyReward_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetTeam
	 */
	struct UPlayerContext_GetTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetShowXPPerMinOnHUD
	 */
	struct UPlayerContext_GetShowXPPerMinOnHUD_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetShowPingAndFPSOnHUD
	 */
	struct UPlayerContext_GetShowPingAndFPSOnHUD_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetShowBasicAttackRangeIndicator
	 */
	struct UPlayerContext_GetShowBasicAttackRangeIndicator_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetShowAbilityConfirmWidget
	 */
	struct UPlayerContext_GetShowAbilityConfirmWidget_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetPlatform
	 */
	struct UPlayerContext_GetPlatform_Params
	{
	public:
		EOrionPlayerPlatform                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetOtherGameVolume
	 */
	struct UPlayerContext_GetOtherGameVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetName
	 */
	struct UPlayerContext_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetMusicGameVolume
	 */
	struct UPlayerContext_GetMusicGameVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetMouseLookSensitivity
	 */
	struct UPlayerContext_GetMouseLookSensitivity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetMasterGameVolume
	 */
	struct UPlayerContext_GetMasterGameVolume_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetLastHeroPlayed
	 */
	struct UPlayerContext_GetLastHeroPlayed_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetInvertedMouse
	 */
	struct UPlayerContext_GetInvertedMouse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetHealthBarOverhead
	 */
	struct UPlayerContext_GetHealthBarOverhead_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGameplayStats
	 */
	struct UPlayerContext_GetGameplayStats_Params
	{
	public:
		struct FGameplayStats                                      GameplayStats;                                           // 0x0000(0x0068)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       bPvpOnly;                                                // 0x0068(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadYawSensitivity
	 */
	struct UPlayerContext_GetGamepadYawSensitivity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadRadialSelectEnabled
	 */
	struct UPlayerContext_GetGamepadRadialSelectEnabled_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadPitchSensitivity
	 */
	struct UPlayerContext_GetGamepadPitchSensitivity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadInvertYaw
	 */
	struct UPlayerContext_GetGamepadInvertYaw_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadInvertPitch
	 */
	struct UPlayerContext_GetGamepadInvertPitch_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetGamepadConfigIndex
	 */
	struct UPlayerContext_GetGamepadConfigIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetFeatureLockedMessage
	 */
	struct UPlayerContext_GetFeatureLockedMessage_Params
	{
	public:
		EUnlockableFeature                                         Feature;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_P6V6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetEnableDeathcam
	 */
	struct UPlayerContext_GetEnableDeathcam_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetDailyRewardChestTokenCount
	 */
	struct UPlayerContext_GetDailyRewardChestTokenCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetBoundKeysByNameAndType
	 */
	struct UPlayerContext_GetBoundKeysByNameAndType_Params
	{
	public:
		class FName                                                BindingName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EKeyBindingType                                            BindingType;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6NVS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBoundKeys                                          ReturnValue;                                             // 0x0010(0x0040)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAchievementDescription
	 */
	struct UPlayerContext_GetAchievementDescription_Params
	{
	public:
		EOrionSimpleAchievementType                                InAchievementType;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B6LZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSimpleAchievementDescription                       ReturnValue;                                             // 0x0008(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAccountLevelInfo
	 */
	struct UPlayerContext_GetAccountLevelInfo_Params
	{
	public:
		struct FOrionLevelInfo                                     AccountLevelInfo;                                        // 0x0000(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAccountLevel
	 */
	struct UPlayerContext_GetAccountLevel_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAccountExperienceMax
	 */
	struct UPlayerContext_GetAccountExperienceMax_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAccountExperience
	 */
	struct UPlayerContext_GetAccountExperience_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.GetAccountCurrency
	 */
	struct UPlayerContext_GetAccountCurrency_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.ChangeLanguage
	 */
	struct UPlayerContext_ChangeLanguage_Params
	{
	public:
		class FString                                              LanguageCode;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bSave;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PlayerContext.ApplyClientPartySettings
	 */
	struct UPlayerContext_ApplyClientPartySettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ApplyClientGameplaySettings
	 */
	struct UPlayerContext_ApplyClientGameplaySettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ApplyClientAudioSettings
	 */
	struct UPlayerContext_ApplyClientAudioSettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.ApplyAllClientSettings
	 */
	struct UPlayerContext_ApplyAllClientSettings_Params
	{	};

	/**
	 * Function BlueprintContext.PlayerContext.AcknowledgeItem
	 */
	struct UPlayerContext_AcknowledgeItem_Params
	{
	public:
		class UOrionMcpItem*                                       Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.UpdateScoreboardInfo
	 */
	struct UPostGameContext_UpdateScoreboardInfo_Params
	{	};

	/**
	 * Function BlueprintContext.PostGameContext.ShouldShowSurvey
	 */
	struct UPostGameContext_ShouldShowSurvey_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.ShouldShowPostGameScreen
	 */
	struct UPostGameContext_ShouldShowPostGameScreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PostGameContext.OnWinningTeamReceived__DelegateSignature
	 */
	struct UPostGameContext_OnWinningTeamReceived__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 WinningTeam;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.PostGameContext.OnShowReward__DelegateSignature
	 */
	struct UPostGameContext_OnShowReward__DelegateSignature_Params
	{
	public:
		struct FOrionLootReward                                    LootReward;                                              // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.OnContinueButtonPressed
	 */
	struct UPostGameContext_OnContinueButtonPressed_Params
	{	};

	/**
	 * Function BlueprintContext.PostGameContext.NotifyPostGameScreenDismissed
	 */
	struct UPostGameContext_NotifyPostGameScreenDismissed_Params
	{	};

	/**
	 * Function BlueprintContext.PostGameContext.GetWonLastCompletedMatch
	 */
	struct UPostGameContext_GetWonLastCompletedMatch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupQuestionCount
	 */
	struct UPostGameContext_GetSurveyQuestionGroupQuestionCount_Params
	{
	public:
		class FName                                                QuestionId;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetSurveyQuestionGroupId
	 */
	struct UPostGameContext_GetSurveyQuestionGroupId_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetScoreboardTeamEntry
	 */
	struct UPostGameContext_GetScoreboardTeamEntry_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_84KN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionScoreboardTeamEntryInfo                       ReturnValue;                                             // 0x0004(0x0034)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntryFromUIID
	 */
	struct UPostGameContext_GetScoreboardPlayerEntryFromUIID_Params
	{
	public:
		struct FOrionPlayerStateUIID                               PlayerStateUIID;                                         // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0028(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetScoreboardPlayerEntry
	 */
	struct UPostGameContext_GetScoreboardPlayerEntry_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PSQM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0008(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetQuestionForQuestionGroup
	 */
	struct UPostGameContext_GetQuestionForQuestionGroup_Params
	{
	public:
		class FName                                                QuestionId;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RTBX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetNumberOfPlayers
	 */
	struct UPostGameContext_GetNumberOfPlayers_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BQBP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetMyTeam
	 */
	struct UPostGameContext_GetMyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetMessageForQuestionGroup
	 */
	struct UPostGameContext_GetMessageForQuestionGroup_Params
	{
	public:
		class FName                                                QuestionId;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetMatchSessionId
	 */
	struct UPostGameContext_GetMatchSessionId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetLocalPlayerUIID
	 */
	struct UPostGameContext_GetLocalPlayerUIID_Params
	{
	public:
		struct FOrionPlayerStateUIID                               ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetLocalPlayerScoreboardEntry
	 */
	struct UPostGameContext_GetLocalPlayerScoreboardEntry_Params
	{
	public:
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0000(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetLocalPlayerInfo
	 */
	struct UPostGameContext_GetLocalPlayerInfo_Params
	{
	public:
		struct FOrionPostGameLocalPlayerInfo                       ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetHeroLevelSummary
	 */
	struct UPostGameContext_GetHeroLevelSummary_Params
	{
	public:
		struct FOrionPostGameLevelUpInfo                           Info;                                                    // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetEnemyTeam
	 */
	struct UPostGameContext_GetEnemyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetEarnedXP
	 */
	struct UPostGameContext_GetEarnedXP_Params
	{
	public:
		struct FOrionEarnedXPInfo                                  Info;                                                    // 0x0000(0x0028)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetEarnedTimeCurrency
	 */
	struct UPostGameContext_GetEarnedTimeCurrency_Params
	{
	public:
		struct FOrionEarnedTimeCurrencyInfo                        Info;                                                    // 0x0000(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetEarnedMatchRewards
	 */
	struct UPostGameContext_GetEarnedMatchRewards_Params
	{
	public:
		TArray<struct FOrionLootReward>                            MatchRewards;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetCurrentMatchTime
	 */
	struct UPostGameContext_GetCurrentMatchTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.PostGameContext.GetAccountLevelSummary
	 */
	struct UPostGameContext_GetAccountLevelSummary_Params
	{
	public:
		struct FOrionPostGameLevelUpInfo                           Info;                                                    // 0x0000(0x0048)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.QuestContext.OnSelectedSkinChanged__DelegateSignature
	 */
	struct UQuestContext_OnSelectedSkinChanged__DelegateSignature_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.IsQuestComplete
	 */
	struct UQuestContext_IsQuestComplete_Params
	{
	public:
		class UOrionMcpQuestItemDefinition*                        QuestDef;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.GetWeeklyQuests
	 */
	struct UQuestContext_GetWeeklyQuests_Params
	{
	public:
		bool                                                       bOnDeck;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YRP1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UOrionMcpQuestItem*>                          ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.GetWeeklyQuestRolloverTime
	 */
	struct UQuestContext_GetWeeklyQuestRolloverTime_Params
	{
	public:
		struct FDateTime                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.GetWeeklyQuestReward
	 */
	struct UQuestContext_GetWeeklyQuestReward_Params
	{
	public:
		int32_t                                                    NumCompleted;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bOnDeck;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TJWL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UOrionMcpCardPackItemDefinition*                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewardsClaimed
	 */
	struct UQuestContext_GetWeeklyQuestNumRewardsClaimed_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.QuestContext.GetWeeklyQuestNumRewards
	 */
	struct UQuestContext_GetWeeklyQuestNumRewards_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.ShowReticle
	 */
	struct UReticleContext_ShowReticle_Params
	{
	public:
		class UOrionAbility*                                       Ability;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.SetDefaultReticle
	 */
	struct UReticleContext_SetDefaultReticle_Params
	{
	public:
		class UOrionUserWidget_Reticle*                            NewDefaultReticle;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.ReticleContext.OnSuccessfulHit__DelegateSignature
	 */
	struct UReticleContext_OnSuccessfulHit__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.ReticleContext.OnSuccessfulHit
	 */
	struct UReticleContext_OnSuccessfulHit_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Instigator;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.ReticleContext.OnActivelyTargeting__DelegateSignature
	 */
	struct UReticleContext_OnActivelyTargeting__DelegateSignature_Params
	{
	public:
		bool                                                       CurrentlyTargeting;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.IsUsingUMGReticle
	 */
	struct UReticleContext_IsUsingUMGReticle_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.IsReticleHidden
	 */
	struct UReticleContext_IsReticleHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.IsActivelyTargetingAnyActor
	 */
	struct UReticleContext_IsActivelyTargetingAnyActor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.HideReticle
	 */
	struct UReticleContext_HideReticle_Params
	{
	public:
		class UOrionAbility*                                       Ability;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.GetReticleWidget
	 */
	struct UReticleContext_GetReticleWidget_Params
	{
	public:
		class UOrionAbility*                                       Ability;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionUserWidget_Reticle*                            ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.GetReticleClass
	 */
	struct UReticleContext_GetReticleClass_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.GetHideCount
	 */
	struct UReticleContext_GetHideCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ReticleContext.AddReticle
	 */
	struct UReticleContext_AddReticle_Params
	{
	public:
		class UOrionAbilitySystemComponent*                        AbilityComp;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionAbility*                                       Ability;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              OptionalReticleClass;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.IsSpectatorScoreboard
	 */
	struct UScoreboardContext_IsSpectatorScoreboard_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetScoreboardTeamEntry
	 */
	struct UScoreboardContext_GetScoreboardTeamEntry_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_X5MN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionScoreboardTeamEntryInfo                       ReturnValue;                                             // 0x0004(0x0034)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntryFromUIID
	 */
	struct UScoreboardContext_GetScoreboardPlayerEntryFromUIID_Params
	{
	public:
		struct FOrionPlayerStateUIID                               PlayerStateUIID;                                         // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0028(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetScoreboardPlayerEntry
	 */
	struct UScoreboardContext_GetScoreboardPlayerEntry_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_897N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0008(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetMyTeam
	 */
	struct UScoreboardContext_GetMyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetLocalPlayerUIID
	 */
	struct UScoreboardContext_GetLocalPlayerUIID_Params
	{
	public:
		struct FOrionPlayerStateUIID                               ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetLocalPlayerScoreboardEntry
	 */
	struct UScoreboardContext_GetLocalPlayerScoreboardEntry_Params
	{
	public:
		struct FOrionScoreboardPlayerEntryInfo                     ReturnValue;                                             // 0x0000(0x00C8)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetEnemyTeam
	 */
	struct UScoreboardContext_GetEnemyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.GetCurrentMatchTime
	 */
	struct UScoreboardContext_GetCurrentMatchTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.ScoreboardContext.ForceUpdateAllEntries
	 */
	struct UScoreboardContext_ForceUpdateAllEntries_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorWatchedHeroChange__DelegateSignature
	 */
	struct USpectatorHUDContext_OnSpectatorWatchedHeroChange__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 HeroTeam;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LPEQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    HeroIndex;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorToggleControllerCursor__DelegateSignature
	 */
	struct USpectatorHUDContext_OnSpectatorToggleControllerCursor__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.SpectatorHUDContext.OnSpectatorCameraModeChange__DelegateSignature
	 */
	struct USpectatorHUDContext_OnSpectatorCameraModeChange__DelegateSignature_Params
	{
	public:
		ESpectatorCameraType                                       NewCameraMode;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.SpectatorHUDContext.OnSetHudVisibility__DelegateSignature
	 */
	struct USpectatorHUDContext_OnSetHudVisibility__DelegateSignature_Params
	{
	public:
		bool                                                       bMainVisible;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       bIndicatorsVisible;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.SpectatorHUDContext.OnPlayerInfoUpdateDelegate__DelegateSignature
	 */
	struct USpectatorHUDContext_OnPlayerInfoUpdateDelegate__DelegateSignature_Params
	{
	public:
		EOrionTeam                                                 TeamNum;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4E78[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PlayerIndex;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionSpectatorHUDPlayerInfo                        NewPlayerInfo;                                           // 0x0008(0x00B0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.SpectatorHUDContext.GetSpectatorHUDPlayerInfo
	 */
	struct USpectatorHUDContext_GetSpectatorHUDPlayerInfo_Params
	{
	public:
		EOrionTeam                                                 Team;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VF7G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FOrionSpectatorHUDPlayerInfo                        ReturnValue;                                             // 0x0008(0x00B0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.SpectatorHUDContext.GetMyTeam
	 */
	struct USpectatorHUDContext_GetMyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.SpectatorHUDContext.GetHUDPlayerInfo
	 */
	struct USpectatorHUDContext_GetHUDPlayerInfo_Params
	{
	public:
		struct FOrionBaseHUDPlayerInfo                             ReturnValue;                                             // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.SpectatorHUDContext.GetEnemyTeam
	 */
	struct USpectatorHUDContext_GetEnemyTeam_Params
	{
	public:
		EOrionTeam                                                 ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.SpectatorHUDContext.GetCurrentMatchTime
	 */
	struct USpectatorHUDContext_GetCurrentMatchTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.ShowPlatformStore
	 */
	struct UStoreContext_ShowPlatformStore_Params
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnClosedDelegate;                                        // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.ReportNoOffersAvailable
	 */
	struct UStoreContext_ReportNoOffersAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.ReportExitRealMoneyStore
	 */
	struct UStoreContext_ReportExitRealMoneyStore_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.ReportEnterRealMoneyStore
	 */
	struct UStoreContext_ReportEnterRealMoneyStore_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.RegisterForEpicPurchasingDisplay
	 */
	struct UStoreContext_RegisterForEpicPurchasingDisplay_Params
	{
	public:
		class FScriptDelegate                                      DisplayCallback;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      DismissCallback;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.OpenGiftBox
	 */
	struct UStoreContext_OpenGiftBox_Params
	{
	public:
		class FString                                              GiftBoxID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.StoreContext.OnPlatformStoreClosed__DelegateSignature
	 */
	struct UStoreContext_OnPlatformStoreClosed__DelegateSignature_Params
	{
	public:
		bool                                                       bPurchased;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.StoreContext.OnOrionCatalogChanged__DelegateSignature
	 */
	struct UStoreContext_OnOrionCatalogChanged__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.StoreContext.OnGiftBoxOpened__DelegateSignature
	 */
	struct UStoreContext_OnGiftBoxOpened__DelegateSignature_Params
	{
	public:
		struct FOrionLootNotification                              LootNotification;                                        // 0x0000(0x0048)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bOpenNext;                                               // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDisplay__DelegateSignature
	 */
	struct UStoreContext_OnEpicPurchasingWidgetDisplay__DelegateSignature_Params
	{
	public:
		class UWidget*                                             WebWidget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OfferId;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.StoreContext.OnEpicPurchasingWidgetDismissed__DelegateSignature
	 */
	struct UStoreContext_OnEpicPurchasingWidgetDismissed__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.IsDailyRewardAvailable
	 */
	struct UStoreContext_IsDailyRewardAvailable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.IsCatalogDownloadInProgress
	 */
	struct UStoreContext_IsCatalogDownloadInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetTimeUntilNextDailyReward
	 */
	struct UStoreContext_GetTimeUntilNextDailyReward_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetTimeCurrency
	 */
	struct UStoreContext_GetTimeCurrency_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetSkinOffers
	 */
	struct UStoreContext_GetSkinOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               SkinOffers;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetPurchaseFollowUpAction
	 */
	struct UStoreContext_GetPurchaseFollowUpAction_Params
	{
	public:
		TArray<struct FStorePurchase>                              Purchases;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                FollowUpAction;                                          // 0x0010(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetMtxOffers
	 */
	struct UStoreContext_GetMtxOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               MtxOffers;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetMtxCurrency
	 */
	struct UStoreContext_GetMtxCurrency_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetHeroOffers
	 */
	struct UStoreContext_GetHeroOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               HeroOffers;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetHeroOffer
	 */
	struct UStoreContext_GetHeroOffer_Params
	{
	public:
		class FString                                              HeroPersistentName;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStoreOfferBP                                       HeroOffer;                                               // 0x0010(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0130(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetFounderOffers
	 */
	struct UStoreContext_GetFounderOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               FounderOffers;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetEmoteOffers
	 */
	struct UStoreContext_GetEmoteOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               EmoteOffers;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetDeckOffers
	 */
	struct UStoreContext_GetDeckOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               DeckOffers;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetDailyRewardInfo
	 */
	struct UStoreContext_GetDailyRewardInfo_Params
	{
	public:
		TArray<struct FOrionDailyRewardInfo>                       UpcomingRewards;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetCurrencyBalance
	 */
	struct UStoreContext_GetCurrencyBalance_Params
	{
	public:
		EOrionCurrencyType                                         Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KEUJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetCardpackOffers
	 */
	struct UStoreContext_GetCardpackOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               CardpackOffers;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetBundleOffers
	 */
	struct UStoreContext_GetBundleOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               BundleOffers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetBoostOffers
	 */
	struct UStoreContext_GetBoostOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               BoostOffers;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       bShowIneligibleOffers;                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.GetBannerOffers
	 */
	struct UStoreContext_GetBannerOffers_Params
	{
	public:
		TArray<struct FStoreOfferBP>                               BannerOffers;                                            // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.FlushStoreCatalogCache
	 */
	struct UStoreContext_FlushStoreCatalogCache_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.ExecutePurchaseFollowUpAction
	 */
	struct UStoreContext_ExecutePurchaseFollowUpAction_Params
	{
	public:
		TArray<struct FStorePurchase>                              Purchases;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.CheckGiftBoxes
	 */
	struct UStoreContext_CheckGiftBoxes_Params
	{
	public:
		bool                                                       bForce;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.CheckForStuff
	 */
	struct UStoreContext_CheckForStuff_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.CancelEpicPurchasingDisplay
	 */
	struct UStoreContext_CancelEpicPurchasingDisplay_Params
	{	};

	/**
	 * Function BlueprintContext.StoreContext.CanAfford
	 */
	struct UStoreContext_CanAfford_Params
	{
	public:
		struct FOrionStorePrice                                    Price;                                                   // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    Quantity;                                                // 0x0068(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x006C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.StoreContext.BP_GetSkinOffer
	 */
	struct UStoreContext_BP_GetSkinOffer_Params
	{
	public:
		class UOrionSkinItemDefinition*                            Skin;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FStoreOfferBP                                       SkinOffer;                                               // 0x0008(0x0120)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.ToggleTeamChatTab
	 */
	struct UTeamBuilderContext_ToggleTeamChatTab_Params
	{
	public:
		class FString                                              ChatRoomId;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.StopLookingForFight
	 */
	struct UTeamBuilderContext_StopLookingForFight_Params
	{	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.StartTeam
	 */
	struct UTeamBuilderContext_StartTeam_Params
	{
	public:
		EOrionMatchmakingType                                      MatchmakingType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XEJO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionTBPlayerChoices                               LeaderChoices;                                           // 0x0008(0x00F0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCreateTeamComplete;                                    // 0x00F8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.StartSlotSearch
	 */
	struct UTeamBuilderContext_StartSlotSearch_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J3R7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionTBPlayerChoices                               InChoices;                                               // 0x0008(0x00F0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnPlayerFound;                                           // 0x00F8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0108(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.SimpleQuickMatch
	 */
	struct UTeamBuilderContext_SimpleQuickMatch_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionMatchmakingType                                      GameType;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EVQO[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnResult;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnRoleDetermined;                                        // 0x0028(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnInvite;                                                // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnTeamJoined;                                            // 0x0048(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.SetSelectedDeck
	 */
	struct UTeamBuilderContext_SetSelectedDeck_Params
	{
	public:
		class UOrionMcpDeckItem*                                   Deck;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.RespondToQuickMatchInvite
	 */
	struct UTeamBuilderContext_RespondToQuickMatchInvite_Params
	{
	public:
		bool                                                       bAccept;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.RejectSocialPartyTeamInvite
	 */
	struct UTeamBuilderContext_RejectSocialPartyTeamInvite_Params
	{	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.QuickMatch
	 */
	struct UTeamBuilderContext_QuickMatch_Params
	{
	public:
		struct FOrionTBPlayerChoices                               Choices;                                                 // 0x0000(0x00F0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		EOrionMatchmakingType                                      MatchmakingType;                                         // 0x00F0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PLJ9[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnResult;                                                // 0x00F8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnRoleDetermined;                                        // 0x0108(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnInvite;                                                // 0x0118(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnTeamJoined;                                            // 0x0128(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.QueueSolo
	 */
	struct UTeamBuilderContext_QueueSolo_Params
	{
	public:
		EOrionMatchmakingType                                      MatchmakingType;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E5Z4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FOrionTBPlayerChoices                               InChoices;                                               // 0x0008(0x00F0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00F8(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnInvite;                                                // 0x0108(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamPartyLeft__DelegateSignature
	 */
	struct UTeamBuilderContext_OnTeamPartyLeft__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberUpdated__DelegateSignature
	 */
	struct UTeamBuilderContext_OnTeamMemberUpdated__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  NewMemberInfo;                                           // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
		class UOrionTeamBuilderPartyMember*                        NewPartyMemberData;                                      // 0x0138(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberLeft__DelegateSignature
	 */
	struct UTeamBuilderContext_OnTeamMemberLeft__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamMemberJoined__DelegateSignature
	 */
	struct UTeamBuilderContext_OnTeamMemberJoined__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  MemberInfo;                                              // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
		class UOrionTeamBuilderPartyMember*                        PartyMemberData;                                         // 0x0138(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnTeamBuilderProgressChanged__DelegateSignature
	 */
	struct UTeamBuilderContext_OnTeamBuilderProgressChanged__DelegateSignature_Params
	{
	public:
		ETeamBuilderProgression                                    NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.OnSocialJoinTeamCallback
	 */
	struct UTeamBuilderContext_OnSocialJoinTeamCallback_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotUnreserved__DelegateSignature
	 */
	struct UTeamBuilderContext_OnSlotUnreserved__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchResultExpired__DelegateSignature
	 */
	struct UTeamBuilderContext_OnSlotSearchResultExpired__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotSearchFailure__DelegateSignature
	 */
	struct UTeamBuilderContext_OnSlotSearchFailure__DelegateSignature_Params
	{
	public:
		ETBSlotCompleteResult                                      Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnSlotReserved__DelegateSignature
	 */
	struct UTeamBuilderContext_OnSlotReserved__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnReceivedInviteAsSocialPartyMember__DelegateSignature
	 */
	struct UTeamBuilderContext_OnReceivedInviteAsSocialPartyMember__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPreGameReadyChanged__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPreGameReadyChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NumReady;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteFailure__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPlayerInviteFailure__DelegateSignature_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerInviteExpired__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPlayerInviteExpired__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPlayerFound__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPlayerFound__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  MemberInfo;                                              // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberUpdated__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPendingMemberUpdated__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  PendingMember;                                           // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberLeft__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPendingMemberLeft__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnPendingMemberJoined__DelegateSignature
	 */
	struct UTeamBuilderContext_OnPendingMemberJoined__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  PendingMember;                                           // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyReadyChanged__DelegateSignature
	 */
	struct UTeamBuilderContext_OnLobbyReadyChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsReady;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFound__DelegateSignature
	 */
	struct UTeamBuilderContext_OnLobbyPlayerFound__DelegateSignature_Params
	{
	public:
		struct FOrionTBMemberInfo                                  Player;                                                  // 0x0000(0x0138)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnLobbyPlayerFailed__DelegateSignature
	 */
	struct UTeamBuilderContext_OnLobbyPlayerFailed__DelegateSignature_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnJoinSocialPartyTeamComplete__DelegateSignature
	 */
	struct UTeamBuilderContext_OnJoinSocialPartyTeamComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnInviteExpired__DelegateSignature
	 */
	struct UTeamBuilderContext_OnInviteExpired__DelegateSignature_Params
	{	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnFindEnemyTeamResult__DelegateSignature
	 */
	struct UTeamBuilderContext_OnFindEnemyTeamResult__DelegateSignature_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XGI5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Message;                                                 // 0x0008(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnCreateTeamComplete__DelegateSignature
	 */
	struct UTeamBuilderContext_OnCreateTeamComplete__DelegateSignature_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.TeamBuilderContext.OnBecameQuitter__DelegateSignature
	 */
	struct UTeamBuilderContext_OnBecameQuitter__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.NumTeamMembers
	 */
	struct UTeamBuilderContext_NumTeamMembers_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.IsTeamReady
	 */
	struct UTeamBuilderContext_IsTeamReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.IsTeamLeader
	 */
	struct UTeamBuilderContext_IsTeamLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.IsCaptain
	 */
	struct UTeamBuilderContext_IsCaptain_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.HasTeamMember
	 */
	struct UTeamBuilderContext_HasTeamMember_Params
	{
	public:
		int32_t                                                    SlotIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.GetTeamWaitTime
	 */
	struct UTeamBuilderContext_GetTeamWaitTime_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.GetTeamMember
	 */
	struct UTeamBuilderContext_GetTeamMember_Params
	{
	public:
		struct FOrionTBMemberInfo                                  Info;                                                    // 0x0000(0x0138)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UOrionTeamBuilderPartyMember*                        ReturnValue;                                             // 0x0138(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.GetPlayerWaitTime
	 */
	struct UTeamBuilderContext_GetPlayerWaitTime_Params
	{
	public:
		struct FTimespan                                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.GetMyTeamState
	 */
	struct UTeamBuilderContext_GetMyTeamState_Params
	{
	public:
		class UOrionTeamBuilderPartyMember*                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.GetMaxTeamSize
	 */
	struct UTeamBuilderContext_GetMaxTeamSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.FightAnotherTeam
	 */
	struct UTeamBuilderContext_FightAnotherTeam_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.DeclineInvite
	 */
	struct UTeamBuilderContext_DeclineInvite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.ClearAllDelegates
	 */
	struct UTeamBuilderContext_ClearAllDelegates_Params
	{	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.CancelSlotSearch
	 */
	struct UTeamBuilderContext_CancelSlotSearch_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.CancelQuickMatch
	 */
	struct UTeamBuilderContext_CancelQuickMatch_Params
	{	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.CancelQueue
	 */
	struct UTeamBuilderContext_CancelQueue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.BuildCurrentTeamState
	 */
	struct UTeamBuilderContext_BuildCurrentTeamState_Params
	{
	public:
		struct FOrionTBState                                       CurrentState;                                            // 0x0000(0x0010)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.BecomeQuitter
	 */
	struct UTeamBuilderContext_BecomeQuitter_Params
	{
	public:
		class FScriptDelegate                                      Callback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.AcceptSocialPartyTeamInvite
	 */
	struct UTeamBuilderContext_AcceptSocialPartyTeamInvite_Params
	{
	public:
		struct FOrionTBPlayerChoices                               InChoices;                                               // 0x0000(0x00F0)  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Callback;                                                // 0x00F0(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.AcceptSlot
	 */
	struct UTeamBuilderContext_AcceptSlot_Params
	{
	public:
		int32_t                                                    SlotIdx;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAccept;                                                 // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6OXO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      OnInviteExpired;                                         // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnFailure;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderContext.AcceptInvite
	 */
	struct UTeamBuilderContext_AcceptInvite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamCommsContext.ExecuteTeamCommData
	 */
	struct UTeamCommsContext_ExecuteTeamCommData_Params
	{
	public:
		class UPCTeamCommunicationsData*                           TeamCommData;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.GetField
	 */
	struct UTooltipContext_GetField_Params
	{
	public:
		class FName                                                InFieldName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                FieldText;                                               // 0x0008(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.GetDeckDescription
	 */
	struct UTooltipContext_GetDeckDescription_Params
	{
	public:
		EDeckTooltipColumns                                        InType;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NBFF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDeckCategoryDesc                                   Description;                                             // 0x0004(0x0010)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.GetCardEffectSummary
	 */
	struct UTooltipContext_GetCardEffectSummary_Params
	{
	public:
		struct FOrionCardEffectSummary                             ReturnValue;                                             // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.CalculateHeroTooltip
	 */
	struct UTooltipContext_CalculateHeroTooltip_Params
	{
	public:
		class UOrionHeroData*                                      InHeroData;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EOrionAbilityBinding                                       InAbilityKeyBind;                                        // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6AP6[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InAbilityLevel;                                          // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UOrionCardData*>                              InCardsInHand;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.CalculateDeckTooltip
	 */
	struct UTooltipContext_CalculateDeckTooltip_Params
	{
	public:
		class UOrionMcpDeckItem*                                   InDeckItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TooltipContext.CalculateCardTooltip
	 */
	struct UTooltipContext_CalculateCardTooltip_Params
	{
	public:
		class UOrionCardData*                                      Card;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UOrionCardData*>                              UpgradeCards;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.UserFeedbackContext.TakeScreenshotAndInitializeFeedback
	 */
	struct UUserFeedbackContext_TakeScreenshotAndInitializeFeedback_Params
	{
	public:
		EFeedbackType                                              FeedbackType;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.UserFeedbackContext.SendFeedback
	 */
	struct UUserFeedbackContext_SendFeedback_Params
	{
	public:
		class FText                                                Body;                                                    // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.UserFeedbackContext.FinishTakeScreenshotAndInitializeFeedback
	 */
	struct UUserFeedbackContext_FinishTakeScreenshotAndInitializeFeedback_Params
	{	};

	/**
	 * Function BlueprintContext.VideoContext.IsFullscreen
	 */
	struct UVideoContext_IsFullscreen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * DelegateFunction BlueprintContext.HeroAttributeListEntry.OnUpdateAttributeVisuals__DelegateSignature
	 */
	struct UHeroAttributeListEntry_OnUpdateAttributeVisuals__DelegateSignature_Params
	{	};

	/**
	 * Function BlueprintContext.OrionCardDeckEntry.GetQuantity
	 */
	struct UOrionCardDeckEntry_GetQuantity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionCardDeckEntry.GetCardItem
	 */
	struct UOrionCardDeckEntry_GetCardItem_Params
	{
	public:
		class UOrionMcpCardItem*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderFNLib.RoleToText
	 */
	struct UTeamBuilderFNLib_RoleToText_Params
	{
	public:
		EOrionRole                                                 InRole;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JS01[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderFNLib.PositionToText
	 */
	struct UTeamBuilderFNLib_PositionToText_Params
	{
	public:
		EOrionPosition                                             InPosition;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UFLS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.TeamBuilderFNLib.GetHeroDataFromHeroName
	 */
	struct UTeamBuilderFNLib_GetHeroDataFromHeroName_Params
	{
	public:
		class FString                                              HeroName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionHeroData*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.BlueprintContextLibrary.GetContext
	 */
	struct UBlueprintContextLibrary_GetContext_Params
	{
	public:
		class UObject*                                             ContextObject;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              Class;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBlueprintContextBase*                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionAsyncAction_OpenCardPack.OpenCardPack
	 */
	struct UOrionAsyncAction_OpenCardPack_OpenCardPack_Params
	{
	public:
		class UInventoryContext*                                   LibraryContext;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionMcpCardPackItem*                               CardPackToOpen;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionAsyncAction_OpenCardPack*                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BlueprintContext.OrionAsyncAction_RefreshCatalog.RefreshCatalog
	 */
	struct UOrionAsyncAction_RefreshCatalog_RefreshCatalog_Params
	{
	public:
		class UStoreContext*                                       InStoreContext;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOrionAsyncAction_RefreshCatalog*                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
