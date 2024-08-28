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
	 * Function LevelupEventWidget.LevelupEventWidget_C.Construct
	 */
	struct ULevelupEventWidget_C_Construct_Params
	{	};

	/**
	 * Function LevelupEventWidget.LevelupEventWidget_C.OnAnimationFinished
	 */
	struct ULevelupEventWidget_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LevelupEventWidget.LevelupEventWidget_C.ExecuteUbergraph_LevelupEventWidget
	 */
	struct ULevelupEventWidget_C_ExecuteUbergraph_LevelupEventWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RLEN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
