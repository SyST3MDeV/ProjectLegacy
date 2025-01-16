#pragma once

/**
 * Name: Paragon
 * Version: v30
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum Niagara.ENiagaraDataSetType
	 */
	enum class ENiagaraDataSetType : uint8_t
	{
		ParticleData = 0,
		Shared       = 1,
		Event        = 2,
		MAX          = 3
	};

	/**
	 * Enum Niagara.ENiagaraDataType
	 */
	enum class ENiagaraDataType : uint8_t
	{
		Scalar = 0,
		Vector = 1,
		Matrix = 2,
		MAX    = 3
	};

	/**
	 * Enum Niagara.EUnusedAttributeBehaviour
	 */
	enum class EUnusedAttributeBehaviour : uint8_t
	{
		Copy        = 0,
		Zero        = 1,
		None        = 2,
		MarkInvalid = 3,
		MAX         = 4
	};

	/**
	 * Enum Niagara.EEmitterRenderModuleType
	 */
	enum class EEmitterRenderModuleType : uint8_t
	{
		RMT_None    = 0,
		RMT_Sprites = 1,
		RMT_Ribbon  = 2,
		RMT_Trails  = 3,
		RMT_Meshes  = 4,
		RMT_MAX     = 5
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
