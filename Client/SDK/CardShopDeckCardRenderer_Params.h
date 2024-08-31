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
	 * Function CardShopDeckCardRenderer.CardShopDeckCardRenderer_C.Construct
	 */
	struct UCardShopDeckCardRenderer_C_Construct_Params
	{	};

	/**
	 * Function CardShopDeckCardRenderer.CardShopDeckCardRenderer_C.OnMouseEnter
	 */
	struct UCardShopDeckCardRenderer_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FMIL[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardShopDeckCardRenderer.CardShopDeckCardRenderer_C.OnMouseLeave
	 */
	struct UCardShopDeckCardRenderer_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function CardShopDeckCardRenderer.CardShopDeckCardRenderer_C.ExecuteUbergraph_CardShopDeckCardRenderer
	 */
	struct UCardShopDeckCardRenderer_C_ExecuteUbergraph_CardShopDeckCardRenderer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
