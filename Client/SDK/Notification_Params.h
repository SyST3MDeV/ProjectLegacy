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
	 * Function Notification.Notification_C.GetNotification
	 */
	struct UNotification_C_GetNotification_Params
	{
	public:
		struct FOrionNotification                                  ReturnValue;                                             // 0x0000(0x01A0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Notification.Notification_C.Play Exit Animation
	 */
	struct UNotification_C_PlayExitAnimation_Params
	{	};

	/**
	 * Function Notification.Notification_C.Play Intro Animation
	 */
	struct UNotification_C_PlayIntroAnimation_Params
	{	};

	/**
	 * Function Notification.Notification_C.Construct
	 */
	struct UNotification_C_Construct_Params
	{	};

	/**
	 * Function Notification.Notification_C.OnAnimationFinished
	 */
	struct UNotification_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Notification.Notification_C.BndEvt__DefaultButton_K2Node_ComponentBoundEvent_919_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UNotification_C_BndEvt__DefaultButton_K2Node_ComponentBoundEvent_919_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Notification.Notification_C.BndEvt__DefaultButton_C_63_K2Node_ComponentBoundEvent_927_OrionBaseButtonClicked__DelegateSignature
	 */
	struct UNotification_C_BndEvt__DefaultButton_C_63_K2Node_ComponentBoundEvent_927_OrionBaseButtonClicked__DelegateSignature_Params
	{
	public:
		class UOrionBaseButton*                                    Button;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Notification.Notification_C.ExecuteUbergraph_Notification
	 */
	struct UNotification_C_ExecuteUbergraph_Notification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Notification.Notification_C.Exit Animation Finished__DelegateSignature
	 */
	struct UNotification_C_ExitAnimationFinished__DelegateSignature_Params
	{
	public:
		class UNotification_C*                                     Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
