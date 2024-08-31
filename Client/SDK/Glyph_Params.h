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
	 * Function Glyph.Glyph_C.SetFrameNumber
	 */
	struct AGlyph_C_SetFrameNumber_Params
	{
	public:
		int32_t                                                    FrameNumber;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Glyph.Glyph_C.UserConstructionScript
	 */
	struct AGlyph_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Glyph.Glyph_C.OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676
	 */
	struct AGlyph_C_OnLerpComplete_C65F2D2D47A55E6FD9631593BF052676_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G45E[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimerHandle                                        LerpTimerHandle;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Glyph.Glyph_C.OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676
	 */
	struct AGlyph_C_OnValueUpdated_C65F2D2D47A55E6FD9631593BF052676_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BPW4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimerHandle                                        LerpTimerHandle;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Glyph.Glyph_C.OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13
	 */
	struct AGlyph_C_OnLerpComplete_1EA0F566445C17FA5F6F2C8BDF8FDF13_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQCA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimerHandle                                        LerpTimerHandle;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Glyph.Glyph_C.OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13
	 */
	struct AGlyph_C_OnValueUpdated_1EA0F566445C17FA5F6F2C8BDF8FDF13_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AAG6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTimerHandle                                        LerpTimerHandle;                                         // 0x0008(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Glyph.Glyph_C.OnActivationChanged
	 */
	struct AGlyph_C_OnActivationChanged_Params
	{
	public:
		bool                                                       bActivated;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Glyph.Glyph_C.ExecuteUbergraph_Glyph
	 */
	struct AGlyph_C_ExecuteUbergraph_Glyph_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
