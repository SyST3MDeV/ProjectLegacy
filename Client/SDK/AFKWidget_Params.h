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
	 * Function AFKWidget.AFKWidget_C.ShowAFKWarning
	 */
	struct UAFKWidget_C_ShowAFKWarning_Params
	{	};

	/**
	 * Function AFKWidget.AFKWidget_C.HideAFKWarning
	 */
	struct UAFKWidget_C_HideAFKWarning_Params
	{	};

	/**
	 * Function AFKWidget.AFKWidget_C.OnAnimationFinished
	 */
	struct UAFKWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AFKWidget.AFKWidget_C.ExecuteUbergraph_AFKWidget
	 */
	struct UAFKWidget_C_ExecuteUbergraph_AFKWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HR42[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
