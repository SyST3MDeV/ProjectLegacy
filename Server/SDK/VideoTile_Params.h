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
	 * Function VideoTile.VideoTile_C.Set Screenshot Image
	 */
	struct UVideoTile_C_SetScreenshotImage_Params
	{
	public:
		TAssetPtr<class UTexture2D>                                LazyTexture;                                             // 0x0000(0x001C)  (Parm)
	};

	/**
	 * Function VideoTile.VideoTile_C.SetVideoURL
	 */
	struct UVideoTile_C_SetVideoURL_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function VideoTile.VideoTile_C.SetHeading
	 */
	struct UVideoTile_C_SetHeading_Params
	{
	public:
		class FText                                                InHeading;                                               // 0x0000(0x0018)  (Parm)
	};

	/**
	 * Function VideoTile.VideoTile_C.OnMouseButtonUp
	 */
	struct UVideoTile_C_OnMouseButtonUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LHM1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function VideoTile.VideoTile_C.OnMouseButtonDown
	 */
	struct UVideoTile_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3XE6[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00A8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function VideoTile.VideoTile_C.PreConstruct
	 */
	struct UVideoTile_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function VideoTile.VideoTile_C.OnMouseEnter
	 */
	struct UVideoTile_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6BT4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function VideoTile.VideoTile_C.OnMouseLeave
	 */
	struct UVideoTile_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function VideoTile.VideoTile_C.BndEvt__LazyImageScreenshot_K2Node_ComponentBoundEvent_0_OnImageLoadingStateChanged__DelegateSignature
	 */
	struct UVideoTile_C_BndEvt__LazyImageScreenshot_K2Node_ComponentBoundEvent_0_OnImageLoadingStateChanged__DelegateSignature_Params
	{	};

	/**
	 * Function VideoTile.VideoTile_C.ExecuteUbergraph_VideoTile
	 */
	struct UVideoTile_C_ExecuteUbergraph_VideoTile_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
